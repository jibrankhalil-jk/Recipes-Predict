#include <stdio.h>
#include "menus.h"
#include "../header.h"

void mainMenu()
{
    cls();
    printf("\n\033[1;33m---------------------------------\n");
    printf("\033[1;33m-------------- Welcome ----------\n");
    printf("\033[1;33m---------------------------------\n");
    printf("\033[1;31m[1]- Search for recipes\n");
    printf("\033[1;32m[2]- Auto recomend recipes\n");
    printf("\033[1;34m[3]- Faveroute List\n");
    printf("\033[1;35m[9]- Settings\n");
    printf("\033[1;36m[0]- About\n");
    printf("\033[1;33m---------------------------------\033[0m\n");
    printf("\t\t");
}
void SearchMenu()
{
    cls();
    printf("\n\033[1;31m---------------------------------\n");
    printf("------- Search for recipes ------\n");
    printf("---------------------------------\n");
    printf("\033[1;32m[1]- Search recipes\n");
    printf("\033[1;33m[2]- Search with indegridients\n");
    printf("\033[1;34m[3]- Search in Faveroute list\n");
    printf("\033[1;31m---------------------------------\033[0m");
    printf("\n\t [0]- Back");
    printf("\n\033[1;31m---------------------------------\033[0m\n");
    printf("\t\t");
}
void AutoRecMenu()
{
    cls();
    printf("\n\033[1;32m---------------------------------\n");
    printf("----- Auto recomend recipes -----\n");
    printf("---------------------------------\033[0m\n");
    printf("1.\n");
    printf("Indegridients:\n");
    printf("Steps:\n");
    printf("\033[1;32m---------------------------------\033[0m");
    printf("\n\t [0]- Back");
    printf("\n\033[1;32m---------------------------------\033[0m\n");
    printf("\t\t");
}

void FaveroutMenu()
{
    cls();
    printf("\n\033[1;34m---------------------------------\n");
    printf("---------- Faveroute List -------\n");
    printf("---------------------------------\033[0m\n");
    printf("1.\n");
    printf("Indegridients:\n");
    printf("Steps:\n");
    printf("\033[1;34m---------------------------------\033[0m");
    printf("\n\t [0]- Back");
    printf("\n\033[1;34m---------------------------------\033[0m\n");
    printf("\t\t");
}
void SettingsMenu()
{
    cls();
    printf("\n\033[1;35m---------------------------------\n");
    printf("------------- Settings ----------\n");
    printf("---------------------------------\033[0m\n");
    printf("Steps:\n");
    printf("\033[1;35m---------------------------------\033[0m");
    printf("\n\t [0]- Back");
    printf("\n\033[1;35m---------------------------------\033[0m\n");
    printf("\t\t");
}
void AboutMenu()
{
    cls();
    printf("\n\033[1;36m---------------------------------\n");
    printf("-------------- About -------------\n");
    printf("---------------------------------\033[0m\n");
    printf("Steps:\n");
    printf("\033[1;36m---------------------------------\033[0m");
    printf("\n\t [0]- Back");
    printf("\n\033[1;36m---------------------------------\033[0m\n");
    printf("\t\t");
}
