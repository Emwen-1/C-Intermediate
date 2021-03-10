//Calculate the area of the Circle
#include <stdio.h>
#include <stdlib.h>
#define pi 3.1472
int main()
{
    float radius,area ;
    printf("Enter radius of the Circle : ");
    scanf("%f" , &radius) ;

    area = pi * radius * radius;

    printf("The area of the Circle is %f." , area);
    return 0;
}
