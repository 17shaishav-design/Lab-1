#include<stdio.h>
int main ( ) {
    int a,b,sum,substract,multiply;
    float divide;
    printf("Enter value of a : ");
    scanf("%d",&a);
    printf("Enter value of b : ");
    scanf("%d",&b);
    sum = a + b ;
    substract = a - b ;
    multiply = a * b ;
    divide = (float)a / b ;
    printf("Sum is : %d\n",sum);
    printf("Substract is : %d\n",substract);
    printf("multiply is : %d\n",multiply);
    printf("divide is : %f",divide);
}
