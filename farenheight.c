#include <stdio.h>
int main()
{
    float farenheight, celcius;
    printf("enter the value of farenheighte");
    scanf("%f", &farenheight);
    celcius = ((farenheight - 32) * 5) / 9;
    printf("%.2f farenheight = %.2fcelcius",farenheight,celcius);
    return 0;
}