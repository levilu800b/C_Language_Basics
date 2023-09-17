#include <stdio.h>

#define INPUT_SIZE 20

#define lEnd '\0'
#define nLine '\n'


char input[INPUT_SIZE];

char infiniteLoop = 1;

void handleInput();

int equals(char *s0, char *s1);

int main()
{
    while(infiniteLoop)
    {
        printf("%s", "Enter a string: ");
        fgets(input, INPUT_SIZE, stdin);
        handleInput();
    }

    return 0;
}

void handleInput()
{
    if(equals("Hello", input))
    {
        printf("%s\n", "correct");
    } 
    else if(equals("exit", input))
    {
        printf("%s\n", "you typed exit");
        infiniteLoop = 0;
    }
    else if(equals("How are you?", input))
    {
        printf("%s\n", "I am fine, thank you");
    }
}

/*
    equals method requires the first string 
    to have a null terminator (lEnd) as its
    last character, and it also requires the
    second string to end with a new line(nLine)
*/

int equals(char *s0, char *s1)
{
    int i = 0;
    while (s0[i] != lEnd)
    {
        if (s0[i] != s1[i])
        {
            return 0;
        }
        i++;
    }
    if(s1[i] != nLine)
    {
        return 0;
    }
    return 1;
}
