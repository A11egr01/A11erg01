#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void repeat_alpha(char *str)
{
	int i;

	i = 0;
	while(str[i] == ' ' || str[i] == '\t')
		i++;
		while(str[i] && str[i] != ' ' && str[i] != '\t')
		{
			ft_putchar(str[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc != 2)
		ft_putchar('\n');
	else 
		repeat_alpha(argv[1]);
	return(0);
}