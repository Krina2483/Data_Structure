#include <stdio.h>

struct employee{
    int empId;
    char name[30],Designation[100];
    float salary;
};
 
int main()
{
    struct employee emp;
     
    printf("\nEnter details \n\n");
    
    printf("Employee_ID : ");
    scanf("%d",&emp.empId);
    
    printf("Name : ");
    scanf("%s",emp.name);
    
    printf("Designation : ");
    scanf("%s",emp.Designation);
    
    printf("Salary : "); 
    scanf("%f",&emp.salary);
     
  
    printf("\nEntered detail is\n");
    printf("Employee_ID: %d\n",emp.empId);
    printf("Name: %s\n",emp.name);
    printf("Designation: %s\n",emp.Designation);
    printf("Salary: %f\n",emp.salary);
    return 0;
}