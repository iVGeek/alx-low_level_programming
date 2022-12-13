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

/**
 * _memcpy - a function ...
 * @dest: the chaine
 * @src: the char
 * @n: the int
 *
 * Return: 1 or 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
