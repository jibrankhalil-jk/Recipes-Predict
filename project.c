#include <stdio.h>
#include "./headers/header.h"
#include "./headers/arrays/arrays.h"
#include "./headers/file/file.h"
#include "./headers/strings/strings.h"

void mainMenu();
void SearchMenu();
void FaveroutMenu();

int main()
{
    struct Recepie recipies;
    struct Recepie *rPointer = &recipies;

    readData(rPointer);

    // printf("\n");
    // mainMenu();
    // printf("\n");
    // SearchMenu();
    // printf("\n");
    // FaveroutMenu();

    return 0;
}

void mainMenu()
{
    printf("\n---------------------------------\n");
    printf("-------------- Welcome ----------\n");
    printf("---------------------------------\n");
    printf("[1]- Search for recipes\n");
    printf("[1]- Auto recomend recipes\n");
    printf("[3]- Faveroute List\n");
    printf("[9]- Settings\n");
    printf("[0]- About\n");
    printf("---------------------------------");
}
void SearchMenu()
{
    printf("\n---------------------------------\n");
    printf("------- Search for recipes ------\n");
    printf("---------------------------------\n");
    printf("[1]- Search recipes\n");
    printf("[2]- Search with indegridients\n");
    printf("[3]- Search in Faveroute list\n");
    printf("---------------------------------");
}
void FaveroutMenu()
{
    printf("\n---------------------------------\n");
    printf("---------- Faveroute List -------\n");
    printf("---------------------------------\n");
    printf("1.\n");
    printf("Indegridients:\n");
    printf("Steps:\n");
    printf("---------------------------------");
}
