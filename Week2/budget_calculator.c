#include <stdio.h>

int main() {
   float revenue, expenses, balance;
   
   printf("MUNICIPAL BUDGET CALCULATOR\n");
 
   printf("Enter Total Revenue:");
   scanf("%f", &revenue);

    
   printf("Enter Total Expenses:");
   scanf("%f", &expenses);

    balance= revenue-expenses;

    printf("Revenue:%.2f\n", revenue);
    printf("Expenses:%.2f\n", expenses);
    printf("Balance:%.2f\n", balance);

    int departments;
    float payroll, procurement,assets;
 
    printf("Enter Number of Departments:");
    scanf("%d", &departments); 

    printf("Enter Payroll:");
    scanf("%f", &payroll);

    printf("Enter Procurement:");
    scanf("%f", &procurement);

    printf("Enter Assets:");
    scanf("%f", &assets);

    printf("Department: %d\n", departments);
    printf("Payroll: %.2f\n", payroll);
    printf("Procurement: %.2f\n" ,   procurement); 

    printf("Assets: %.2f\n" , assets);
 
return 0;
}
  