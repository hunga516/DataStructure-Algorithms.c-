#include<stdio.h>
#include<conio.h>

struct HonSo
{
        int soNgyen, Mauso, Tuso;
};
typedef struct HonSo Honso;
void NhapHonSo(HonSo &);
void XuatHonSo(HonSo );

void NhapHonSo(HonSo &hs){
    do
    {
            printf("Nhap so nguyen lon hon 0:");
            scanf("%d", &hs.soNgyen);                  
    } while (hs.soNgyen <=0);      

    printf(" Nhap tu so:");
    scanf("%d", &hs.Tuso);

    do
    {
            printf("Nhap mau so lon hon 0: ");
            scanf("%d", &hs.Mauso);
    } while (hs.Mauso <=0);  
      
}
void XuatHonSo(HonSo hs){
    printf("%d(%d/%d)", hs.soNgyen, hs.Tuso, hs.Mauso);
}
int main(){
    HonSo hs;
    NhapHonSo(hs);
    XuatHonSo(hs);

    getch();
    return 0;
}

