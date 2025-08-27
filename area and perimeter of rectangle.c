#include<stdio.h>
int main ( ) {
    float area, perimeter, length, breadth;
    printf("Enter value of length : ");
    scanf("%f",&length);
    printf("Enter value of breadth : ");
    scanf("%f",&breadth);
    area = length * breadth ;
    perimeter = 2 * (length + breadth) ;
    printf("Area is : %f\nPerimeter is : %f",area,perimeter);
}
