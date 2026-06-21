#include<stdio.h>

struct Student{
    int id;
    char name[200];
    float marks;
};

int main()
{
    struct Student s[15];
    int n, i; 

    printf("Enter number of student: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("Enter student details: %d\n", i+1);

        printf("Id: ");
        scanf("%d", &s[i].id);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\n--- Student Details ---\n");

    for(i = 0; i < n; i++){
        printf("Student %d\n", i+1);
        printf("ID: %d\n", s[i].id);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n\n", s[i].marks);
    }

    return 0; 
}