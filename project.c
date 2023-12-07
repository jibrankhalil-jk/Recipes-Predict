#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>

#include "./data/data.h"
#include "./headers/menus.h"
#include "./headers/header.h"

void faveroute(int *mainmenu);
void searchrecepie(int *mainmenu);
void settings(int *mainmenu);
void About(int *mainmenu);
void About(int *mainmenu);
void divindegs(char buffer[]);
void randomrec(int *mainmenu);
void searchwithname(int *prevmenu);

int main()
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
            searchrecepie(&isselected_menu_valid);
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
        int randomfortype = rand() % 4;
        srand(time(NULL));
        int randomrecepie = rand() % 9;
        struct Recipe recepie;

        if (randomfortype == 0)
            recepie = dessert_recepies_list[randomrecepie];
        else if (randomfortype == 1)
            recepie = pakistani_recepies_list[randomrecepie];
        else if (randomfortype == 2)
            recepie = dinner_recepies_list[randomrecepie];
        else if (randomfortype == 3)
            recepie = breakfast_recepies_list[randomrecepie];
        else
            recepie = snacks_recepies_list[randomrecepie];

        randomrecmenu(recepie);
        scanf(" %c", &selected_menu);
        switch (selected_menu)
        {
        case '1':
            continue;
            break;
        case '0':
            isselected_menu_valid = 0;
            *mainmenu = 0;
            break;
        default:
            break;
        }
    } while (isselected_menu_valid);
}

void searchrecepie(int *mainmenu)
{
    char selected_menu;
    int isselected_menu_valid = 0;
    while (isselected_menu_valid == 0)
    {
        SearchMenu();
        scanf(" %c", &selected_menu);
        switch (selected_menu)
        {
        case '1':
            searchwithname(&isselected_menu_valid);
            break;
        // case '2':
        //     isselected_menu_valid = 1;
        //     break;
        // case '3':
        //     isselected_menu_valid = 1;
        //     break;
        case '0':
            isselected_menu_valid = 1;
            *mainmenu = 0;
            break;
        default:
            break;
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
        scanf("%s", &selected_menu);
        switch (selected_menu[0])
        {
        case '1':
            *prevmenu = 1;
            isselected_menu_valid = 1;
            break;
        case '0':
            isselected_menu_valid = 1;
            // *prevmenu = 1;
            break;
        default:
            RecipeQuery(selected_menu);
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
        scanf(" %c", &selected_menu);
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
        scanf(" %c", &selected_menu);
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