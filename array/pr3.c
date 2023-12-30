
#include <stdio.h>

// Define a structure for a person
struct Person {
    char name[50];
    int age;
};

int main() {
    // Declare a person structure and a pointer to a person
    struct Person person1;
    struct Person *ptrPerson;

    // Initialize the person's data
    sprintf(person1.name, "John Doe");
    person1.age = 25;

    // Assign the address of the person structure to the pointer
    ptrPerson = &person1;

    // Access and modify data using the pointer
    printf("Person's name: %s\n", ptrPerson->name);
    printf("Person's age: %d\n", ptrPerson->age);

    // Modify data through the pointer
    sprintf(ptrPerson->name, "Jane Smith");
    ptrPerson->age = 30;

    // Access data again to see changes
    printf("Updated name: %s\n", person1.name);
    printf("Updated age: %d\n", person1.age);

    return 0;
}




