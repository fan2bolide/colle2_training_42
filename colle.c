#include "header.h"

int ft_strlen(char *str){
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return i;
}

int ft_get_width(char *colle){
	int i;

	i = 0;
	while (colle[i] && colle[i] != '\n')
		i++;
	return i;
}

int ft_get_height(char *colle){
	int i;
	int count;

	i = 0;
	count = 0;
	while (colle[i])
	{
		if (colle[i] == '\n')
			count++;
		i++;
	}
	return count + 1;
}

char *ft_stradd(char *str, char *buffer, int size){
	char *dest;
	int i;
	int j;

	i = 0;
	dest = malloc(sizeof(char) * size);
	while (str[i]){
		dest[i] = str[i];
		i++;
	}
	j = 0;
	while (buffer[j]){
		dest[i] = buffer[j];
		j++;
		i++;
	}
	dest[size] = 0;
	free(str);
	return dest;
}

char *ft_get_buffer(){
	int BUFF_SIZE = 10;
	int count;
	int size;
	char buffer[BUFF_SIZE + 1];
	char *str;

	count = 10;
	size = 0;
	str = malloc(1);
	buffer[BUFF_SIZE] = 0;
	while (count != 0)
	{
		count = read(0, buffer, 10);
		str[size] = 0;
		size += count;
		str = ft_stradd(str, buffer, size);
	}
	return str;
}

int ft_strcmp(char *str1, char *str2){
	int i;

	i = 0;
	while (str1[i] && str2[i])
	{
		if (str1[i] != str2[i]){
			return str1[i] - str2[i];
		}
		i++;
	}
	if (!str1[i] && !str2[i]){
		return 0;
	}
	return -1;
}

void ft_output(char *read, int height, int width){
	int count;
	char *made;

	count = 0;
	made = ft_get_colle00(width, height);
	if (ft_strcmp(read, made) == 0){
		printf("colle-00");
		count++;
	}
	free(made);
	made = ft_get_colle01(width, height);
	if (ft_strcmp(read, made) == 0){
		if (count != 0)
			printf(" || ");
		printf("colle-01");
		count++;
	}
	free(made);
	made = ft_get_colle02(width, height);
	if (ft_strcmp(read, made) == 0){
		if (count != 0)
			printf(" || ");
		printf("colle-02");
		count++;
	}
	free(made);
	made = ft_get_colle03(width, height);
	if (ft_strcmp(read, made) == 0){
		if (count != 0)
			printf(" || ");
		printf("colle-03");
		count++;
	}
	free(made);
	made = ft_get_colle04(width, height);
	if (ft_strcmp(read, made) == 0){
		if (count != 0)
			printf(" || ");
		printf("colle-04");
		count++;
	}
	free(made);
	if (count != 0)
		printf(" %d %d\n", width, height);
	if (count == 0)
		printf("aucune %d %d\n", width, height);
}

int main(void)
{
	char *read;
	int height;
	int width;

	read = ft_get_buffer();
	height = ft_get_height(read);
	width = ft_get_width(read);

	ft_output(read, height, width);

	return 0;
}
