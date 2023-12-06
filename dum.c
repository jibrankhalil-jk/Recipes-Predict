#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Ingredient
{
    char name[10];
};

struct Recipe
{
    int id;
    char title[10];
    struct Ingredient ingredients[10];
    char steps[100];
} recepieslist[10];

int main()
{
    FILE *fptr;
    // struct Recepie recepieslist[10];
    // struct Recepie *pre = &recepies_list;
    int totalElements = 0;
    fptr = fopen("./data/recipes.txt", "r");
    if (fptr == NULL)
    {
        printf("Error! Not able to open the file.\n\n");
    }
    else
    {

        char ba[10];
        char bb[100];
        char bc[100];
        while (fscanf(fptr, "%s %s %s", ba, bb, bc) == 1)
        {
            printf("id:%d\n", ba);
        }
    }
    return 0;
}

// int smain()
// {
//     struct Recipe recipes[50];
//     int count = 0;

//     FILE *file = fopen("./data/recipes.txt", "r");
//     if (file == NULL)
//     {
//         printf("File could not be opened.\n");
//         return 1;
//     }

//     char line[100];

//     // Reading data from the file
//     while (fgets(line, sizeof(line), file) != NULL)
//     {
//         struct Recipe recipe;
//         char *token;
//         token = strtok(line, " -\n");

//         if (token != NULL)
//         {
//             recipe.id = atoi(token);
//             token = strtok(NULL, "-");

//             if (token != NULL)
//             {
//                 strcpy(recipe.title, token);
//                 token = strtok(NULL, ",");
//                 int j = 0;

//                 while (token != NULL)
//                 {
//                     strcpy(recipe.ingredients[j].name, token);
//                     j++;
//                     token = strtok(NULL, ",");
//                 }
//             }
//         }

//         recipes[count++] = recipe;
//     }

//     fclose(file);

//     // Printing the stored data
//     for (int i = 0; i < count; i++)
//     {
//         printf("ID: %d\n", recipes[i].id);
//         printf("Title: %s\n", recipes[i].title);
//         printf("Ingredients: ");
//         for (int j = 0; j < sizeof(recipes[i].ingredients) / sizeof(recipes[i].ingredients[0]); j++)
//         {
//             if (strlen(recipes[i].ingredients[j].name) > 0)
//             {
//                 printf("%s", recipes[i].ingredients[j].name);
//                 if (strlen(recipes[i].ingredients[j + 1].name) > 0)
//                 {
//                     printf(", ");
//                 }
//             }
//         }
//         printf("\n\n");
//     }

//     return 0;
// }
