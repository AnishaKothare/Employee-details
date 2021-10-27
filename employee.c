#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
    char ename[20];
    int eage;
    char phone_number[20];
    double salary;
} Employee;
 
int main()
{
    int n=20;

    //array to store structure values of all employees
    Employee employees[n];
 
    //Taking each employee detail as input
    printf("Enter %d Employee Details \n \n",n);
    for(int i=0; i<n; i++){
        printf("Employee %d:- \n",i+1);

        //Name
        printf("Name: ");
        scanf("%[^\n]s",employees[i].ename);

        //Employee age
        printf("Age: ");
        scanf("%d",&employees[i].eage);
        
        //phone number
        printf("Phone number: ");
        scanf("%s",employees[i].phone_number);

        //Salary
        printf("Salary: ");
        scanf("%lf",&employees[i].salary);

        //to consume extra '\n' input
        char ch = getchar();
 
        printf("\n");
    }
 
    //Displaying Employee details
    printf("-------------- All Employees Details ---------------\n");
    for(int i=0; i<n; i++){
        printf("Name \t: ");
        printf("%s \n",employees[i].ename);
 
        printf("Age \t: ");
        printf("%d \n",employees[i].eage);
        
        printf("Phone number \t: ");
        scanf("%s \n",employees[i].phone_number);
 
        printf("Salary \t: ");
        printf("%.2lf \n",employees[i].salary);
 
        printf("\n");
    }
 
    return 0;
}
