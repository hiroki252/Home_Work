#include<stdio.h>
int main()
{
    int a,i,t;
    t=0;

    printf("\nNhap so can kiem tra");
    scanf("%d",&a);
    if(a=1)
        printf ("\nSo ban vua nhap la so nguyen to");
    else
    {
    for (i=2;i<a;i++)
    {
        if (a%i != 0)
            t++;
    }
    if(t==0)
        printf("\nSo ban vua nhap la so nguyen to");
    else
        printf("\nSo ban vua nhap khong phai la so nguyen to");
    }
    getch();
    return 0;
}
