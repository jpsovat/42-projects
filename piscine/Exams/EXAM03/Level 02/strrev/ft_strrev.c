void	ft_swap(char *i, char *len)
{
	char	temp;
	
	temp = *len;
	*len = *i;
	*i = temp;
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(str) - 1;
	while (i < len)
	{
		ft_swap(&str[i], &str[len]);
		i++;
		len--;	
	}
	return (str);
}
