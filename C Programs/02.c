// Write a structure to store information of 3 employees (empID, empName, empSalary)

#include <stdio.h>

struct Employee{
    int empID;
    char empName[100];
    float empSalary;
};

int main(){
    struct Employee emp[3];
    for(int i = 0; i < 3; i++){
        printf("Enter the employee ID: ");
        scanf("%d", &emp[i].empID);
        printf("Enter the employee name: ");
        scanf("%s", emp[i].empName);
        printf("Enter the employee salary: ");
        scanf("%f", &emp[i].empSalary);
    }
    for(int i = 0; i < 3; i++){
        printf("Employee ID: %d\n", emp[i].empID);
        printf("Employee Name: %s\n", emp[i].empName);
        printf("Employee Salary: %.2f\n", emp[i].empSalary);
    }
    return 0;
}