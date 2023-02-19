#include <criterion/criterion.h>
#include <criterion/redirect.h>

int all_up(char *str);
int error_handling(int ac, char **av);

//redirects the writes & printfs to criterion
void redirect_all_stdout(void)
{
        cr_redirect_stdout();
        cr_redirect_stderr();
}

Test(upper_case, full_upper, .init=redirect_all_stdout)
{
    cr_assert( all_up("ABCD") == 4);
}

Test(upper_case, as_much_upper_as_lower, .init=redirect_all_stdout)
{
    cr_assert( all_up("ABcd") == 2);
}
