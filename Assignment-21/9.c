// 9. Write a program to store information of n students and display them using structure

#include<stdio.h>
#include<stdlib.h>

struct Student {
     char name[20];
     int rollno;
};

int main()
{
    struct Student *ptr;
    int n, i;
    printf("Enter number of students\n");
    scanf("%d",&n);

    ptr = (struct Student *)calloc(n,sizeof(struct Student));

    for( i = 0; i<n; i++)
    {
        printf("Enter name %d ",i+1);
        scanf("%s",(ptr + i)->name);
        // scanf("%s",ptr[i].name);

        printf("Enter RollNo %d ",i+1);
        scanf("%d",&(ptr + i)->rollno);
        // scanf("%d",&ptr[i].rollno);
    }

    for(i= 0; i< n; i++)
    {
        printf("Name = %s, Roll= %d\n", (ptr+i)->name, (ptr+i)->rollno);
    }

    return 0;

}