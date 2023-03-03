#include <stdio.h>
#include <conio.h>

struct Oxy
{
	int x, y;
};
typedef struct Oxy OXY;
void NhapOxy(OXY &);
void XuatOxy(OXY);

void NhapOxy(OXY &nhap)
{
	do
	{
		printf("Nhap x=");
		scanf("%d", &nhap.x);
	} while (nhap.x < 0);
	do
	{
		printf("Nhap y= ");
		scanf("%d", &nhap.y); //bao loi khuc nay, eo hieu luon vcl
	} while (&nhap.y < 0);
}
void XuatOxy(OXY nhap)
{
	printf("Toa do diem Oxy la (%d,%d)", nhap.x, nhap.y);
}

int main()
{
	OXY nhap;
	NhapOxy(nhap);
	XuatOxy(nhap);
	getch();
	return 0;
}