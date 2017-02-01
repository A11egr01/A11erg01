#include <unistd.h>
#include <stdio.h>

char *ft_strcpy(char *s1, char *s2)
{
	int i;
	i = 0;

	while (s1[i] && s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return(s1);
}

int main (void)
{
	printf("%s\n", ft_strcpy("are", "rea"));
	return (0);
}