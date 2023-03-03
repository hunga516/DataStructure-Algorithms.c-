#include<stdio.h>
#include<conio.h>

struct DiemOxyz{
	float x,y,z;
};

typedef struct DiemOxyz DIEM;

void nhapDiem(DIEM &d);
void xuatDiem(DIEM);

void nhapDiem(DIEM &d){

	printf("Nhap diem x0 = ");  //thich thi dowhile
	scanf("%f",&d.x);

	printf("Nhap diem y0 = ");  //thich thi dowhile
	scanf("%f",&d.y);

	printf("Nhap diem z0 = ");  //thich thi dowhile
	scanf("%f",&d.z);
}

void xuatDiem(DIEM d){
	printf("M(%f,%f,%f)",d.x,d.y,d.z);
}

int main(){
	DIEM d;
	nhapDiem(d);
	xuatDiem(d);
	getch();
	return 0;
}