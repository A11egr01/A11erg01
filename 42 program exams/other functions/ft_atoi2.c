#include <stdio.h>

int ft_atoi(char *str)
{
	int i;
	int neg;
	int result;

	neg = 1;
	i = 0;
	result = 0;
	while (str[i] == '+' || str[i] == '-' || str[i] == ' ' || str[i] == '\t')
	{
		i++;
	}
	if (str[i - 1] == '-')
	{
		neg = -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	result = neg * result;
	return(result);
}

int main(int argc, char **argv)
{
	printf("%d", ft_atoi("234"));
	return (0);
}