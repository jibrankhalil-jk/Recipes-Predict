#include <stdio.h>
#include "file.h"
#include "../strings/strings.h"

const char INDEGRIDIENTS_PATH[] = "./data/ingredients.txt";
const char RECIPIE_PATH[] = "./data/ingredients.txt";

int readTotalElements(struct Recepie *recipies)
{
    FILE *fptr;
    int elements = 0;
    fptr = fopen(INDEGRIDIENTS_PATH, "r");
    if (fptr == NULL)
    {
        printf("Error! Not able to open the file.\n\n");
    }
    else
    {
        char buffer[1000];
        for (int mainIndex = 0; fgets(buffer, sizeof(buffer), fptr) != NULL; mainIndex++)
        {
            elements++;
        }
    }

    fclose(fptr);
    return elements / 4; //  one recipe is in 4 lines
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

        for (int idsIndex = 0; fgets(buffer, sizeof(buffer), fptr) != NULL;)
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
        }
    }

    for (int i = 0; i < 4; i++)
    {
        printf("\n > > > >%d", recipies[i].id);
    }

    fclose(fptr);
}