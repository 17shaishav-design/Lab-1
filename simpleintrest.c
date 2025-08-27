#include<stdio.h>

int main ( ) {
    int p,i;
    float r,simple_interest;

    printf("Enter value of principal : ");
    scanf("%d",&p);
    printf("Enter value of time period : ");
    scanf("%d",&i);
    printf("Enter value of rate of interest : ");
    scanf("%f",&r);

    simple_interest = p*i*r / 100 ;
    printf("Simple interest is : %f",simple_interest);

}
