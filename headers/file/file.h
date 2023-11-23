#ifndef FILE_H
#define FILE_H
struct Recepie
{
    int id;
    char title[30];
    char indegridients[100];
    char steps[100];
};
void readData(struct Recepie *recipies);
int concatInt(int num1, int num2);
int readTotalElements(struct Recepie *recipies);

#endif
