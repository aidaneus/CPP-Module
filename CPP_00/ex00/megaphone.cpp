#include <iostream>

int		ft_strlen(char *str)
{
	int a;

	a = 0;
	while (str[a])
		a += 1;
	return (a);
}

char	ft_toupper(char c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
			for (int j = 0; j < ft_strlen(argv[i]); j++)
				std::cout << ft_toupper(argv[i][j]);
		std::cout << std::endl;
	}
	return (0);
}