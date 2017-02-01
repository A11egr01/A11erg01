#include <unistd.h>

int ft_count_words(char *str)
{
	int i;
	int repeat;

	i = 0;
	if (str[i] >= 'A' && str[i] <= 'Z')
		repeat = (str[i] - 65);
	else if (str[i] >= 'a' && str[i] <= 'z')
		repeat = (str[i] - 97);
	i++;
	return (repeat);
}

int main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;

	if (argc < 2)
		write(1, "\n", 1);
	else
	{
		while (argv[1][i] != '\0')
		{
			j = ft_count_words(&argv[1][i]);
			while (j >= 0)
			{
				write(1, &argv[1][i], 1);
				j--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}