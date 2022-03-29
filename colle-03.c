#include <stdlib.h>
#include <unistd.h>

void ft_putchar(char c){
	write(1, &c, 1);
}

void ft_first_line(int width, char *chars){
	int i;

	if (width >= 1)
		ft_putchar(chars[0]);
	i = 1;
	while (i < width - 1)
	{
		ft_putchar(chars[1]);
		i++;
	}
	if (width >= 2)
		ft_putchar(chars[3]);
}

void ft_inside(int width, int height, char *chars){
	int i;
	int j;

	i = 1;
	while (i < height - 1)
	{
		ft_putchar('\n');
		j = 1;
		ft_putchar(chars[2]);
		while (j < width - 1)
		{
			ft_putchar(' ');
			j++;
		}
		ft_putchar(chars[2]);
		i++;
	}
}

int main(int argc, char const *argv[])
{
	if (argc != 3){
		return 1;
	}
	char chars[4];

	chars[0] = 'A';
	chars[1] = 'B';
	chars[2] = 'B';
	chars[3] = 'C';
	if (atoi(argv[2]) >= 1)
		ft_first_line(atoi(argv[1]), chars);
	if (atoi(argv[2]) >= 3)
		ft_inside(atoi(argv[1]), atoi(argv[2]), chars);
	if (atoi(argv[2]) >= 2){
		ft_putchar('\n');
		ft_first_line(atoi(argv[1]), chars);
	}
	return 0;
}
