#include <stdio.h>  // For printf, fgets, sscanf
#include <string.h> // For strcspn

struct Book {
    char title[100];
    char author[50];
    int year;
};

int main() {
    struct Book library[3]; // Array of 3 Books
    char yearInput[10]; // Temporary buffer for year input

    printf("Enter details of 3 books:\n");

    for (int i = 0; i < 3; i++) {
        printf("Enter title for book %d: ", i + 1);
        fgets(library[i].title, sizeof(library[i].title), stdin);
        library[i].title[strcspn(library[i].title, "\n")] = '\0'; // Remove newline character

        printf("Enter author for book %d: ", i + 1);
        fgets(library[i].author, sizeof(library[i].author), stdin);
        library[i].author[strcspn(library[i].author, "\n")] = '\0'; // Remove newline character

        printf("Enter year for book %d: ", i + 1);
        fgets(yearInput, sizeof(yearInput), stdin);
        sscanf(yearInput, "%d", &library[i].year); // Parse integer from input
    }

    for (int i = 0; i < 3; i++) {
        printf("Book %d: \"%s\", by %s, %d\n", i + 1, library[i].title, library[i].author, library[i].year);
    }

    return 0;
}
