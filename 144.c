//Q144: Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    float marks;
};

void printStudent(struct Student s) {
    printf("Roll: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student st;

    printf("Enter roll number: ");
    scanf("%d", &st.roll);

    printf("Enter name: ");
    scanf("%s", st.name);

    printf("Enter marks: ");
    scanf("%f", &st.marks);
    printStudent(st);

    return 0;
}
