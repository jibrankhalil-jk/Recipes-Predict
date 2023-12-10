void delay(unsigned long int miliseconds);
void faveroute(int *mainmenu);
void RecipeQuery(char query[]);
int searchfun(char data[], char query[]);

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
        if (searchfun(dessert_recipes_list[i].title, query) == 0)
        {
            printrecipe(dessert_recipes_list[i]);
            totalitemsfound++;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (searchfun(pakistani_recipes_list[i].title, query) == 0)
        {
            printrecipe(pakistani_recipes_list[i]);
            totalitemsfound++;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (searchfun(breakfast_recipes_list[i].title, query) == 0)
        {
            printrecipe(breakfast_recipes_list[i]);
            totalitemsfound++;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (searchfun(dinner_recipes_list[i].title, query) == 0)
        {
            printrecipe(dinner_recipes_list[i]);
            totalitemsfound++;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        if (searchfun(snacks_recipes_list[i].title, query) == 0)
        {
            printrecipe(snacks_recipes_list[i]);
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

void IndQuery(char query[100])
{

    system("cls");
    printf("\n\033[1;31m---------------------------------\n");
    printf("---- Search with indegridients ---\n");
    printf("---------------------------------\n");

    int totalitemsfound = 0;

    for (int i = 0; i < 10; i++)
    {
        if (searchfun(dessert_recipes_list[i].title, query) == 0)
        {
            printrecipe(dessert_recipes_list[i]);
            totalitemsfound++;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (searchfun(pakistani_recipes_list[i].title, query) == 0)
        {
            printrecipe(pakistani_recipes_list[i]);
            totalitemsfound++;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (searchfun(breakfast_recipes_list[i].title, query) == 0)
        {
            printrecipe(breakfast_recipes_list[i]);
            totalitemsfound++;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (searchfun(dinner_recipes_list[i].title, query) == 0)
        {
            printrecipe(dinner_recipes_list[i]);
            totalitemsfound++;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (searchfun(snacks_recipes_list[i].title, query) == 0)
        {
            printrecipe(snacks_recipes_list[i]);
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

void stringsearchfun(char item[50], char query[])
{

    int total_similar = 0;
    int j = 0;
    for (int i = 0; i < 10; i++)
    {
        for (j = 0; pakistani_recipes_list[i].indegridients[j].name[0] != '\0';)
        {
            if (searchfun(pakistani_recipes_list[i].indegridients[j].name, query) == 0)
            {
                printf(">%s %s\n", pakistani_recipes_list[i].indegridients[j].name, query);
                total_similar++;
            }
            j++;
        }
        if (total_similar >= 2)
        {
            printrecipe(pakistani_recipes_list[i]);
        }
    }

    // 23p_0030_jibran_khalil
    // if (pakistani_recipes_list[0].indegridients[13].name[0] != '\0')
    // {
    //     printf(">%s %s\n", pakistani_recipes_list[0].indegridients[12].name, search);
    // }
}

int searchfun(char data[], char query[])
{
    for (int i = 0; query[i] != '\0'; i++)
    {
        query[i] = tolower(query[i]);
    }

    if (strstr(data, query) == NULL)
    {
        return -1;
    }
    else
    {
        return strcmp(data, strstr(data, query));
    }

    // return strcmp(data, query);
}
