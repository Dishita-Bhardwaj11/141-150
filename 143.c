//Q143: Find and print the student with the highest marks.
#include <stdio.h>
struct Student {
    char name[50];
    int marks;
};
int main()
{
    struct Student students[5];
    struct Student *topStudent = NULL;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }

    for (int i = 0; i < 5; i++)
    {
        if (topStudent == NULL || students[i].marks > topStudent->marks)
        {
            topStudent = &students[i];
        }
    }

    if (topStudent != NULL)
    {
        printf("Top student: %s with marks: %d\n", topStudent->name, topStudent->marks);
    }
    else
    {
        printf("No students found.\n");
    }

    return 0;
}