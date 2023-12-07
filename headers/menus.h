void mainMenu()
{
    system("cls");
    printf("\n\033[1;33m---------------------------------\n");
    printf("\033[1;33m-------------- Welcome ----------\n");
    printf("\033[1;33m---------------------------------\n");
    printf("\033[1;31m[1]- Search for recipes\n");
    printf("\033[1;34m[4]- Random\n");
    printf("\033[1;35m[9]- Settings\n");
    printf("\033[1;36m[0]- About\n");
    printf("\033[1;m[x]- Exit\n");
    printf("\033[1;33m---------------------------------\033[0m\n");
    printf("\t\t");
}

void SearchMenu()
{
    system("cls");
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
void SearchWithNameMenu()
{
    system("cls");
    printf("\n\033[1;31m---------------------------------\n");
    printf("------- Search recipe ------\n");
    printf("---------------------------------\n");
    printf("\t\033[1;32m  Search a Recipe \n");
    printf("\033[1;31m---------------------------------\033[0m");
    printf("\n       [0]- Back [1]- Main menu");
    printf("\n\033[1;31m---------------------------------\033[0m\n");
    printf("\t\t");
}
void FaveroutMenu()
{
    system("cls");
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
void randomrecmenu(struct Recipe recepie)
{
    system("cls");
    printf("\n\033[1;34m---------------------------------\n");
    printf("---------- Random Recipe -------\n");
    printf("---------------------------------\n\033[0m");
    printf("\033[1;36mId: %d\n", recepie.id);
    printf("Title: %s.\n", recepie.title);
    printf("Indegridients: ");
    for (int i = 0; strcmp(recepie.indegridients[i].name, "") != 0; i++)
    {
        printf("%s ", recepie.indegridients[i].name);
    }
    printf("\nSteps: %s\033[0m\n", recepie.steps);
    printf("\033[1;34m---------------------------------\033[0m");
    printf("\n\t [1]- random  [0]- Back");
    printf("\n\033[1;34m---------------------------------\033[0m\n");
    printf("\t\t");
}
void SettingsMenu()
{
    system("cls");
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
    system("cls");
    printf("\n\t\t\033[1;36m---------------------------------\n");
    printf("\t\t-------------- About -------------\n");
    printf("\t\t---------------------------------\033[0m\n");
    printf("\n\tThis recipe prediction app could serve as a handy \ncompanion for aspiring chefs, home cooks, or anyone seeking \nculinary inspiration within the realm of a command-line interface.\n");
    printf("\n\t\t\033[1;36m---------------------------------\033[0m");
    printf("\n\t\t\t [0]- Back");
    printf("\n\t\t\033[1;36m---------------------------------\033[0m\n");
}

void pintrecipe(struct Recipe recipe)
{
    printf("\033[1;36mId: %d\n", recipe.id);
    printf("Title: %s.\n", recipe.title);
    printf("Indegridients: ");
    for (int i = 0; strcmp(recipe.indegridients[i].name, "") != 0; i++)
    {
        printf("%s ", recipe.indegridients[i].name);
    }
    printf("\nSteps: %s\033[0m\n", recipe.steps);
    printf("\033[1;34m---------------------------------\033[0m\n");
}
