#include <stdio.h>
#include "./headers/header.h"
#include "./headers/arrays/arrays.h"
#include "./headers/file/file.h"
#include "./headers/strings/strings.h"
#include "./headers/menus/menus.h"

void faveroute(int *mainmenu);
void searchrecepie(int *mainmenu);
void AutoRec(int *mainmenu);
void settings(int *mainmenu);
void About(int *mainmenu);

int main()
{
    char selected_menu;
    int isselected_menu_valid = 0;
    while (isselected_menu_valid == 0)
    {
        mainMenu();
        scanf(" %c", &selected_menu);
        switch (selected_menu)
        {
        case '1':
            isselected_menu_valid = 1;
            searchrecepie(&isselected_menu_valid);
            break;
        case '2':
            isselected_menu_valid = 1;
            AutoRec(&isselected_menu_valid);
            break;
        case '3':
            isselected_menu_valid = 1;
            faveroute(&isselected_menu_valid);
            break;
        case '9':
            isselected_menu_valid = 1;
            settings(&isselected_menu_valid);
            break;
        case '0':
            isselected_menu_valid = 1;
            About(&isselected_menu_valid);
            break;
        default:
            break;
        }
    }
    return 0;
}

void faveroute(int *mainmenu)
{
    char selected_menu;
    int isselected_menu_valid = 0;
    while (isselected_menu_valid == 0)
    {
        FaveroutMenu();
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
            FaveroutMenu();
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

void AutoRec(int *mainmenu)
{
    char selected_menu;
    int isselected_menu_valid = 0;
    while (isselected_menu_valid == 0)
    {
        AutoRecMenu();
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