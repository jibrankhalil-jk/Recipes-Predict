#include <stdio.h>
#include "file.h"
#include "../strings/strings.h"

const char INDEGRIDIENTS_PATH[] = "./data/ingredients.txt";
const char RECIPIE_PATH[] = "./data/ingredients.txt";

void readData(struct Recepie *recipies)
{
    FILE *fptr;
    fptr = fopen(INDEGRIDIENTS_PATH, "r");
    if (fptr == NULL)
    {
        printf("Error! Not able to open the file.\n\n");
    }
    else
    {
        char buffer[1000];

        for (int i = 0; fgets(buffer, sizeof(buffer), fptr) != NULL; i++)
        {
            if (buffer[1] == 'd')
            {

                int s = 3;
                do
                {
                    printf("%c ", buffer[s]);
                    // printf("%c>%d,%d\n", buffer[s], buffer[s], asciiToInt(buffer[s]));
                    recipies[i].id = 1;
                    // recipies[i].id = asciiToInt(buffer[s]);
                } while (buffer[++s] != ',');
            }
        }
    }

    printf("\n > > > >%d", recipies[0].id);
    printf("\n > > > >%d", recipies[1].id);
    printf("\n > > > >%d", recipies[2].id);
    printf("\n > > > >%d", recipies[3].id);

    fclose(fptr);
}