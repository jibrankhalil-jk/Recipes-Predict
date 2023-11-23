#ifndef FILE_H
#define FILE_H
struct Recepie
{
    int id;
    char title[1];
    char indegridients[1];
    char steps[1];
};
void readData(struct Recepie *recipies);

#endif
