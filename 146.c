//Q146: Create Employee structure with nested Date structure for joining date and print details.
#include <stdio.h>
struct Date {
    int day;
    int month;
    int year;
};
struct Employee {
    int id;
    char name[50];
    struct Date joiningDate;
};
void printEmployee(struct Employee emp) {
    printf("Employee ID: %d\n", emp.id);
    printf("Employee Name: %s\n", emp.name);
    printf("Joining Date: %02d/%02d/%04d\n", emp.joiningDate.day, emp.joiningDate.month, emp.joiningDate.year);
}
int main() {
    struct Employee emp;

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Joining Date (day month year): ");
    scanf("%d %d %d", &emp.joiningDate.day, &emp.joiningDate.month, &emp.joiningDate.year);

    printEmployee(emp);

    return 0;
}