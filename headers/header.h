void loading(void);
void delay(unsigned long int miliseconds);
void cls(void);

void cls(void)
{
    system("cls");
}

void loading(void)
{

    //  Beep(1330,130);
    // Beep(1330,130);
    // Beep(1330,130);
    // Beep(1300,1400);

    unsigned long int ms = 200;
    int repeat = 3;
    printf("\n");
    for (int i = 1; i <= repeat; i++)
    {
        system("cls");
        printf("...");
        delay(ms);
        system("cls");
        printf("..-");
        delay(ms);
        system("cls");
        printf(".-.");
        delay(ms);
        system("cls");
        printf("-..");
        delay(ms);
        i++;
    }
    system("cls");
}
void delay(unsigned long int miliseconds)
{
    Sleep(miliseconds);
}
