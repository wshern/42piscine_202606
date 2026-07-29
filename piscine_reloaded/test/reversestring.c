#include <unistd.h>

char *ft_itoa(int nbr);

int str_len(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

void    str_reverse(char *str)
{
    int i;
    int end_i;
    int start_i;
    char *abbr;

    i = str_len(str) - 1;
    while (i >= 0)
    {
        while (str[i] == ' ' || str[i] == '\t')
            i--;
        end_i = i;
        while (!(str[i] == ' ' || str[i] == '\t') && i > 0)
            i--;
        if (i == 0 && !(str[i] == ' ' || str[i] == '\t'))
            start_i = 0;
        else
            start_i = i + 1;
        if (end_i - start_i > 2)
        {
            abbr = ft_itoa(end_i - start_i - 1);
            write(1, &str[start_i], 1);
            write(1, abbr, str_len(abbr));
            write(1, &str[end_i], 1);
        }
        else
            while (start_i <= end_i)
            {
                write(1, &str[start_i], 1);
                start_i++;
            }
        if (i != 0)
            write(1, " ", 1);
        if (i == 0)
            break;
    }
}

int main(int ac, char **av)
{
    if (ac != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    str_reverse(av[1]);
    return (0);
}