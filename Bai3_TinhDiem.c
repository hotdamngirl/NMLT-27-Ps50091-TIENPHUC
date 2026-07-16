#include <stdio.h>
int main() {
    float diemtoan,diemly,diemhoa;
    float diemtrungbinh;
    printf("nhap diem toan, ly, hoa: ");
    scanf("%f %f %f", &diemtoan, &diemly, &diemhoa);
    diemtrungbinh = (diemtoan * 2 + diemly + diemhoa)/4.0;    
    printf("diem trung binh la: %.2f\n", diemtrungbinh);

    return 0;
}
 
    