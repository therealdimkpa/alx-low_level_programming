/**
* _strcpy -	Copies the content of one string into another
* @dest:		Char parameter
* @src:		Char parameter
* Return:	dest
*/


char *_strcpy(char *dest, char *src)
{
	int a, b = 0;

	for (a = 0; src[a] != '\0'; ++a)
	{
		dest[b] = src[a];
		++b;
	}
	dest[b] = '\0';

	return (dest);
}
