#include<stdio.h>
int main() {
    // Khai bao do dai canh va chieu cao cua tam giac
    int length, height;
    // Nhap do dai canh va chieu cao 
    printf("Moi ban nhap do dai canh: ");
    scanf("%d", &length); 
    printf("Moi ban nhap chieu cao: ");
    scanf("%d", &height); 
    // Tinh dien tich tam giac
    float area =(length * height)/2;
    // In ket qua ra man hinh 
    printf("Do dai canh cua tam giac: %dcm\n", length);
    printf("Chieu cao cua tam giac: %d cm\n", height);
    printf("Dien tich cua tam giac: %.2f cm^2\n", area);
    return 0;
}
