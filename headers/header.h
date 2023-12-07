void delay(unsigned long int miliseconds);
void faveroute(int *mainmenu);
void RecipeQuery(char query[]);

void loading(void)
{
    unsigned long int ms = 200;
    int repeat = 3;
    printf("\n");
    for (int i = 1; i <= repeat; i++)
    {
        system("cls");
        printf("...");
        delay(ms);
        system("cls");
        printf("..-");
        delay(ms);
        system("cls");
        printf(".-.");
        delay(ms);
        system("cls");
        printf("-..");
        delay(ms);
        i++;
    }
    system("cls");
}

void delay(unsigned long int miliseconds)
{
    Sleep(miliseconds);
}

void RecipeQuery(char query[100])
{

    system("cls");
    printf("\n\033[1;31m---------------------------------\n");
    printf("------- Search recipe ------\n");
    printf("---------------------------------\n");

    int totalitemsfound = 0;

    for (int i = 0; i < 10; i++)
    {
        if (strcmp(dessert_recepies_list[i].title, query) == 0)
        {
            pintrecipe(dessert_recepies_list[i]);
            totalitemsfound++;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (strcmp(pakistani_recepies_list[i].title, query) == 0)
        {
            pintrecipe(pakistani_recepies_list[i]);
            totalitemsfound++;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (strcmp(breakfast_recepies_list[i].title, query) == 0)
        {
            pintrecipe(breakfast_recepies_list[i]);
            totalitemsfound++;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (strcmp(dinner_recepies_list[i].title, query) == 0)
        {
            pintrecipe(dinner_recepies_list[i]);
            totalitemsfound++;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (strcmp(snacks_recepies_list[i].title, query) == 0)
        {
            pintrecipe(snacks_recepies_list[i]);
            totalitemsfound++;
        }
    }

    if (totalitemsfound == 0)
    {
        printf("\n\t Notting Found !");
    }

    printf("\n\033[1;31m---------------------------------\033[0m");
    printf("\n       [0]- Back [1]- Main menu");
    printf("\n\033[1;31m---------------------------------\033[0m\n");
    printf("\t\t");
    // getch();
    scanf(" ");
}