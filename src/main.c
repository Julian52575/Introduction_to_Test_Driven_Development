/*
** EPITECH PROJECT, 2023
** project_name
** File description:
** main
*/
int error_handling(int ac, char **av);

int all_lower(char *str);
int all_up(char *str);

int my_str_compare(char *s1, char *s2);
void write(int fd, char *a, int len);

int main(int ac, char **av)
{
    if (error_handling(ac, av) == 84)
        return 84;

    switch (av[1][0]) {
        case ('a'):
            all_lower(av[2]);
            break;

        case ('A'):
            all_up(av[2]);
            break;
    }
    write(1, "\n", 1);
    return 0;
}
