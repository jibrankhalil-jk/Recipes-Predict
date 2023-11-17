#include <stdio.h>
#include "./headers/header.h"
#include "./headers/arrays/arrays.h"
#include "./headers/strings/strings.h"


int main()
{
    char name[]={'j','i','b','r','a','n'};
    toUpper(name,7);
    printArray(name,6);

    return 0;
}