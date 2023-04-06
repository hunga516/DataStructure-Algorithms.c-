//Viết hàm đệ quy tính tổng của biểu thức sau đây: S(x, n) = x + x^2/2! + x^3/3! + … + x^n/n!

#include<stdio.h>

#include<conio.h>

float hamTinhBieuThucso2(float x, int n)

{

if(n == 0)

return 0;

if(n == 1)

return x;

return (1 + x/n) * Tinh(x, n - 1) - (x/n) * Tinh(x, n - 2);

}

int main()

{

float x;

int n;

printf("\nNhap x= "); 
scanf("%f", &x);

printf("\nNhap so phan tu trong mang n= "); 
scanf("%d", &n);

float kq = hamTinhBieuThucso2(x, n);

printf("\nKet qua = %.3f", kq); //ket qua lay 3 so sau ,

getch();

return 0;

}