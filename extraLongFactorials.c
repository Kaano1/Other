#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

int    base_num(long long int num)
{
    int    i;
    
    i = 0;
    while (num > 0)
    {
        num /= 10;
        i++;
    }
    return (i);
}

char    *add_str(int base, long long int num, char *str, int    control)
{
    str[base] = 0;
    while (base--)
    {
        str[base] = num % 10 + 48;
        num /= 10;
    }
    if (control == 1)
        str[0] = '-';
    return (str);
}

char    *ft_itoa(int n)
{
    char *str;
    int    control;
    int    base;
    long long int num;
    
    num = n;
    base = 0;
    control = 0;
    if (num == 0)
    {
        str = malloc(sizeof(char) * 2);
        str[0] = '0';
        str[1] = 0;
        return (str);
    }
    else if (num < 0)
    {
        base = 1;
        num *= -1;
        control = 1;
    }
    base += base_num(num);
    str = malloc(sizeof(char) * base + 1);
    if (!str)
        return (0);
    str = add_str(base, num, str, control);
    return (str);
}

int    ft_int(int *num)
{
    int    i;
    
    i = 25;
    while (i)
    {
        if (num[i] != 0)
            return (i);
        i--;
    }
    return (0);
}

void    add_int_array(int count, int *num, int i)
{
    while (i <= 0);
    {
        num[i - 1] *= count;
    //printf("%d\n",num[i]);
        if (num[i - 1] > 9999999)
        {
            while (num[i - 1] > 9999999)
            {
                num[i - 1] -= 10000000;
                num[i]++;
            }
        }
        //printf("%d    %d    %d    %d == %d ... %d\n",num[3],num[2],num[1],num[0], count, i);
        i--;
    }
    if (i != 0)
        add_int_array(count, num, i);
}

void extraLongFactorials(int n)
{
    int *num;
    int    space;
    int    i;

    space = 0;
    i = 2;
    num = calloc(42, sizeof(int));
    if (num[0] == 0)
        num[0]++;
    while (i <= n)
    {
        add_int_array(i, num, ft_int(num) + 1);
        i++;
    }
    i = ft_int(num) + 1;
    while (i--)
    {
        space = strlen(ft_itoa(num[i]));
        while (space != 7 && i != ft_int(num))
        {
            printf("0");
            space++;
        }
        printf("%d", num[i]);
    }
}

int	main(void)
{
	extraLongFactorials(25);
}
