#include <stdio.h>
#include <string.h>

struct Ingredient {
    char name[40];
};

int countOccurrences(struct Ingredient qindeg[], int numIngredients, char searchName[]) {
    int count = 0;
    for (int i = 0; i < numIngredients; ++i) {
        if (strcmp(qindeg[i].name, searchName) == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int numIngredients;

    printf("Enter the number of ingredients: ");
    scanf("%d", &numIngredients);

    struct Ingredient qindeg[numIngredients];

    // Inputting ingredients
    for (int i = 0; i < numIngredients; ++i) {
        printf("Enter name of ingredient %d: ", i + 1);
        scanf("%s", qindeg[i].name);
    }

    // Displaying the entered ingredients
    printf("\nEntered ingredients:\n");
    for (int i = 0; i < numIngredients; ++i) {
        printf("Ingredient %d: %s\n", i + 1, qindeg[i].name);
    }

    // Checking occurrences of a specific ingredient
    char searchName[40];
    printf("\nEnter the ingredient to count occurrences: ");
    scanf("%s", searchName);

    int occurrences = countOccurrences(qindeg, numIngredients, searchName);
    printf("\n'%s' appears %d times.\n", searchName, occurrences);

    return 0;
}
