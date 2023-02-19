/*
** EPITECH PROJECT, 2023
** project_name
** File description:
** main
*/
int my_str_compare(char *s1, char *s2);
void write(int fd, char *a, int len);

//prints all lower case letter in a str
int all_lower(char *str)
{
    int count = 0;
    for (int i = 0; str[i]; i++) {
        if (65 <= str[i] && str[i] <= 90) {
            ;
        } else {
            write(1, &str[i], 1);
            count++;        
        } 
    }
    return count;
}

//prints all upper case letter in a str
int all_up(char *str)
{
    int count = 0;
    for (int i = 0; str[i]; i++) {
        if (97 <= str[i] && str[i] <= 122) {
            ;
        } else {
            write(1, &str[i], 1);
            count++;
        }       
    }
    return count;
}

int main(int ac, char **av)
{
    if (ac != 3)
        return 84;
    if (my_str_compare(av[1], "a") == 0 && my_str_compare(av[1], "A") == 0)
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
