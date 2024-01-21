//

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_numbers(void)
{
    int    number;
    number = 0;
    while (number < 10)
    {
        ft_putchar(number + 48);
        number++;
    }
}

int main(void)
{
    ft_print_numbers();
    return (0);
}