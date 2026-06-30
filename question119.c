#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee e[100];
    int n,i,choice,id;

    printf("Enter number of employees: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEmployee %d\n",i+1);

        printf("Enter ID: ");
        scanf("%d",&e[i].id);

        printf("Enter Name: ");
        scanf("%s",e[i].name);

        printf("Enter Salary: ");
        scanf("%f",&e[i].salary);
    }

    do
    {
        printf("\n------ Employee Management ------\n");
        printf("1. Display Employees\n");
        printf("2. Search Employee\n");
        printf("3. Update Salary\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                for(i=0;i<n;i++)
                {
                    printf("\nID: %d",e[i].id);
                    printf("\nName: %s",e[i].name);
                    printf("\nSalary: %.2f\n",e[i].salary);
                }
                break;

            case 2:
                printf("Enter Employee ID: ");
                scanf("%d",&id);

                for(i=0;i<n;i++)
                {
                    if(e[i].id==id)
                    {
                        printf("\nEmployee Found");
                        printf("\nName: %s",e[i].name);
                        printf("\nSalary: %.2f\n",e[i].salary);
                        break;
                    }
                }

                if(i==n)
                    printf("Employee Not Found\n");

                break;

            case 3:
                printf("Enter Employee ID: ");
                scanf("%d",&id);

                for(i=0;i<n;i++)
                {
                    if(e[i].id==id)
                    {
                        printf("Enter New Salary: ");
                        scanf("%f",&e[i].salary);

                        printf("Salary Updated Successfully\n");
                        break;
                    }
                }

                if(i==n)
                    printf("Employee Not Found\n");

                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    }while(choice!=4);

    return 0;
}