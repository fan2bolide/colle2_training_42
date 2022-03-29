#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "header.h"

int ft_first_line04(int width, char *chars, char *str, int index){
	int i;

	if (width >= 1){
		
		str[index] = chars[0];
		index++;
	}
	i = 1;
	while (i < width - 1)
	{
		
		str[index] = chars[1];
		i++;
		index++;
	}
	if (width >= 2){
		
		str[index] = chars[3];
		index++;
	}
	
	return index;
}

int ft_last_line04(int width, char *chars, char *str, int index){
	int i;
	
	str[index] = '\n';
	index++;
	if (width >= 1){
		
		str[index] = chars[3];
		index++;
	}
	i = 1;
	while (i < width - 1)
	{
		
		str[index] = chars[1];
		i++;
		index++;
	}
	if (width >= 2){
		str[index] = chars[0];
		index++;
	}
	return index;
}

int ft_inside04(int width, int height, char *chars, char *str, int index){
	int i;
	int j;
	i = 1;
	while (i < height - 1)
	{
		str[index] = '\n';
		index++;
		j = 1;
		
		str[index] = chars[2];
		index++;
		while (j < width - 1)
		{
			str[index] = ' ';
			index++;
			j++;
		}
		if (width > 1)
		{
		
			str[index] = chars[2];
			index++;
		}
		
		i++;
	}
	return index;
}

char *ft_get_colle04(int width, int height){
	char *output;
	int index;
	char chars[4];

	output = malloc(sizeof(char) * 1000);

	chars[0] = 'A';
	chars[1] = 'B';
	chars[2] = 'B';
	chars[3] = 'C';
	index = 0;

	if (height >= 1)
		index = ft_first_line04(width, chars, output, index);
	if (height >= 3)
		index = ft_inside04(width, height, chars, output, index);
	if (height >= 2)
		index = ft_last_line04(width, chars, output, index);
	output[height * (width + 1)] = 0;
	return (output);
}
