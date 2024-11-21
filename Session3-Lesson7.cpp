#include<stdio.h>
int main(){
    // Khai bao bien
	int number, digit1, digit2, digit3, digit4, sum;
	// Nhap so
	printf(" Moi ban nhap so co 4 chu so: ");
	scanf("%d", &number);
	
    // Kiem tra co phai 4 chu so khong
    if (number < 1000 || number > 9999) {
    printf("Loi: So ban nhap khong phai la so co 4 chu so.\n");
    return 1; 
}
    // Tach cac chu so
    digit1 = number / 1000;
    digit2 = (number / 100) % 10;
    digit3 = (number / 10) % 10;
    digit4 = number % 10;
    // Tinh tong
    sum = digit1 + digit2 + digit3 + digit4;
    // Hien thi ket qua
    printf("Ket qua cua tong 4 chu so la: %d\n", sum);
    
    return 0;
}
