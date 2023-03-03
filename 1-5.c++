#include <stdio.h>
#include <conio.h>

struct DonThuc
{
    int a,n;
};

typedef struct DonThuc DONTHUC;

void nhapDonThuc(DONTHUC &);
void xuatDonThuc(DONTHUC);

void nhapDonThuc(DONTHUC &dt){
    printf("Nhap he so a=");
    scanf("%d",&dt.a);

    do{
        printf("Nhap cap bac don thuc n=");
        scanf("%d",&dt.n);
    }while(dt.n <= 0);
}
void xuatDonThuc(DONTHUC dt){
    printf("Don thuc vua nhap la: %5dX^%d", dt.a, dt.n);
}
int main(){
    DONTHUC dt;
    nhapDonThuc(dt);
    xuatDonThuc(dt);
    getch();
    return 0;
}