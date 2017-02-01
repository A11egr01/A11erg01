#include <unistd.h>

void rotone(char *str)
{
	int i;
	char c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if(str[i] >= 'a' && str[i] <= 'y')
		c++;
		else if(c == 'z')
		c = 'a';
		else if(str[i] >= 'A' && str[i] <= 'Y')
			c++;
		else if(c == 'Z')
		c = 'A';
		write (1, &c, 1);
		i++;
	}
}

int main(int argc, char  *argv[])
{
	if (argc > 1)
	{
		rotone(argv[1]);
		write(1, "\n", 1);
	}
	return (0);
}