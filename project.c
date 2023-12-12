#include <stdio.h>
#include <time.h>    // time
#include <windows.h> // rand, srand, strstr
#include <conio.h>   // getch

#include "./data/data.h"
#include "./headers/menus.h"
#include "./headers/header.h"

void faveroute(int *mainmenu);
void searchforrecipe(int *mainmenu);
void settings(int *mainmenu);
void About(int *mainmenu);
void About(int *mainmenu);
void divindegs(char buffer[]);
void randomrec(int *mainmenu);
void searchwithname(int *prevmenu);
int StartProgram();
int StartProgram();
void searchwithind(int *prevmenu);

int main()
{
    // printf(">%s<", strstr("chicken biryani", "c"));
    // stringsearch("chicken biryan", "bir");
    StartProgram();
    return 0;
}

int StartProgram()
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
        case '4':
            isselected_menu_valid = 1;
            randomrec(&isselected_menu_valid);
            break;
        case '9':
            isselected_menu_valid = 1;
            settings(&isselected_menu_valid);
            break;
        case '0':
            isselected_menu_valid = 1;
            About(&isselected_menu_valid);
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
    char selected_menu[2];
    int isselected_menu_valid = 0;
    while (isselected_menu_valid == 0)
    {
        SearchWithIngredient();
        // scanf("%s", &selected_menu);
        // fgets(selected_menu, sizeof(selected_menu), stdin);
         gets(selected_menu);

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
                IngredientQuery(selected_menu);
            break;
        }
    }
}

void settings(int *mainmenu)
{
    char selected_menu;
    int isselected_menu_valid = 0;
    while (isselected_menu_valid == 0)
    {
        SettingsMenu();
        // scanf(" %c", &selected_menu);
        selected_menu = getch();
        switch (selected_menu)
        {
        case '1':
            isselected_menu_valid = 1;
            break;
        case '2':
            isselected_menu_valid = 1;
            break;
        case '3':
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

void About(int *mainmenu)
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