#ifndef FILE_H
#define FILE_H
struct indegridient
{
    char name[10];
};
struct Recepie
{
    int id;
    char title[30];
    struct indegridient indegridients[10];
    char steps[100];
};

void readData(struct Recepie *recipies);
int concatInt(int num1, int num2);
void dta();

#endif
