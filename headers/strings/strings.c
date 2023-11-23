#include "strings.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char capital_alphabets = 'A'; // 65 - 90
const char small_alphabets = 'a';   // 97 - 122

char toCapital(char alphabet)
{
    if (alphabet >= 97 && alphabet <= 122)
    {
        return capital_alphabets + (alphabet - small_alphabets);
    }
    return alphabet;
}
char toSmall(char alphabet)
{
    if (alphabet >= 65 && alphabet <= 90)
    {
        return small_alphabets + (alphabet - capital_alphabets);
    }
    return alphabet;
}
void toUpper(char *text, int s)
{
    for (int i = 0; i < s; i++)
    {
        text[i] = toCapital(text[i]);
    }
}

int concatInt(int num1, int num2)
{
    char strNum1[20];
    char strNum2[20];

    sprintf(strNum1, "%d", num1);
    sprintf(strNum2, "%d", num2);

    char result[40];
    strcpy(result, strNum1);
    strcat(result, strNum2);

    int concatenatedInt = atoi(result);

    return concatenatedInt;
}

int asciiToInt(char a)
{

    if (a >= '0' && a <= '9')
    {
        // printf("%d - %d = %d \n ",a,48,a-48);
        return a - 48;
    }
    else
    {
        return -1;
    }
}