#include <stdio.h>

float calculategrosspay(float hours_worked, float hourly_wage) {
    float gross_pay;
    
    if (hours_worked > 40) {
        // Regular pay for 40 hours + Overtime for additional hours
        float overtime_hours = hours_worked - 40;
        gross_pay = (40 * hourly_wage) + (overtime_hours * hourly_wage * 1.5);
    } else {
        gross_pay = hours_worked * hourly_wage;
    }
    
    return gross_pay;
}

float calculatetaxes(float gross_pay) {
    float taxes;

    if (gross_pay <= 600) {
        taxes = gross_pay * 0.15;
    } else {
        taxes = (600 * 0.15) + ((gross_pay - 600) * 0.20);
    }
    
    return taxes;
}

int main() {
    float hours_worked, hourly_wage, gross_pay, taxes, net_pay;

    // Get input from the user
    printf("Enter hours worked in a week: ");
    scanf("%lf", &hours_worked);
    printf("Enter the hourly wage: ");
    scanf("%lf", &hourly_wage);

    // Calculate gross pay, taxes, and net pay
    gross_pay = calculategrosspay(hours_worked, hourly_wage);
    taxes = calculatetaxes(gross_pay);
    net_pay = gross_pay - taxes;

    // Display the results
    printf("Gross Pay: $%.2f\n", gross_pay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", net_pay);

    return 0;
}