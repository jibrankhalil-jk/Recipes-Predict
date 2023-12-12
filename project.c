#include <stdio.h>
#include <time.h>    // time
#include <windows.h> // rand, srand, strstr
#include <conio.h>   // getch

#include "./data/data.h"
#include "./headers/menus.h"
#include "./headers/header.h"

int startProgram();
void randomrec(int *mainmenu);
void searchforrecipe(int *mainmenu);
void searchwithname(int *prevmenu);
void searchwithind(int *prevmenu);
void about(int *mainmenu);

int main()
{
    startProgram();
    return 0;
}

int startProgram()
{
    char selected_menu;
    int isselected_menu_valid = 0;
    while (isselected_menu_valid == 0)
    {
        mainMenu();
        // scanf(" %c", &selected_menu);
        selected_menu = getch();
        switch (selected_menu)
        {
        case '1':
            searchforrecipe(&isselected_menu_valid);
            break;
        case '2':
            isselected_menu_valid = 1;
            randomrec(&isselected_menu_valid);
            break;
        case '0':
            isselected_menu_valid = 1;
            about(&isselected_menu_valid);
            break;
        case 'x':
            isselected_menu_valid = 1;
            printf("Exiting...\n");
            break;
        default:
            break;
        }
    }
    return 0;
}
void randomrec(int *mainmenu)

{
    char selected_menu;
    int isselected_menu_valid = 1;
    do
    {
        srand(time(NULL));
        int randomrecipe = rand() % 10; // 0 - 9
        srand(time(NULL));
        int randomfortype = rand() % 5; // 0 - 4
        struct Recipe recipe;

        if (randomfortype == 0)
            recipe = dessert_recipes_list[randomrecipe];
        else if (randomfortype == 1)
            recipe = pakistani_recipes_list[randomrecipe];
        else if (randomfortype == 2)
            recipe = dinner_recipes_list[randomrecipe];
        else if (randomfortype == 3)
            recipe = breakfast_recipes_list[randomrecipe];
        else if (randomfortype == 4)
            recipe = snacks_recipes_list[randomrecipe];

        randomrecmenu(recipe);
        // scanf(" %c", &selected_menu);
        selected_menu = getch();
        switch (selected_menu)
        {
        case '0':
            isselected_menu_valid = 0;
            *mainmenu = 0;
            break;
        default:
            continue;
        }
    } while (isselected_menu_valid);
}
void searchforrecipe(int *mainmenu)
{
    char selected_menu;
    int isselected_menu_valid = 0;
    while (isselected_menu_valid == 0)
    {
        SearchMenu();
        // scanf(" %c", &selected_menu);
        selected_menu = getch();
        switch (selected_menu)
        {
        case '1':
            searchwithname(&isselected_menu_valid);
            break;
        case '2':
            searchwithind(&isselected_menu_valid);
            break;
        case '0':
            isselected_menu_valid = 1;
            *mainmenu = 0;
            break;
        default:
            continue;
        }
    }
}
void searchwithname(int *prevmenu)
{
    char selected_menu[20];
    int isselected_menu_valid = 0;
    while (isselected_menu_valid == 0)
    {
        SearchWithNameMenu();
        // scanf("%s", &selected_menu);
        fgets(selected_menu, sizeof(selected_menu), stdin);

        // Remove the newline character if present
        if (selected_menu[strlen(selected_menu) - 1] == '\n')
        {
            selected_menu[strlen(selected_menu) - 1] = '\0';
        }

        switch (selected_menu[0])
        {
        case '1':
            if (strlen(selected_menu) > 1)
            {

                // printf("\n>>%d", strlen(selected_menu));
                continue;
            }
            else
            {
                *prevmenu = 1;
                isselected_menu_valid = 1;
            }
            break;
        case '0':
            if (strlen(selected_menu) > 1)
            {

                // printf("\n>>%d", strlen(selected_menu));
                continue;
            }
            else
            {
                isselected_menu_valid = 1;
            }
            break;
        default:
            if (strlen(selected_menu) < 1)
                continue;
            else
                RecipeQuery(selected_menu);
            break;
        }
    }
}
void searchwithind(int *prevmenu)
{
    char selected_menu[100];
    int isselected_menu_valid = 0;
    while (isselected_menu_valid == 0)
    {

        SearchWithIngredient();
        // scanf("%s", &selected_menu);
        fgets(selected_menu, sizeof(selected_menu), stdin);
        // Remove the newline character if present
        if (selected_menu[strlen(selected_menu) - 1] == '\n')
        {
            selected_menu[strlen(selected_menu) - 1] = '\0';
        }

        if (strlen(selected_menu) < 1)
        {
            continue;
        }

        switch (selected_menu[0])
        {
        case '1':
            if (strlen(selected_menu) > 1)
            {

                // printf("\n>>%d", strlen(selected_menu));
                continue;
            }
            else
            {
                *prevmenu = 1;
                isselected_menu_valid = 1;
            }
            break;
        case '0':
            if (strlen(selected_menu) > 1)
            {
                continue;
            }
            else
            {
                isselected_menu_valid = 1;
            }
            break;
        default:

            //  if (isdigit(selected_menu[1]) != 1)
            {
                IngredientQuery(selected_menu);
                continue;
                // strcpy(selected_menu, "");
                // continue;
                // isselected_menu_valid = 1;
            }
            break;
        }
    }
}
void about(int *mainmenu)
{
    char selected_menu;
    int isselected_menu_valid = 0;
    while (isselected_menu_valid == 0)
    {
        AboutMenu();
        // scanf(" %c", &selected_menu);
        selected_menu = getch();
        switch (selected_menu)
        {
        case '1':
            isselected_menu_valid = 1;
            break;
        case '0':
            isselected_menu_valid = 1;
            *mainmenu = 0;
            break;
        default:
            break;
        }
    }
}