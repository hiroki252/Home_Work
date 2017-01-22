#include<stdio.h>
int GT_N(int N)
{
    if (N==0)
        return 1;
    else
        return (N*GT_N(N-1));
}
int GT(int Z)
{
    if(Z==0)
        return 1;
    else
        return (Z*GT(Z-1));
}
int main()
{
    int N,K,Z,KQ;
    printf("\nChương trinh Chinh Hop K Cua N");
    printf("\nNhap N = ");
    scanf("%d",&N);
    printf("\nNhap K = ");
    scanf("%d",&K);
    Z = (N-K);
    KQ = GT_N(N)/GT(Z);
    printf("KQ = ",KQ);
}
