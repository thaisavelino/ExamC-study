/* ************************************************************************** **
Assignment name  : last_word
Expected files   : last_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays its last word followed by a \n.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or there are no words, display a newline.

Example:

$> ./last_word "FOR PONY" | cat -e
PONY$
$> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
not$
$> ./last_word "   " | cat -e
$
$> ./last_word "a" "b" | cat -e
$
$> ./last_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>
********************************************************************************

Answer
Trim spaces in the end
check if there are spaces and change start
then print it =)

*******************************************************************************/

#include<unistd.h>
#include<stdio.h>

void    *last_word(char *str)
{
    int i;
    int start, end;
    
    i = 0;
    start = 0;
    end = 0;
    while(str[end])
        end++;
    end--;
    while (str[end] == ' ' || str[end] == '\t')
        end--;
    while (str[i] && i < end)
    {
        if (str[i] == ' ' || str[i] == '\t')
            start = i;
        i++;
    }
    while(str[start] && start < end)
        write(1, &str[start++], 1);
}

int main(int argc, char **argv)
{
    if (argc == 2)
        last_word(argv[1]);
    write(1, "\n", 1);
    return (0);
}
