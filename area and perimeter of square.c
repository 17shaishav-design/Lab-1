#include<stdio.h>
int main ( ) {
    float area, perimeter, side;
    printf("Enter value of side : ");
    scanf("%f",&side);
    area = side * side ;
    perimeter = 4 * side ;
    printf("Area is : %f\nPerimeter is : %f",area,perimeter);
}
