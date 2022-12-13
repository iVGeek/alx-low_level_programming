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
 *_isalpha - a function that checks for lowercase character
 *@c: The charactere
 *
 *Return: On success 1.
 *On error, -1 is returned, and errno is set appropriately.
 * Returns 1 if c is a letter, lowercase or uppercase
 * Returns 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
