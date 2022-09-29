#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdlib.h>

int    ft_strlen(const char *s)
{
    int    i;
    
    i = 0;
    while (s[i])
        i++;
    return (i);
}

int    add_join(char *str, const char *s, int j)
{
    int    i;
    
    i = 0;
    while (s[i])
    {
        str[j] = s[i];
        j++;
        i++;
    }
    return (j);
}

char    *ft_strjoin(char const *s1, char const *s2)
{
    char *str;
    int    i;

    if (!s1 || !s2)
        return (NULL);
    i = 0;
    str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
    if (!str)
        return (0);
    i = add_join(str, s1, i);
    i = add_join(str, s2, i);
    str[i] = 0;
    return (str);
}

char    *timeInWords(int h, int m)
{
    char *time[13] = {"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve"};
    char *minutes[22] = {"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen","twenty", "twenty"};
    char *result;
    int    key;
    int    base;

    base = 0;;
    key = 0;
    if (m > 30)
        key = 1;
    while (base < 60)
    {
        if (m == 0)
        {
            result = ft_strjoin(time[h - 1], " o' clock");
            break;
        }
        else if (m == 1)
        {
        	result = ft_strjoin(minutes[m],  " minutes past ");
            result = ft_strjoin(result , time[h - 1]);
		}
        else if (m % 15 == 0 && m != 30 && m != 60)
        {
            (m < 30)?(result = ft_strjoin("quarter past ", time[h - 1])):(result = ft_strjoin("quarter to ", time[h]));
            break;
        }
        else if (m == 30)
        {
            result = ft_strjoin("half past ", time[h - 1]);
            break;
        }
        else if (m > 20 && key != 1)
        {
            m -= 20;
            result = ft_strjoin("twenty ", minutes[m]);
            result = ft_strjoin(result ," minutes past ");
            result = ft_strjoin(result , time[h - 1]);
            break;
        }
        else if (key == 0)
        {
            result = ft_strjoin(minutes[m],  " minutes past ");
            result = ft_strjoin(result , time[h - 1]);
            break;
        }
        else if (key == 1)
        {
            if (m >= 31 && 40 >= m)
            {
                m = m % 10;
                result = ft_strjoin("twenty ", minutes[m]);
                result = ft_strjoin(result ," minutes to ");
                result = ft_strjoin(result , time[h]);
                break;
            }
            m = 60 - m;
            result = ft_strjoin(minutes[m],  " minutes to ");
            result = ft_strjoin(result , time[h]);
            break;
        }
        base += 10;
    }
    return (result);
}

int	main(void)
{
	printf("%s",timeInWords(11 , 1));
}
