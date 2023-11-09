#include "main.h"
#include <stddef.h>

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, k, j;
	char *location;

	i = 0;
	j = 0;

	if (needle[0] == '\0')
	{
		return (haystack);
	}

	while (haystack[i] != '\0')
	{
		while (needle[j] != '\0')
		{
			if (haystack[i] == needle[j])
			{
				j++;
				break;
			}
			if (haystack[i] != needle[j])
			{
				j = 0;
				break;
			}
		}
		if (needle[j] == '\0')
		{
			k = i - (j - 1);
			location = &haystack[k];
			return (location);
		}
		i++;
	}
	return (NULL);
}
