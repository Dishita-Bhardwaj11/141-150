// Q145: Return a structure containing top student's details from a function.
#include <stdio.h>
struct Student {
    char name[50];
    int marks;
};
struct Student getTopStudent(struct Student students[], int count)
{
    struct Student topStudent = students[0];
    for (int i = 1; i < count; i++) {
        if (students[i].marks > topStudent.marks)
        {
            topStudent = students[i];
        }
    }
    return topStudent;
}
int main()
{
    struct Student students[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }

    struct Student topStudent = getTopStudent(students, 5);
    printf("Top student: %s with marks: %d\n", topStudent.name, topStudent.marks);

    return 0;
}