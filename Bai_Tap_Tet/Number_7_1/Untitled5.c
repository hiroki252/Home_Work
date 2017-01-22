#include<stdio.h>
int GT(int i)
{
    if (i==0)
        return 1;
    else
        return (i*GT(i-1));
}
int main()
{
    int i;
    scanf("%d",&i);
    printf("Giai thua tinh duoc la %d",GT(i));
    getch();
    return 0;
}
