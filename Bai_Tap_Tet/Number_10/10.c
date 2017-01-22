#include<stdio.h>
int UCLN(int a, int b)
{
    if(b==0)
        return a;
    else
        return (UCLN(b,a%b));
}
int main()
{
    int a,b;
    printf("\nNhap hai so a va b");
    scanf ("%d%d",&a,&b);
    printf("KQ = %d",UCLN(a,b));
    getch();
}
