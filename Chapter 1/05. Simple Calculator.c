#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1, number2 , sum,sub, mul,div;
    printf("\n\tEnter First Number \t: ");
    scanf("%d" , &number1);
    printf("\n\tEnter Second Number \t: ");
    scanf("%d" , &number2);\

    sum = number1 + number2;
    sub = number1 - number2;
    mul = number1 * number2;
    div = number1 / number2;

    printf("Sum \t: %d\n" , sum);

    printf("Sub \t: %d\n" , sub);

    printf("Mul \t: %d\n" , mul);

    printf("Div \t: %d\n" , div);



}
