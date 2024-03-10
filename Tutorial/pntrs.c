#include <stdio.h>  // Include the standard I/O header for printf function

// Define a structure named 'Person' with two members: 'age' and 'name'.
struct Person {
    int age;
    char name[50];
};

// Function 'birthday' that takes a POINTER to a 'Person' structure.
// The pointer is used to modify the original 'Person' structure passed to it.
void birthday(struct Person *p) {
    // Use the arrow operator '->' to access the 'age' of the 'Person' and increment it.
    // The arrow operator is needed because 'p' is a pointer to a 'Person' structure.
    p->age += 1;
}

int main() {
    // Create an instance 'person' of the structure 'Person' and initialize it.
    struct Person person = {29, "Alice"};

    // Create a pointer 'ptr' that holds the address of 'person'.
    struct Person *ptr = &person;

    // Print the age of 'person' BEFORE calling the 'birthday' function.
    printf("Age before birthday: %d\n", person.age);

    // Call the 'birthday' function passing the pointer to 'person'.
    // This function will modify the 'age' of 'person' because it has the address.
    birthday(ptr);

    // Print the age of 'person' AFTER calling the 'birthday' function to see the change.
    printf("Age after birthday: %d\n", person.age);

    // Return 0 to signal the end of the program.
    return 0;
}
