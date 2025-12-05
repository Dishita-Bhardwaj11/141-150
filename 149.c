//Q149: Use malloc() to allocate structure memory dynamically and print details.
#include <stdio.h>
#include <stdlib.h> 
struct Student {
    int roll;
    char name[50];
    float marks;
};
int main() {
    struct Student *st = (struct Student *)malloc(sizeof(struct Student));
    if (st == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter roll number: ");
    scanf("%d", &st->roll);

    printf("Enter name: ");
    scanf("%s", st->name);

    printf("Enter marks: ");
    scanf("%f", &st->marks);

    printf("\nStudent Details:\n");
    printf("Roll: %d\n", st->roll);
    printf("Name: %s\n", st->name);
    printf("Marks: %.2f\n", st->marks);

    free(st); 
    return 0;
}