#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

struct Student s[100];
int n=0;

void addStudent()
{
    printf("\nEnter Roll No: ");
    scanf("%d",&s[n].roll);

    printf("Enter Name: ");
    scanf("%s",s[n].name);

    printf("Enter Marks: ");
    scanf("%f",&s[n].marks);

    n++;
    printf("Student Added Successfully.\n");
}

void displayStudents()
{
    int i;

    if(n==0)
    {
        printf("No Records Found.\n");
        return;
    }

    printf("\nStudent List\n");

    for(i=0;i<n;i++)
    {
        printf("\nRoll : %d",s[i].roll);
        printf("\nName : %s",s[i].name);
        printf("\nMarks: %.2f\n",s[i].marks);
    }
}

void searchStudent()
{
    int roll,i;

    printf("Enter Roll No: ");
    scanf("%d",&roll);

    for(i=0;i<n;i++)
    {
        if(s[i].roll==roll)
        {
            printf("\nRecord Found");
            printf("\nName : %s",s[i].name);
            printf("\nMarks: %.2f\n",s[i].marks);
            return;
        }
    }

    printf("Student Not Found.\n");
}

void deleteStudent()
{
    int roll,i,j;

    printf("Enter Roll No: ");
    scanf("%d",&roll);

    for(i=0;i<n;i++)
    {
        if(s[i].roll==roll)
        {
            for(j=i;j<n-1;j++)
            {
                s[j]=s[j+1];
            }

            n--;
            printf("Record Deleted Successfully.\n");
            return;
        }
    }

    printf("Student Not Found.\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n------ Student Management System ------\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                deleteStudent();
                break;

            case 5:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    }while(choice!=5);

    return 0;
}