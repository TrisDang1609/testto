#include<stdio.h>
/*
    thử đặt vấn đề giải quyết bài toán nhé
    chúng ta có các số chia hết cho 2 và 5 đúng không
    thì đơn giản nhất cứ chạy vòng lặp từ 1 tới n xong chia hết cho 2 số kia thì cộng vào 
    nhưng mà nó quá đơn giản và không vui 
    ae mình nghĩ tí nhé:
    bây h bạn quan tâm tới 10 số một phát có đuôi như này xxx(0,1,2,3,4,5,6,7,8,9) nhỉ 
    thì ta có là nó có các số chia hết cho 2 hoặc 5 là 0 2 4 5 6 8 - cộng vào là 25
    còn lại phần trước của bộ xét 10 số này sẽ y như nhau và nó có tất cả 6 số tức là
    với mỗi cặp 10 số ta sẽ lấy xxx0*6 + 25 (xxx0 - là các số bỏ đơn vị)
    ok triển
*/
int main(){
    int n;
    scanf("%d", &n);
    int i = 0; // cái này là bạn tạo biến lặp nhưng sau vòng lặp nó vấn tồn tại 
    // tí bạn sẽ giải thích
    int tong = 0; // khởi tạo biến tổng
    while(1){ // vòng lặp luôn đúng vì 1 ánh xạ là true nên auto chạy 
        if(i+10 > n) break; // cái này dủng đề tránh trường hợp bước nhảu của mình quá mất n
        // lùi lại thì khá là rối rắm nên để như này luôn nhé
        // ý nghĩa là với n = 15 thì mình xét tới i = 0 thui tức là sẽ tính được 0 2 4 5 6 8
        // tức là từ 0 tới 10 hehe còn đoạn thiếu ngắn ngắn dưới làm hehe 
        tong += (i*6 + 25); // biểu thức bên trên đây nhé
        i+=10;
    }
    while(i <= n){ // cái này là tính cái đoạn thiếu như ví dụ là thiếu từ 10 -> 15
        if(i % 2 == 0 || i % 5 == 0) tong += i;
        i++;
    }
    printf("%d", tong);
    // lợi ích của đoạn code này giảm thiệu lượng tính toán cho ae
    // nó giúp ae nâng cao tư duy 
    // vậy thôi
}
