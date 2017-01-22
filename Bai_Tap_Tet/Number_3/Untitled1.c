#include<stdio.h>
#include<Math.h>
int main()
{
    float a,b,c,Delta,X1,X2,X;
    printf("\nChuong trinh giai phương trinh bac 2");
    printf ("\nNhap A:");
    scanf("%f",&a);
    printf("\nNhap B:");
    scanf("%f",&b);
    printf("\nNhap C:");
    scanf("%f",&c);
    Delta = b*b-4*a*c;
    if(Delta == 0)
    {
        printf("\nPhuong trinh co nghiem kep");
        X=-b/(2*a);
        printf("X=%f",X);
    }
    else if (Delta<0)
        printf("\nPhuong trinh vo nghiem");
    else
    {
        X1=(-b+sqrt(Delta))/2*a;
        X2=(b+sqrt(Delta))/2*a;
        printf("\nX1 = %f",X1);
        printf("\nX2 = %f",X2);

    }
    getch();
    return 0;

}
