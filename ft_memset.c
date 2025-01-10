#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    char    *mem;

    mem = (char *)b;
    while (len-- > 0)
        mem[len - 1] = c;
    return (b);
}
