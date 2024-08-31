#include<stdio.h>
#include <string.h>
int main(){

    FILE *file;
    
    char name[50];
    char sal[50];
    
    file = fopen("data.txt", "w");

    if (file == NULL) {
        printf("file not open\n");
        return 1;
    }

    for (int i = 0; i < 2; i++) {
        printf("Enter the name employee %d: ", i + 1);

        fgets(name, sizeof(name), empin); 
        name[strcspn(name, "\n")] = 0;

        printf("Enter the salary of employee %d: ", i + 1);

        fgets(sal, sizeof(sal), empin);
        course[strcspn(sal, "\n")] = 0; 

        fprintf(file, "employee %d: %s, salary: %s\n", i + 1, name, sal);
    }

    fclose(file);
    printf("data write data.txt successfully\n");

    return 0;
}