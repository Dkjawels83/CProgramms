#include <stdio.h>
#include <string.h>

// Structure to represent an element
typedef struct {
    char name[20];
    int atomicNumber;
    double atomicMass;
} Element;

// Array of elements
Element periodicTable[] = {
    {"Hydrogen", 1, 1.00784},
    {"Helium", 2, 4.0026},
    {"Oxygen", 8, 15.999},
    {"Carbon", 6, 12.011},
    // Add more elements here
};

int main() {
    char elementName[20];

    printf("Enter the name of the element: ");
    scanf("%s", elementName);

    int found = 0; // Flag to indicate if the element is found

    for (int i = 0; i < sizeof(periodicTable) / sizeof(Element); i++) {
        if (strcmp(elementName, periodicTable[i].name) == 0) {
            printf("Element: %s\n", periodicTable[i].name);
            printf("Atomic Number: %d\n", periodicTable[i].atomicNumber);
            printf("Atomic Mass: %.4lf\n", periodicTable[i].atomicMass);
            found = 1;
            break; // Element found, exit the loop
        }
    }

    if (!found) {
        printf("Element not found in the periodic table.\n");
    }

    return 0;
}


