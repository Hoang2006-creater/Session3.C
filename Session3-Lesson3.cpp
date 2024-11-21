#include <stdio.h>
int main() {
    // Khai bao hang so va PI
    const float PI = 3.14;
    float radius;
    // Nhap ban kinh 
    printf("Moi ban nhap ban kinh: ");
    scanf("%f", &radius); 
    // Tinh chu vi va dien tich
    float circumference = 2 * PI * radius;
    float area = PI * radius * radius;
    // In ket qua ra man hinh 
    printf("Ban kinh cua hinh tron: %.2f cm\n", radius); 
    printf("Chu vi cua hinh tron: %.2f cm\n", circumference);
    printf("Dien tich cua hinh tron: %.2f cm^2\n", area);
    return 0;
}
