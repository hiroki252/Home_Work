#include<stdio.h>
#include<Math.h>
int main()
{
    float a,b,c,X1,X2,X,Delta;
    printf("\nChuong trinh giai phuong trinh trung phuong");
    printf("\nNhap A = ");
    scanf("%f",&a);
    printf("\nNhap B = ");
    scanf("%f",&b);
    printf("\nNhap C = ");
    scanf("%f",&c);
    Delta = b*b-4*a*c;
    if(Delta =0)
    {
        printf("\nPhuong trinh co mot nghiem can ");
        X = sqrt(-b/2*a);
        printf("\nX = %0.2f",X);
    }
    else if (Delta <0)
        printf("\nPhuong trinh vo nghiem");
    else
    {
        printf("\nPhuong trinh co 2 nghiem can");
        X1=sqrt((-b-sqrt(Delta))/2*a);
        X2=sqrt((b-sqrt(Delta))/2*a);
        printf(" \nX1 = %0.2f",X1);
        printf("\nX2 = %0.2f",X2);
    }
    getch();
    return 0;
}
