#include "libft.h"

size_t	ft_strlen(const char *str)
{
	const char *str1;

	str1 = str;
	while (*str)
		str++;
	return (str - str1);
}
