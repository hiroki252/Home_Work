#include<stdio.h>
int F(int n);
int F(int n)
{
    if (n==1)
        return 1;
    else if(n==2)
        return 2;
    else if (n >= 3)
        return(F(n-1)+F(n-2));
}
int main()
{
    int n,i;
    n = 10;
    for (i=0;i<=n;i++) // Vòng lặp để in các vị trí khi Return
    printf(" %d", F(i));
    return 0;
}
