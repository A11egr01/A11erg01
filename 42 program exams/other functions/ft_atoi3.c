#include <stdio.h>

int ft_atoi(char *str)
{
	int i;
	int negative;
	int result;

	i = 0;
	negative = 1;
	result = 0;

	while (str[i] == '-'|| str[i] == ' ' || str[i] == '\t' || str[i] == '+')
	{
		i++;
	}
	if (str[i - 1] == '-')
	{
		negative = -1;
	}
	while (str[i] >= '1' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
	i++;
}
		result = negative * result;
	return(result);
}

int main (void)
{
	printf("%d", ft_atoi("-234556"));
		return(0);
}