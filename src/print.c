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

