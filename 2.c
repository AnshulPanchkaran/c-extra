#include<stdio.h>
#include<conio.h>
int main()
{
    float r,p,t,simple;
    printf("enter the value of r\n");
    scanf("%f",&r);
     printf("enter the value of p\n");
    scanf("%f",&p);
     printf("enter the value of t\n");
    scanf("%f",&t);
    simple = (p*r*t)/100;
    printf("simple =%f",simple);
    return 0;

}