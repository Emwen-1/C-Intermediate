#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, num1 , num2 ,smallest;
    printf("Enter 3 numbers : ");
    scanf ("%d %d %d" , &num , &num1, &num2);

    smallest  = num;

    if(num > num1){
        smallest = num1;
    }
    if(num1 > num2){
        smallest = num2;
    }

    printf("Smallest : %d" , smallest);



}
