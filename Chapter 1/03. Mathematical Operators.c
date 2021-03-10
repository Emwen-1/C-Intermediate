#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 , num2, sum , sub , mul,remainder ;
    float div;
    num1 = 2;
    num2 = 3;
    sum = num1 +num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num2 / num1;
    remainder = num2 % num1;
    printf("Sum : %d\nSub : %d\nmul : %d\nDiv : %f\nRemainder : %d\n" , sum , sub , mul , div, remainder);
    return 0;


}
