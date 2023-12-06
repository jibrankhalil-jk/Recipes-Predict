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
