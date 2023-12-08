/*
    Program to copy the contents of one file to another.
*/

#include <stdio.h>

int main() {
    // File pointers for source and destination files
    FILE *source, *destination;

    // Character variable to store each character read from the source file
    char ch;

    // Open the source file in read mode
    source = fopen("filename1.txt", "r");

    // Open the destination file in write mode (creates a new file or overwrites existing content)
    destination = fopen("filename2.txt", "w");

    // Loop through the source file until the end of file (EOF) is reached
    while ((ch = fgetc(source)) != EOF) {
        // Write the character to the destination file
        fputc(ch, destination);
    }

    // Close both files
    fclose(destination);
    fclose(source);

    // Display a success message
    printf("Files copied successfully");

    // Return 0 to indicate successful execution
    return 0;
}
