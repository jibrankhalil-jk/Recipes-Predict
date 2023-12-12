
int searchfun(char data[], char query[]);
void IngredientQuery(char query[]);
int searchinlistindeg(int *total, struct Ingredient items[], struct Recipe recipe, int itemsize);

void RecipeQuery(char query[])
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

void IngredientQuery(char query[])
{
    system("cls");
    printf("\n\033[1;31m---------------------------------\n");
    printf("---- Search with indegridients ---\n");
    printf("---------------------------------\n");
    // printf("\n>%s<", query);

    struct Ingredient qindeg[10];
    int datafound = 0;
    int i = 0;

    char *item = strtok(query, " ");
    // printf("\n><");

    while (item != NULL)
    {
        if (item[0] == '\0')
        {
            break;
        }
        strcpy(qindeg[i].name, item);
        // printf("%s\n", qindeg[i].name);
        for (int ci = 0; ci < strlen(qindeg[i].name); ci++)
        {
            qindeg[i].name[ci] = tolower(item[ci]);
        }
        i++;
        item = strtok(NULL, " ");
    }

    // for (int j = 0; j < i; j++)
    // {
    //     printf("\n..>%s", qindeg[j].name);

    // }

    int totalIngredients = 0;
    int matchedIngredients = searchinlistindeg(&totalIngredients, qindeg, pakistani_recipes_list[0], i);
    // printf("\ntotal match : %d", matchedIngredients);
    // printf("\ntotal  : %d\n", totalIngredients);

    if (totalIngredients >= 4)
    {
        // if (matchedIngredients >= totalIngredients - 2)
        if (matchedIngredients >= totalIngredients * 0.8) // if 80% of ind are same
        {
            printrecipe(pakistani_recipes_list[0]);
            datafound = 1;
        }
    }

    if (datafound != 1)
    {
        printf("\n\033[1;41m \tNothing Found!\t \033[0m\n");
    }
    // printf("\ntotal match : %d\n", matchedIngredients);
    // printf("\ntotal  : %d\n", totalIngredients);

    printf("\n\033[1;31m---------------------------------\033[0m\n");
    printf("\n\033[1;33m Add space between Ingredients");
    printf("\n\033[1;0m       [0]- Back [1]- Main menu");
    printf("\n\033[1;31m---------------------------------\033[0m\n");
    scanf(" ");
}

int searchinlistindeg(int *total, struct Ingredient items[], struct Recipe recipe, int itemsize)
{
    int t = 0, output = 0;

    for (int j = 0; strcmp(recipe.indegridients[j].name, "") != 0; j++)
    { // one by one user typed ingridients

        for (int k = 0; k < itemsize; k++)
        { // one by one user cheking the recepi data

            if (strcmp(items[k].name, recipe.indegridients[j].name) == 0)
            {
                // printf("\n[%d] %s", j, recipe.Ingredients[j].name);
                output++;
                break;
            }
        }

        t++;
    }

    *total = t;
    return output;
}
// int is_dublicate(struct Ingredient items[10], int index, char name[20])
// {
//     for (int i = index; i < 0; i--)
//     {
//         if (items[i].name == name)
//         {
//             return 1;
//         }
//     }
//     return 0;
// }
