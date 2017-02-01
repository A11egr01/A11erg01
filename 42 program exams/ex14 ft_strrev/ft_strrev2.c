#include <stdio.h>
int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return(i);
}

void	ft_swap(char *a, char *b)
{
	char temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	*ft_strev(char *str)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(str);
	while (i < len / 2)
	{
		ft_swap(&str[i], &str[len - i - 1]);
		i++;
	}
	return (str);
}

int	main(void)
{
	char str[4] = "Alex";
	printf("%s\n", ft_strev(str));
	return (0);
}