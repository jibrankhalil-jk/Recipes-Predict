#include "strings.h"

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
