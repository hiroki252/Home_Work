#include<stdio.h>
int main()
{
    int a,i,gt;
    gt=1;
    printf("\nNhap N");
    scanf("%d",&a);
    for(i=1;i<a;i++){
        gt=gt*i;
        }
    printf ("%d",gt);
getch();
}
