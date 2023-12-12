void delay(unsigned long int miliseconds);
void faveroute(int *mainmenu);
void RecipeQuery(char query[]);
int searchfun(char data[], char query[]);
int is_dublicate(struct Ingredient items[1], int index, char name[1]);
int searchinlistindeg(int *total, int size, struct Ingredient items[1], struct Recipe recipe);
int countOccurrences(struct Ingredient qindeg[], int numIngredients, char searchName[]);
// void remove_dublicate(struct Indegridient items[1], int index, char *newitems);
void remove_Duplicates(struct Ingredient oldlist[], int *size, struct Ingredient newlist[], int *uniqueSize);

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

void IngredientQuery(char query[1])
{
    int founsomething = 0;
    system("cls");
    printf("\n\033[1;31m---------------------------------\n");
    printf("---- Search with indegridients ---\n");
    printf("---------------------------------\n");
    struct Ingredient qindeg[20];
    int i = 0;
    char *item = strtok(query, " ");
    while (item != NULL)
    {
        strcpy(qindeg[i].name, item);
        for (int ci = 0; ci < strlen(qindeg[i].name); ci++)
        {
            qindeg[i].name[ci] = tolower(item[ci]);
        }
        // printf("\n[%d]-%s",i, item);
        item = strtok(NULL, " ");
        i++;
    }

    // for (int j = 0; j < i-1; j++)
    // {
    //     printf("\n-%s", qindeg[j].name);
    // }

    for (int h = 0; h < 10; h++)
    {

        int totalIndegridients = 0;
        // struct Ingredient newlist[1];
        // int newlistsize;
        // remove_Duplicates(qindeg, &i, newlist, &newlistsize);

        int matchedIndegridients = searchinlistindeg(&totalIndegridients, i, qindeg, pakistani_recipes_list[h]);
        // int matchedIndegridients = 0;

        if (matchedIndegridients >= totalIndegridients - 2)
        {
            printrecipe(pakistani_recipes_list[h]);
            founsomething = 1;
        }
    }
    // printf("\ntotal match : %d\n", matchedIndegridients);
    // printf("\ntotal  : %d\n", totalIndegridients);

    if (founsomething == 0)
    {
        printf("\nNothing Found!");
    }

    printf("\n\033[1;33m Add space between indegridients");
    printf("\n\033[1;0m       [0]- Back [1]- Main menu");
    printf("\n\033[1;31m---------------------------------\033[0m\n");

    scanf(" ");
}

int searchinlistindeg(int *total, int size, struct Ingredient items[], struct Recipe recipe)
{
    int t = 0, output = 0;
    for (int j = 0; strcmp(recipe.indegridients[j].name, "") != 0; j++)
    {
        for (int in = 0; in < size != 0; in++)
        {
            // if (in >= 1)
            {
                if (strcmp(recipe.indegridients[j].name, items[in].name) == 0)
                {
                    // printf("\n[%d] %s", j, recipe.indegridients[j].name);
                    output++;
                }
            }
        }
        t++;
    }
    *total = t;
    return output;
}

void remove_Duplicates(struct Ingredient oldlist[], int *size, struct Ingredient newlist[], int *uniqueSize)
{
    int i, j, k;

    *uniqueSize = 0;

    for (i = 0; i < *size; i++)
    {
        int isDuplicate = 0;
        for (j = 0; j < *uniqueSize; j++)
        {
            if (strcmp(oldlist[i].name, newlist[j].name) == 0)
            {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate)
        {
            strcpy(newlist[*uniqueSize].name, oldlist[i].name);
            (*uniqueSize)++;
        }
    }
}

int countOccurrences(struct Ingredient qindeg[], int numIngredients, char searchName[])
{
    for (int i = 0; i < numIngredients; ++i)
    {
        if (strcmp(qindeg[i].name, searchName) == 0)
        {
            return 1;
        }
    }
    return 0;
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
