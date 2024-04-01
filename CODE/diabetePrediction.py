import numpy as np
import pandas as pd
import matplotlib as mpl
from math import exp

wholeData = pd.read_csv("E:/AI/PROJECT_1_DIABETE/DATA/Dataset_challenge.csv")
# imput data from file
# list of table header
# Pregnancies  Glucose  BloodPressure SkinThickness Insulin BMI DiabetesPedigreeFunction
# Age Outcome

x_train = wholeData.iloc[1:595, :-1]
y_train = wholeData.iloc[1:595:, 8]
# get data from wholeData  n

# normalize data
# note if (sigmoid) range will be (-3,3)
# note if(reLU) range will be > 0


def normalizeDate(data):
    if isinstance(data, pd.DataFrame):
        res = data.copy()
        for x in data.columns:
            maxVal = data[x].max()
            res[x] = (data[x] / maxVal * 6) - 3  # make data in range [-3,3]
        return res
    else:
        maxVal = data.max()
        res = (data / maxVal * 6) - 3
        return res


x_train = normalizeDate(x_train)  # normalize the data
print(x_train.columns)


# first, define sigmoid & relu and their derivative
def sigmoidFunction(x):
    return 1 / (1 + exp(-x))


def reLUfunction(x):
    return max(0, x)


# define the init-matrix - just random
