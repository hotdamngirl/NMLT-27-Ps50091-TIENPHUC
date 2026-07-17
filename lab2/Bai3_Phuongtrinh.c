#include<stdio.h>
#include<stdlib.h>
int main(){
float a,b,x;
printf("Nhap he so a (a khac 0):");
scanf("%f",&a);
printf("Nhap he so b:");
scanf("%f",&b);
if(a==0){
    printf("He so a phai khac 0\n");
    exit(0);
}

x=-b/a;
printf("Nghiem cua phuong trinh ax + b = 0 la: x = %.2f\n",a,b,x);
return 0;
}