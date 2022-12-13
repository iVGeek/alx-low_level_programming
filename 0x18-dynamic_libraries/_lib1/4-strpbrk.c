/*****************************************************************************/
/*                                                                           */
/*                                               _____  ______    ____  ___  */
/* 4-strpbrk.c                                  /  _  \ |    |    \   \/  /  */
/*                                             /  /_\  \|    |     \     /   */
/* By: iVGeek                                 /    |    \    |___  /     \   */
/*                                            \____|__  /_______ \/___/\  \  */
/*                                                    \/        \/      \_/  */
/*                                                                           */
/*                                                                           */
/*****************************************************************************/

#include <string.h>

/**
 * _strpbrk - a function ...
 * @s: the chaine
 * @accept: the chaine
 *
 * Return: 1 or 0
 */

char *_strpbrk(char *s, char *accept)
{
	if ((s == NULL) || (accept == NULL))
		return (NULL);
	while (*s)
	{
		if (strchr(accept, *s))
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	return (NULL);
}
