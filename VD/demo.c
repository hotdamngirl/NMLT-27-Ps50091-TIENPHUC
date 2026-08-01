#include<stdio.h>
int main(){
    int A[3][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
    // int B[5] = {3,6,7,2,4}; // B[0]=3 , B[1]= 6 
    // khai bao mang B
    // kich thuoc mang 5
    // gan gia tri ban dau
    float D[10];
    // for(int i=0; i<5;i++){
    // printf("B[%d] = %d\n",i,B[i]);
    // }
    // printf("A[%d,%d] = %d\n"2,2,A[2][2]);
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
             printf("A[%d,%d] = %d\n",i,j,A[i][j]);
        }
        printf("\n");
    }
    return 0;
}