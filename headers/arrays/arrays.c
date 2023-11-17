#include <stdio.h>
#include "arrays.h"
void printArray(char text[], int s)
{
    for (int i = 0; i < s; i++)
    {
        printf("%c", text[i]);
    }
}

void sort_accending(int size, int *array)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (array[i] < array[j])
            {
                int a = array[i];
                array[i] = array[j];
                array[j] = a;
            }
        }
    }
}
void sort_dedcending(int size, int *array)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (array[i] > array[j])
            {
                int a = array[i];
                array[i] = array[j];
                array[j] = a;
            }
        }
    }
}