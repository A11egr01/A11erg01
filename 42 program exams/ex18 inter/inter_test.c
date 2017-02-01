#include <unistd.h>

int char_verification(char *str, char c, int length) 
{
	int i;
	i = 0;

	while (i < length)
	{
		if (str[i] == c) // checking if char c appeared in s1...
			return (0);  // double FOUND
		i++;
	}
	return (1);
}

void	ft_inter(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i])
	{
		if(char_verification(s1, s1[i], i) == 1) // if there are doubles in s1!
		{
			j = 0;
			while(s2[j])
			{
				if(s2[j] == s1[i]) // checked if s1[1] appeared in s2 also
				{
				write (1, &s1[i], 1);
				break;
				}
				j++;
			}
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 3)
	ft_inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}