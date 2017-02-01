#include <unistd.h>

int str_length(char *str)
{
	int i;
	i = 0;

	while(shar[i])
	i++;
	return(i);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void search (char *str, char a, char b)
{
	int i;

	i = 0;
	while (str[i])
	{
	if (str[i] == a)
		ft_putchar(b)
	else 
		ft_putchar(str[i])
		i++;
	}
}

int main (int argc, char **argv)
{
	if (argc !=4)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (str_length(argc[2] != 1 || str_length(argc[3] != 0))
	{
		write(1, "\n", 1);
		return (0);
	}
	search(argv[1][i], argv[2][0], argv[3][0]);
	ft_putchar(1, "\n", 1);
	return(0);
}