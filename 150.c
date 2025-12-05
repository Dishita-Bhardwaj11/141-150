//Q150: Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    float marks;
};
void modifyStudent(struct Student *s) {
    printf("Modifying student details:\n");

    printf("Enter new roll number: ");
    scanf("%d", &s->roll);

    printf("Enter new name: ");
    scanf("%s", s->name);

    printf("Enter new marks: ");
    scanf("%f", &s->marks);
}
void printStudent(struct Student *s) {
    printf("\nStudent Details:\n");
    printf("Roll: %d\n", s->roll);
    printf("Name: %s\n", s->name);
    printf("Marks: %.2f\n", s->marks);
}
int main() {
    struct Student st;

    printf("Enter roll number: ");
    scanf("%d", &st.roll);

    printf("Enter name: ");
    scanf("%s", st.name);

    printf("Enter marks: ");
    scanf("%f", &st.marks);

    printStudent(&st);
    modifyStudent(&st);
    printStudent(&st);

    return 0;
}
