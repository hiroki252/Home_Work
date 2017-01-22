#include<stdio.h>
void main()
{
    float a;
    int b;
    printf("Your Number");
    scanf("%f",&a);
    b=(int)a;// Ep kieu : gia tri cua b la phan nguyen cua a
    if(b/a == 1) // neu la so nguyen thi se nguyen chia nguyen se la 1 con lai la khong phai
        printf("Done");
    else
        printf("Wrong");
}
