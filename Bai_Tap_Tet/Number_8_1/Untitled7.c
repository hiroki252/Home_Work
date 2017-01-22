#include<stdio.h>
int GT_N(int N)
{
    if (N==0)
        return 1;
    else
        return (N*GT_N(N-1));
}
int GT_K(int K)
{
    if(K==0)
        return 1;
    else
        return (K*GT_K(K-1));
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
    int N,Z,K;
    int KQ;
    printf("\nChuong trinh tinh To Hop Chap K cua N");
    printf("\nNhap N = ");
    scanf("%d",&N);
    printf("\nNhap K = ");
    scanf("%d",&K);
    Z=N-K;
    KQ = GT_N(N)/(GT_K(K)*GT(Z));
    printf(" KQ = %d",KQ);
    getch();

}
