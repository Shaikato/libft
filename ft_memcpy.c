#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	if (dest && src)
	{
		while (n)
		{
			*((unsigned char *)dest + n) = *((unsigned char *)src + n);
			n--;
		}
	}
	return (dest);
}
