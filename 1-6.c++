#include<stdio.h>
#include<conio.h>

struct DaThuc
{
	float a;
	int n;
};
typedef struct DaThuc DATHUC;

void NhapDaThuc(DATHUC &);
void XuatDaThuc(DATHUC);

void NhapDaThuc(DATHUC &dt)
{
	printf("\nNhap bac da thuc: ");
	scanf("%d", &dt.n);
	for(int i = dt.n; i >= 0; i--)
	{
		printf("\nNhap he so: ");
		scanf("%f", &dt.a);
	}
}

void XuatDaThuc(DATHUC dt)
{
	for(int i = dt.n; i >= 0; i--)
	{
		printf("%8fx^%d + ", dt.a, i);
	}
}

int main()
{
	DATHUC dt;
	NhapDaThuc(dt);
	XuatDaThuc(dt);

	getch();
	return 0;
}