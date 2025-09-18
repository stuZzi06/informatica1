#include <stdio.h> 
#include <stdlib.h>

int main() {
    FILE *file;
    char *buffer;
    size_t size;

    file = fopen("example.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    fseek(file, 0, SEEK_END);
    size = ftell(file);
    fseek(file, 0, SEEK_SET);

    buffer = (char *)malloc(size + 1);
    if (buffer == NULL) {
        perror("Error allocating memory");
        fclose(file);
        return EXIT_FAILURE;
    }

    fread(buffer, 1, size, file);
    buffer[size] = '\0';

    printf("%s\n", buffer);

    free(buffer);
    fclose(file);
    return EXIT_SUCCESS;
}