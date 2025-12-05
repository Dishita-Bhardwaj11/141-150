//Q147: Store employee data in a binary file using fwrite() and read using fread().

#include <stdio.h>
struct Employee {
    int id;
    char name[50];
    float salary;
};
void writeEmployeeToFile(const char *filename, struct Employee emp) {
    FILE *fp = fopen(filename, "wb");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return;
    }
    fwrite(&emp, sizeof(struct Employee), 1, fp);
    fclose(fp);
}