#include <stdio.h>
#include <iostream>
#include <conio.h>

struct PhanSo
{
    int MauSo, TuSo;
};
typedef struct PhanSo PhanSo;
void NhapPhanSo(PhanSo &);
void XuatPhanSo(PhanSo);

void NhapPhanSo(PhanSo &ps)
{
    printf("\nNhap tu so= ");
    scanf("%d", &ps.TuSo);

    do
    {
        printf("\nNhap mau so=");
        scanf("%d", &ps.MauSo);
    } while (ps.MauSo == 0);
}

void XuatPhanSo(PhanSo ps)
{
    printf("%d/%d", ps.TuSo, ps.MauSo);
}
int main()
{
    PhanSo ps;
    NhapPhanSo(ps);
    XuatPhanSo(ps);

    getch();
    return 0;
}
