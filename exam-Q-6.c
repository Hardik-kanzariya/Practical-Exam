#include <stdio.h>

//Q-6

struct Student 
{
    char name[50];
    char course[50];
};

main() 
{
    struct Student students[3]; 
    FILE *file;

    file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
    }
    else
    {
    	 for (int i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);

        printf("Enter name: ");
        scanf(" %s", students[i].name); 

        printf("Enter course: ");
        scanf(" %s", students[i].course); 

        fprintf(file, "Student %d:\n", i + 1);
        fprintf(file, "Name: %s\n", students[i].name);
        fprintf(file, "Course: %s\n\n", students[i].course);
    }
	}

   

    fclose(file);

    printf("Details written to data.txt successfully.\n");

}
