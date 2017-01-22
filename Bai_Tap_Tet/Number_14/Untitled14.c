#include<stdio.h>
#include<conio.h>
    void Hang(int a[100][100], int m, int n, int x, int *t);
    void Hang(int a[100][100], int m, int n, int x, int *t)
    {
int i=x, j=x;
while (j<n)
{
   a[i][j++]=*t ;
   (*t)++;
}
while (i<m)
{
    a[i++][j]=*t;
    (*t)++;
}
while (j>x)
{
    a[i][j--]=*t;
    (*t)++;
}
while (i>x)
{
    a[i--][j]=*t;
    (*t)++;
}
    }
    int main()
    {
        int m,n,i,j;
        int a[100][100];
        printf("\nso hang ");
        scanf("%d",&m);
        printf("\nso cot");
        scanf("%d",&n);
        for(i=1;i<=m;i++)
            for(j=1;j<=n;j++)
            a[i][j]=0;
        int t=1,x=1,m1=m,n1=n;
        while (t<=(m*n))
        {
            Hang(a,m1,n1,x,&t);
        }
        for(i=1;i<=m;i++)
        {
            for(j=1;j<=n;j++)
                printf("%4d",a[i][j]);
            printf("\n");
        }
        getch();
    }

