#include <stdio.h> //for printf("%d\n", );

int ft_atoi(char *str)
{
	int i;
	int negative;
	int result;

	negative = 1;
	i = 0;
	result = 0;
	while (str[i] == '-' || str[i] == '\t' || str[i] == '+' || str[i] == ' ')
	{
		i++;
	}
	if (str[i - 1] == '-')
	{
		negative = -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	result = negative * result;
	return (result);
}

int main(void)
{
	printf("%d", ft_atoi("123"));
	return(0);
}