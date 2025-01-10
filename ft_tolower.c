#include "libft.h"

int ft_tolower(int i)
{
	if (i >= 65 && i <= 90)
		return (i + 32);
	return (i);
}
