#include<stdio.h>
void main ()
{
    int n,k,x,a[100],i;
    printf("\nNhap so phan tu cua mang N = ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf(" A[%d] = ",i);
        scanf("%d",&a[i]);
    }
    printf("\nNhap vi tri can chen");
    scanf("%d",&k);
    printf("\nNhap gia tri can chen");
    scanf("%d",&x);
    for(i=n;i>=k;i--)
        a[i+1]=a[i];
        a[k]=x;
    for(i=1;i<=n;i++)
        printf("%d\t",a[i]);


    getch();
}

