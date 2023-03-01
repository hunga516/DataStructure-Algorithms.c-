#include<stdio.h>
#include<conio.h>

struct Date{
	int day,month,year;
};

typedef struct Date date;

void nhapNgay(date &);
void xuatNgay(date );

void nhapNgay(date &d){
	do{
		printf("nhap ngay ");
		scanf("%d",&d.day);
		printf("nhap thang ");
		scanf("%d",&d.month);
		printf("nhap nam ");
		scanf("%d",&d.year);
	}while(d.day <0 || d.day >32 || d.month <0 || d.month>12 || d.year <=0);
}

void xuatNgay(date d){
	printf("ngay : %d\t thang : %d\t nam : %d",d.day,d.month,d.year);
}

int main(){
	date d;
	nhapNgay(d);
	xuatNgay(d);
	getch();
	return 0;
}