//Q148: Take two structs as input and check if they are identical.

#include <stdio.h>
#include <string.h> 
struct Student {
    int roll;
    char name[50];
    float marks;
};
int areStudentsIdentical(struct Student s1, struct Student s2) {
    return (s1.roll == s2.roll) && (strcmp(s1.name, s2.name) == 0) && (s1.marks == s2.marks);
}
int main() {
    struct Student student1, student2;

    printf("Enter details for Student 1:\n");
    printf("Roll: ");
    scanf("%d", &student1.roll);
    printf("Name: ");
    scanf("%s", student1.name);
    printf("Marks: ");
    scanf("%f", &student1.marks);

    printf("Enter details for Student 2:\n");
    printf("Roll: ");
    scanf("%d", &student2.roll);
    printf("Name: ");
    scanf("%s", student2.name);
    printf("Marks: ");
    scanf("%f", &student2.marks);

    if (areStudentsIdentical(student1, student2)) {
        printf("The two students are identical.\n");
    } else {
        printf("The two students are not identical.\n");
    }

    return 0;
}