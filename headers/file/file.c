#include <stdio.h>
#include "file.h"
#include "../strings/strings.h"

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
    int totalElements = 4;
    // int totalElements = readTotalElements(recipies);
    fptr = fopen(INDEGRIDIENTS_PATH, "r");
    if (fptr == NULL)
    {
        printf("Error! Not able to open the file.\n\n");
    }
    else
    {
        char buffer[1000];

        int idsIndex = 0;
        int titleIndex = 0;
        while (fgets(buffer, sizeof(buffer), fptr) != NULL)
        {
            if (buffer[0] == 'i' && buffer[1] == 'd') // for line id
            {
                if (buffer[0] == 'i' && buffer[1] == 'd') // for line id
                {
                    int s = 3;            // id:
                    if (buffer[s] == ',') // at first index
                    {
                        printf(" buffer[%d] > %d ", s, buffer[s]);
                        recipies[idsIndex].id = asciiToInt(buffer[s]);
                    }
                    else
                    {
                        while (buffer[s] != ',') // id:1,
                        {
                            if (s == 3) // at first index
                            {
                                recipies[idsIndex].id = 0;
                            }
                            // printf("{%d} %c>%d", s, buffer[s], asciiToInt(buffer[s]));
                            recipies[idsIndex].id =
                                concatInt(recipies[idsIndex].id, asciiToInt(buffer[s]));
                            s++;
                        }
                    }
                    idsIndex++;
                }
            }

            if (buffer[0] == 't' && buffer[1] == 'i') // for line id
            {
                int s2 = 6;                               // id:
                for (int w2 = 0; buffer[s2] != ','; w2++) // id:1,
                {
                    // printf("{%d} %c>%d", s, buffer[s], asciiToInt(buffer[s]));
                    if (buffer[s2] == '.')
                    {
                        recipies[titleIndex].title[w2] = ' ';
                    }
                    else
                    {
                        recipies[titleIndex].title[w2] = buffer[s2];
                    }
                    s2++;
                }
                titleIndex++;
            }
        }
    }

    for (int i = 0; i < 4; i++)
    {
        printf("\n > > > >%d", recipies[i].id);
        printf("\n > > > >%s", recipies[i].title);
    }

    fclose(fptr);
}