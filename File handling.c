#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char content[100];

    // Create and write to file
    file = fopen("myfile.txt", "w");
    if (file == NULL) {
        printf("Unable to create file.\n");
        exit(1);
    }
    fprintf(file, "Hello! This is a sample text.\n");
    fclose(file);

    // Append data to file
    file = fopen("myfile.txt", "a");
    if (file == NULL) {
        printf("Unable to open file for appending.\n");
        exit(1);
    }
    fprintf(file, "This text is appended.\n");
    fclose(file);

    // Read data from file
    file = fopen("myfile.txt", "r");
    if (file == NULL) {
        printf("Unable to open file for reading.\n");
        exit(1);
    }
    printf("File Contents:\n");
    while (fgets(content, sizeof(content), file) != NULL) {
        printf("%s", content);
    }
    fclose(file);

    return 0;
}#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char content[100];

    // Create and write to file
    file = fopen("myfile.txt", "w");
    if (file == NULL) {
        printf("Unable to create file.\n");
        exit(1);
    }
    fprintf(file, "Hello! This is a sample text.\n");
    fclose(file);

    // Append data to file
    file = fopen("myfile.txt", "a");
    if (file == NULL) {
        printf("Unable to open file for appending.\n");
        exit(1);
    }
    fprintf(file, "This text is appended.\n");
    fclose(file);

    // Read data from file
    file = fopen("myfile.txt", "r");
    if (file == NULL) {
        printf("Unable to open file for reading.\n");
        exit(1);
    }
    printf("File Contents:\n");
    while (fgets(content, sizeof(content), file) != NULL) {
        printf("%s", content);
    }
    fclose(file);

    return 0;
}
