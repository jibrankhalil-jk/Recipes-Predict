void printrecipe(struct Recipe recipe);
void mainMenu()
{
    system("cls");
    printf("\n\033[1;33m---------------------------------\n");
    printf("\033[1;33m-------------- Welcome ----------\n");
    printf("\033[1;33m---------------------------------\n");
    printf("\033[1;31m[1]- Search for recipes\n");
    printf("\033[1;34m[2]- Random\n");
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
void SearchWithIngredient()
{
    system("cls");
    printf("\n\033[1;31m---------------------------------\n");
    printf("---- Search with indegridients ---\n");
    printf("---------------------------------\n");
    printf("\t\033[1;32m  Search a Recipe \n");
    printf("\033[1;31m---------------------------------\033[0m");
    printf("\n\033[1;33m Add space between indegridients");
    printf("\n\033[1;0m       [0]- Back [1]- Main menu");
    printf("\n\033[1;31m---------------------------------\033[0m\n");
    printf("\t\t");
}
void randomrecmenu(struct Recipe recipe)
{
    system("cls");
    printf("\n\033[1;34m---------------------------------\n");
    printf("---------- Random Recipe -------\n");
    printf("---------------------------------\n\033[0m");
    printrecipe(recipe);
    printf("\033[1;34m---------------------------------\033[0m");
    printf("\n\t  [0]- Back");
    printf("\n press any key, other than 0 for \n\tnext random recipe");
    printf("\n\033[1;34m---------------------------------\033[0m\n");
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
void printrecipe(struct Recipe recipe)
{
    printf("\033[1;32mId: \033[1;36m%d\n\033[1;32mTitle: \033[1;36m%s\n", recipe.id, recipe.title);
    printf("\033[1;32mIndegridients:\033[1;36m");
    for (int i = 0; strcmp(recipe.indegridients[i].name, "") != 0; i++)
    {
        printf("\n[%d] %s", i + 1, recipe.indegridients[i].name);
    }
    printf("\n\033[1;32mSteps: \033[1;36m%s\033[0m\n", recipe.steps);
    printf("\033[1;34m---------------------------------\033[0m\n");
}