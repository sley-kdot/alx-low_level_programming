/**
* *string_nconcat - function that concatenates two strings.
* @s1: input
* @s2: input
* @n: input
* Return: a pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len1, len2;

	len1 = 0;
	len2 = 0;

	while (s1[len1])
		len1++;

	while (s1[len2])
		len2++;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= len2)
		n = len2;

	str = malloc(sizeof(*str) * (len1 + n + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
		str[j + i] = s2[j];
	str[j + i] = '\0';

	return (str);
}
