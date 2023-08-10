#include<stdio.h>
/*
nói chung thì anh em hiêu cho bạn đề bảo là đệ quy tìm bcnn tức là phải dùng đệ quy để tìm
bcnn chứ không phải kết quả của đệ quy và bội chung nhỏ nhất đâu nhé
vì vậy khôn ngoan ta sẽ tìm ucn với thuật toán euclid
và có công thức liên hệ a,b,ucln(a,b) và bcnn(a,b) như sau
bcln = a"*b/ucln 
ngày xưa bạn cũng chứng minh cho ae rồi - không nhớ mở teams 
*/
int ucln(int a, int b){ // cái này thì ae chịu khó tìm hiểu thuật toán euclid nhé
// trên wiki có đấy vì nó khá đơn giản 
    if(a % b == 0) return b; 
    ucln(b, a % b);
}
int main(){
    int a, b;
    scanf("%d%d",&a, &b);
    int bcnn = a*b/ucln(a,b);
    printf("%d", bcnn);
}