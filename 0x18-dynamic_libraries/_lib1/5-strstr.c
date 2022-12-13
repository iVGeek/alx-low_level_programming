/*****************************************************************************/
/*                                                                           */
/*                                               _____  ______    ____  ___  */
/* 0-memset.c                                   /  _  \ |    |    \   \/  /  */
/*                                             /  /_\  \|    |     \     /   */
/* By: iVGeek                                 /    |    \    |___  /     \   */
/*                                            \____|__  /_______ \/___/\  \  */
/*                                                    \/        \/      \_/  */
/*                                                                           */
/*                                                                           */
/*****************************************************************************/

#include <string.h>

/**
 * _strstr - a function ...
 * @haystack: the chaine
 * @needle: the chaine
 *
 * Return: 1 or 0
 */

char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;

			} while (haystack[index] == needle[index]);
		}

		haystack++;
	}

	return ('\0');
}
