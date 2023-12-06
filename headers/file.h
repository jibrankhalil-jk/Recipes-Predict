
// struct indegridient
// {
//     char name[10];
// };
// struct Recepie
// {
//     int id;
//     char title[10];
//     struct indegridient indegridients[10];
//     char steps[100];
// };
void readData(struct Recepie *recipies);
int concatInt(int num1, int num2);
void dta();

const char INDEGRIDIENTS_PATH[] = "./data/ingredients.txt";
const char RECIPIE_PATH[] = "./data/ingredients.txt";

void dta()
{

    FILE *fptr;
    fptr = fopen("./data/books.txt", "w");

    char s[] = {'s', 'f', 'd', 'f'};

    for (int i = 0; i < 4; i++)
    {
        fputc(s[i], fptr);
    }
}
void readData(struct Recepie *recipies)

{
    FILE *fptr;
    int totalElements = 0;
    fptr = fopen(INDEGRIDIENTS_PATH, "r");
    if (fptr == NULL)
    {
        printf("Error! Not able to open the file.\n\n");
    }
    else
    {
        char buffer[100];
        int idsIndex = 0;
        int titleIndex = 0;
        int indeIndex = 0;
        while (fgets(buffer, sizeof(buffer), fptr) != NULL)
        {
            // to read ids
            // if (buffer[0] == 'i' && buffer[1] == 'd' && buffer[2] == ':') // for line id
            // {
            //     totalElements++;
            //     int stringIndex = 3; // id:
            //     recipies[idsIndex].id = asciiToInt(buffer[stringIndex]);
            //     while (buffer[stringIndex + 1] != ',')
            //     {
            //         recipies[idsIndex].id = concatInt(recipies[idsIndex].id, asciiToInt(buffer[stringIndex + 1]));
            //         // printf("{%d} [%d]%c>%d,\t", idsIndex, s, buffer[s], asciiToInt(buffer[s]));
            //         stringIndex++;
            //     }
            //     // printf("\n");
            //     idsIndex++;
            // }
            // to read title

            // if (buffer[0] == 't' && buffer[1] == 'i' && buffer[5] == ':') // for line id
            // {
            //     int stringIndex = 6; // id:
            //     strcpy(recipies[titleIndex].title, " ");
            //     while (buffer[stringIndex] != ',')
            //     {
            //         // recipies[idsIndex].id = concatInt(recipies[idsIndex].id, asciiToInt(buffer[stringIndex + 1]));
            //         // printf("{%d} [%d]%c,\t", titleIndex, stringIndex, buffer[stringIndex]);
            //         // if ((buffer[stringIndex] >= 'a' && buffer[stringIndex] <= 'z') || (buffer[stringIndex] >= 'A' && buffer[stringIndex] <= 'Z'))
            //         {
            //             if (buffer[stringIndex] == '.')
            //             {
            //                 recipies[titleIndex]
            //                     .title[stringIndex - 6] = ' ';
            //             }
            //             else
            //             {
            //                 recipies[titleIndex].title[stringIndex - 6] =
            //                     toSmall(buffer[stringIndex]);
            //             }
            //         }

            //         stringIndex++;
            //     }
            //     titleIndex++;
            // }

            if (buffer[0] == 't' && buffer[1] == 'i' && buffer[5] == ':') // for line id
            {
                int stringIndex = 4; // id:
                strcpy(recipies[indeIndex].indegridients[1].name, " ");
                while (buffer[stringIndex] != ',')
                {
                    // recipies[idsIndex].id = concatInt(recipies[idsIndex].id, asciiToInt(buffer[stringIndex + 1]));
                    printf("{%d} [%d]%c,\t", indeIndex, stringIndex, buffer[stringIndex]);
                    // if ((buffer[stringIndex] >= 'a' && buffer[stringIndex] <= 'z') || (buffer[stringIndex] >= 'A' && buffer[stringIndex] <= 'Z'))
                    {
                        if (buffer[stringIndex] == '.')
                        {
                            recipies[indeIndex]
                                .title[stringIndex - 4] = ' ';
                        }
                        else
                        {
                            // strcpy(recipies[indeIndex].indegridients[stringIndex - 4].name,
                            //        toSmall(buffer[stringIndex]));
                        }
                    }

                    stringIndex++;
                }
                indeIndex++;
            }
        }
    }

    fclose(fptr);
}

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
