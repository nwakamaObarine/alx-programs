#include "main.h"
/**
 **string_nconcat - concatenates n bytes of string to another string
 *@s1:destination string
 *@s2:source string
 *@n: number of bytes from s2 to be concatenate to s1
 *
 *Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsingned int n)
{

	char *s;

	unsingned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len++;
	while (s2 && s2[len2])
		len++;
	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!s)
		return (NULL);
	while (i < len1)
	{
		s[i] = s1[i];
		i++;
	}
}
