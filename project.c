#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>

#include "./headers/header.h"
#include "./data/data.h"
#include "./headers/strings.h"
#include "./headers/arrays.h"
#include "./headers/file.h"
#include "./headers/menus/menus.h"
#include "./headers/menus/faveroute.h"

void faveroute(int *mainmenu);
void searchrecepie(int *mainmenu);
void AutoRec(int *mainmenu);
void settings(int *mainmenu);
void About(int *mainmenu);
void About(int *mainmenu);
void divindegs(char buffer[]);

// int main()
// {

//     // showdata();

//     return 0;
// }
// int main()
// {
//     FILE *fptr;
//     struct Recepie recepies_list[10];
//     // struct Recepie *pre = &recepies_list;
//     int totalElements = 0;
//     fptr = fopen("./data/recipes.txt", "r");
//     if (fptr == NULL)
//     {
//         printf("Error! Not able to open the file.\n\n");
//     }
//     else
//     {
//         int idsIndex = 0;
//         int titIndex = 0;
//         int indeIndex = 0;

//         int index = 0;
//         char buffer[100];
//         while (fscanf(fptr, " %s ", buffer) == 1)
//         {
//             int divby3 = index % 3;
//             if (divby3 == 0) // for reading ids
//             {
//                 recepies_list[index / 3].id = atoi(buffer);
//             }
//             if (buffer[0] == '-') // for reading title
//             {
//                 // printf("%s\n", buffer);
//                 // buffer[0] = ' ';
//                 strcpy(recepies_list[index / 3].title, buffer);
//                 recepies_list[index / 3].title[0] = ' ';
//             }
//             if (divby3 != 0 && buffer[0] != '-') // for reading title
//             {
//                 divindegs(buffer);
//                 indeIndex++;
//             }

//             index++;
//         }

//         fclose(fptr);
//         // for (int i = 0; i <= 4; i++)
//         // {
//         //     // printf("> %d", recepies_list[i].id);
//         //     // printf("> %s", recepies_list[i].title);
//         //     int j = 0;
//         //     while (j <= 3)
//         //     {
//         // if (recepies_list[i].indegridients[j].name == "")
//         // {
//         //     break;
//         // }
//         // printf("> %d", recepies_list[i].id);
//         // printf("> %s", recepies_list[i].title);
//         printf("%s", recepies_list[1].indegridients[0].name);
//         //         j++;
//         //     }
//         //     printf("\n");
//         // }
//     }

//     return 0;
// }

// void divindegs(char buffer[])
// {

//     char *token;
//     token = strtok(buffer, ",");
//     while (token != NULL)
//     {
//         // printf("%s\n", token);
//         strcpy(recepies_list[index / 3].indegridients[indeIndex].name, token);
//         token = strtok(NULL, ",");

//     }

//     // char a[10][30];

//     // int i = 0, k = 0;
//     // while (1)
//     // {
//     //     if (buffer[i] == '.')
//     //     {
//     //         break;
//     //         k++;
//     //     }
//     //     // printf("%c ", buffer[i]);
//     //     a[k][i] ==  buffer[i];
//     //     i++;
//     // }

//     // printf("\n");
//     // printf("\n");
// }

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