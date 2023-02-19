/*
** EPITECH PROJECT, 2023
** project_name
** File description:
** main
*/
int my_str_compare(char *s1, char *s2);
void write(int fd, char *a, int len);

int error_handling(int ac, char **av)
{
    if (ac != 3)
        return 84;
    if (my_str_compare(av[1], "a") == 0 && my_str_compare(av[1], "A") == 0)
        return 84;
    
    return 0;
}

