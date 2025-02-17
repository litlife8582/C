/*Create a structure named "Employee" to store employee
 details such as employee ID, name, and salary. Write a
 program to input data for three employees, find the
 highest salary employee, and display their information*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct EmployeeID
{
    char id[50];
    char name[50];
    int salary;
};

int main(){
    int n;
    printf("Enter the number of employee details we need to store: ");
    scanf("%d",&n);

    //dynamic allocation
    struct EmployeeID *eid=(struct EmployeeID *)malloc(n * sizeof(struct EmployeeID));  
    if(eid==NULL){
        printf("Memory Allocation Failed");
        return 1;
    }

    int max=0,max_index;

    for(int i=0;i<n;i++){
        getchar();
        printf("Enter the details of employee: %d\n",i+1);
        
        printf("Enter the Employee ID: ");
        fgets(eid[i].id,sizeof(eid[i].id),stdin);
        eid[i].id[strcspn(eid[i].id,"\n")]='\0';

        printf("Enter the Employee Name: ");
        fgets(eid[i].name,sizeof(eid[i].name),stdin);
        eid[i].name[strcspn(eid[i].name,"\n")]='\0';

        printf("Enter the Salary: ");
        scanf("%d",&eid[i].salary);

        if(eid[i].salary>max){
            max_index=i;
            max=eid[i].salary;
        }
    }

    printf("The highest Salary Employee is: \n");
    printf("Employee ID: %s\n",eid[max_index].id);
    printf("Name: %s\n",eid[max_index].name);
    printf("Salary: %d\n",eid[max_index].salary);

    return 0;
}
