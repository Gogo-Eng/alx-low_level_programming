/**
 * _strncat -  a function that concatenates two strings.
 * @dest: the first parameter of the function
 * @src: the second parameter of the function
 * @n: the third parameter of the function
 * Return: returns a char
 */

char *_strncat(char *dest, char *src, int n)
{
	int h;
	int g;

	h = 0;
	while (dest[h])
	{
		h++;
	}

	g = 0;
	while (src[g] && g < n)
	{
		dest[h] = src[g];
		h++;
		g++;
	}
	dest[h] = '\0';
	return (dest);
}
