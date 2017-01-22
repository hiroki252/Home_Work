#include<stdio.h>
#include<Math.h>
int Chinh_Phuong(int a,int b)
{
b=sqrt(a);
if(b*b==a)
    return 1;
else
    return 0;
}
int main()
{int a,b;
    printf("Your Number");
    scanf("%d",&a);
    printf ("%d",Chinh_Phuong(a,b));
    getch();
    return 0;
}
