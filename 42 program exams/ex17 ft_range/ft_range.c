#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		*range;

	i = 0;
	if (min >= max)
		return (NULL);
	range = (int*)malloc(sizeof(int) * (max - min));
	if (range == NULL)
		return (NULL);
	while (i < max - min)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}