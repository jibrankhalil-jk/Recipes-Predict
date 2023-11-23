#include "strings.h"
#include <stdio.h>
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

int concatenateIntegers(int a, int b)
{
    int temp = b;
    int count = 0;
    while (temp != 0)
    {
        temp /= 10;
        count++;
    }

    // Concatenate the integers using arithmetic operations
    int multiplier = 1;
    for (int i = 0; i < count; i++)
    {
        multiplier *= 10;
    }

    return a * multiplier + b;
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