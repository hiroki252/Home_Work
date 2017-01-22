#include<stdio.h>
int main()
{
   int K,N,i,j,z;
   int GT_K,GT_N,GT;
   float KQ;
   GT_K = 1;
   GT_N = 1;
   GT   = 1;
   printf("\nChuong trinh To Hop Chap K Cua N");
   printf("\nChu y : N > K");
   printf("\nNhap K = ");
   scanf("%d",&K);
   printf("\nNhap N = ");
   scanf("%d",&N);
   for(i=1;i<=K;i++)
   {
       GT_K = GT_K*i;
   }
   for (j=1;j<=N;j++)
   {
       GT_N = GT_N*j;
   }
   for(z=1;z<=(N-K);z++)
   {
       GT = GT*z;
   }
   KQ = GT_N /(GT_K*GT);
   printf("\nKQ = %0.1f",KQ);
   getch();

   return 0;
}

