/*
******************************************************************************
*                                                                            *
*                                                 _____  ______    ____  ___ *
*    5-printf.c                                  /  _  \ |    |    \   \/  / *
*                                               /  /_\  \|    |     \     /  *
*    By: iVGeek                                /    |    \    |___  /     \  *
*                                              \____|__  /_______ \/___/\  \ *
*                                                      \/        \/      \_/ *
*                                                                            *
*                                                                            *
******************************************************************************
*/

/**
 *_islower - a function that checks for lowercase character
 *@c: The charactere
 *
 *Return: On success 1.
 *On error, -1 is returned, and errno is set appropriately.
 * Returns 1 if c is lowercase
 * Returns 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
