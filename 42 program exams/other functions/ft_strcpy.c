#include <stdio.h>

char	*ft_strcpy(char *str1, char *str2)
{
	int i;

	i = 0;
	while (str1[i] && str2[i])
	{
		str1[i] = str2[i];
		i++;
	}
	str1[i] = '\0';
	return (str1);
}

int main (void)
{
	printf("%s\n", ft_strcpy("are", "rea"));
	return (0);
}