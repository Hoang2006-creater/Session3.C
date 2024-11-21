#include <stdio.h>
int main(){
	// Khai bao bien 
    float diemToan, diemAnh, diemVan,tongDiem,diemTB;
    // nhap du lieu
    printf("Moi ban nhap vao diem Anh ");
    scanf ("%f",&diemAnh);
    printf("Moi ban nhap vao diem Toan ");
    scanf ("%f",&diemToan);
    printf("Moi ban nhap vao diem Van ");
    scanf ("%f",&diemVan);
    // tinh toan
    //tinh tong
    tongDiem = diemToan + diemAnh + diemVan;
    // tinh diem trung binh
    diemTB = tongDiem / 3;
    printf("%Tong diem = %f \n", tongDiem);
    printf("%diemTB = %f \n", diemTB);

return 0;
}
