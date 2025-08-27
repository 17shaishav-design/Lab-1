#include<stdio.h>
int main ( ) {
    float net, gross;
    printf("Enter value of gross : ");
    scanf("%f",&gross);
    net = gross - (gross * 0.10) ;
    printf("Net is : %f",net);
}
