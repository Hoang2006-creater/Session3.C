#include<stdio.h>
int main(){
	// Khai bao bien
	float celsius, fahrenheit;
	// Nhap nhiet do 
	printf("Moi ban nhap nhiet do theo do celsius: ");
	scanf ("%f", &celsius);
	// tinh toan nhiet do 
	fahrenheit = (celsius * 9 / 5) + 32;
	//Hien thi ket qua
	printf("nhiet do theo fahrenheit: %.2f\n", fahrenheit);
	
	return 0;	
}
