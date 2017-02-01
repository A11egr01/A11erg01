#include <unistd.h>

void	ulstr(char *str)
{
	int i;
	i = 0;
	char c;

	while (str[i])
	{
		c = str[i];

		if (c >= 'a' && c <= 'z')
			c = c - 32;
		else if (c >= 'A' && c <= 'Z')
			c += 32; 
		i++;
			write(1, &c, 1);
	}
}

int		main(int argc, char *argv[])
{
	if (argc == 2)
		ulstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}
