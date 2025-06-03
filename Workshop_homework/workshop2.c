#include <stdio.h>
#include <stdlib.h>

float inputSalary ();
float calculateAllowance( float basic_salary );
float calculateTax( float total_income );
float calculateNetIncome( float basic_salary, float allowance, float tax);

int main(){
    int num_employees,i;
    float total_salary_cost = 0;
    int count_25 = 0, count_15 = 0, count_10 = 0;

    printf("Enter the number of employees: ");scanf("%d",&num_employees);
    if ( num_employees < 1 ){
        return 0;
    }

    for ( i = 1; i <= num_employees; i++){
        printf("\nProcessing employee %d:",i);
        
        float basic_salary_employee = inputSalary();
        
        float allowance = calculateAllowance(basic_salary_employee);

        if ( basic_salary_employee < 6000000 ){
            count_25++;
        } else if ( basic_salary_employee <= 15000000 ){
            count_15++;
        } else {
            count_10++;
        } 
        
        float total_income_before_tax = basic_salary_employee + allowance;

        float tax_deduction = calculateTax(total_income_before_tax);
        
        float net_income = calculateNetIncome(basic_salary_employee, allowance, tax_deduction);

        total_salary_cost += net_income;
        
        printf("Basic Salary: %.2f\n", basic_salary_employee);
        printf("Allowance: %.2f\n", allowance);
        printf("Tax Deduction: %.2f\n", tax_deduction);
        printf("Net Income: %.2f\n", net_income);

    };

    printf("\n--- Company Statistics ---\n");
    printf("Total Salary Cost: %.2f\n", total_salary_cost);
    printf("Employees in 25%% allowance category: %d\n", count_25);
    printf("Employees in 15%% allowance category: %d\n", count_15);
    printf("Employees in 10%% allowance category: %d\n", count_10);
    return 0;
}

float inputSalary (){
    float salary;
    do {
        printf("\nEnter basic salary (>=0): ");
        scanf("%f", &salary);
        if (salary < 0) {
            printf("Invalid salary. Please enter non-negative value.");
        }
    } while (salary < 0);
    return salary; 
}

float calculateAllowance( float basic_salary ){
    if (basic_salary < 6000000){
        return basic_salary * 0.25;
    }else if(basic_salary <= 15000000){
        return basic_salary * 0.15;
    }else{
        return basic_salary  * 0.1;
    }
}

float calculateTax( float total_income ){
    if ( total_income <= 8000000 ){
        return 0;
    } else {
        return ( total_income - 8000000 ) * 0.1;
    }
}

float calculateNetIncome( float basic_salary, float allowance, float tax){
    return basic_salary + allowance - tax;
}
