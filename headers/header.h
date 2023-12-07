void delay(unsigned long int miliseconds);
void faveroute(int *mainmenu);

void loading(void)
{
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

void faveroute(int *mainmenu)
{
    char selected_menu;
    int isselected_menu_valid = 0;
    while (isselected_menu_valid == 0)
    {
        FaveroutMenu();
        scanf(" %c", &selected_menu);
        switch (selected_menu)
        {
        case '1':
            isselected_menu_valid = 1;
            break;
        case '2':
            isselected_menu_valid = 1;
            break;
        case '3':
            isselected_menu_valid = 1;
            FaveroutMenu();
            break;
        case '0':
            isselected_menu_valid = 1;
            *mainmenu = 0;
            break;
        default:
            break;
        }
    }
}
void randomrec(int *mainmenu)
{
    char selected_menu;
    int isselected_menu_valid = 1;
    do
    {
        srand(time(NULL));
        int randomfortype = rand() % 4;
        srand(time(NULL));
        int randomrecepie = rand() % 9;
        struct Recipe recepie;

        if (randomfortype == 0)
            recepie = dessert_recepies_list[randomrecepie];
        else if (randomfortype == 1)
            recepie = pakistani_recepies_list[randomrecepie];
        else if (randomfortype == 2)
            recepie = dinner_recepies_list[randomrecepie];
        else if (randomfortype == 3)
            recepie = breakfast_recepies_list[randomrecepie];
        else
            recepie = snacks_recepies_list[randomrecepie];

        randomrecmenu(recepie);
        scanf(" %c", &selected_menu);
        switch (selected_menu)
        {
        case '1':
            continue;
            break;
        case '0':
            isselected_menu_valid = 0;
            *mainmenu = 0;
            break;
        default:
            break;
        }
    } while (isselected_menu_valid);
}