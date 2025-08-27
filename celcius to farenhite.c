#include<stdio.h>
int main ( ) {
    float celcius, farenhite;
    printf("Enter value of celcius : ");
    scanf("%f",&celcius);
    farenhite = (celcius * 9/5) + 32 ;
    printf("Farenhite is : %f",farenhite);
}
