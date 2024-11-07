#include<stdio.h>
#include<string.h>

struct employee
 {
char name[25];
int id;
char department[20];
float salary;
char email[50];

} employee ;

int main(){
// struct employee 

strcpy(employee.name,"John Doe");
employee.id=12345;
strcpy(employee.department,"Human Resources");
employee.salary=55000.50;
strcpy(employee.email,"John.doe@company.com");

//print the values
printf("NAME:%s\n", employee.name);
printf("ID:%d\n", employee.id);
printf("DEPARTMENT:%s\n", employee.department);
printf("SALARY:%.2f\n", employee.salary);
printf("EMAIL:%s\n", employee.email);
return 0;
}