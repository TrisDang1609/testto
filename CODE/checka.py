import numpy as np
import pandas as pd

h = np.array(
    [[0.2, 0.8, -0.5, 1.0], [0.5, -0.91, 0.26, -0.5], [-0.26, -0.27, 0.17, 0.87]]
)
b = np.array([1, 2, 3, 2.5])
res = np.dot(h, b)
bias = [2, 3, 0.5]
res = res + bias
print(type(res))
