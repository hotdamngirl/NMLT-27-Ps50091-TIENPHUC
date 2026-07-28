#include<stdio.h>// giá gạo là 2, giá của đậu là 1.5, tỉ giá đô 26.29(nhập số lượng gạo và số lượng đậu;tính tiền)
int main(){
    int a = 2, b = 1.5;
    float c = 26.29;
    float gao, dau, thanhtien;
    printf(" Nhap so luong gao:");
    scanf("%f", &gao);
    printf(" Nhap so luong dau;");
    scanf("%f", &dau);
    thanhtien = (gao*a +dau*b)*c;
    printf (" So tien phai tra la: %.2f VND", thanhtien);
    return 0;
}