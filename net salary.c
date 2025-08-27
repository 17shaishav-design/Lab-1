#include<stdio.h>
int main ( ) {
    float net_salary, allowance, deduction, gross_salary;
    printf("Enter value of gross salary : ");
    scanf("%f",&gross_salary);
    printf("Enter value of allowance : ");
    scanf("%f",&allowance);
    printf("Enter value of deduction : ");
    scanf("%f",&deduction);
    net_salary = gross_salary + allowance - deduction ;
    printf("Net Salary is : %f",net_salary);
}
