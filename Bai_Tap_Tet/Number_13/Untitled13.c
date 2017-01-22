#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,k;
    int a[100][100],t;
    t=1;
    printf("\nNhap so phan tu cua mang N = ");
    scanf("%d",&n);
    for (j=1;j<=n;j++)
    {
        for (i=1;i<=n;i++)
           {
               a[i][j]=t;
               t++;
           }


    }
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=n;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    getch();
}
