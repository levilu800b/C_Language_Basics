// Create a function that displays the alphabet in lowercase, on a single line, by ascending order, starting from the letter ’a’.
// • Here’s how it should be prototyped : 
// void ft_print_alphabet(void);

#include <unistd.h>

void    ft_print_alphabet(void)
{
    write(1, "abcdefghijklmnopqrstuvwxyx", 27);
}

int main(void)
{
    ft_print_alphabet();
    return (0);
}