#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    char **split;
    char *str;

    i = 0;
    str = ft_strdup("   Ceci    est un    second   test   ");
    split = ft_split(str, ' ');
    while (i < 5)
    {
        printf("%p\n", split[i]);
        i++;
    }
    free(split);
    free(str);
}