#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,k;
    k=1;
    int a[100][100];
    printf("\nNhap so phan tu cua mang N = ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j]=k;
        k++;
        }
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n\n");
    }
    getch();
}
