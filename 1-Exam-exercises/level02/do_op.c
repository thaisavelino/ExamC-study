/*
Assignment name  : do_op
Expected files   : *.c, *.h
Allowed functions: atoi, printf, write
--------------------------------------------------------------------------------

Write a program that takes three strings:
- The first and the third one are representations of base-10 signed integers
  that fit in an int.
- The second one is an arithmetic operator chosen from: + - * / %

The program must display the result of the requested arithmetic operation,
followed by a newline. If the number of parameters is not 3, the program
just displays a newline.

You can assume the string have no mistakes or extraneous characters. Negative
numbers, in input or output, will have one and only one leading '-'. The
result of the operation fits in an int.

Examples:

$> ./do_op "123" "*" 456 | cat -e
56088$
$> ./do_op "9828" "/" 234 | cat -e
42$
$> ./do_op "1" "+" "-43" | cat -e
-42$
$> ./do_op | cat -e
$
*/ 

#include <stdio.h>

int		ft_atoi(char *s)
{
	int		sign;
	int	    num;

	num = 0;
	sign = 1;
	if (s || *s)
	{
    	while (*s == 32 || (*s >= 9 && *s <= 13))
    		s++;
    	if (*s == '-')
    		sign = -1;
    	if (*s == '+' || *s == '-')
    		s++;
    	while (*s >= '0' && *s <= '9')
    	{
    		num = num * 10 + *s - '0';
    		s++;
    	}
	}
	return (num * sign);
}

int    do_op(int num1, char *op, int num2)
{
    if (*op == '*')
        return (num1 * num2);
    if (*op == '-')
        return (num1 - num2);
    if (*op == '/')
        return (num1 / num2);
    if (*op == '+')
        return (num1 + num2);
    return (0);
}


int		main(int argc, char **argv)//
{//
    if (argc == 4)
    {
        printf("%d", do_op(ft_atoi(argv[1]), argv[2], ft_atoi(argv[3])));
    }
    return (0);
}//
