#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	char	str[8] = "bonjour";
	char	str2[8] = "bonsoir";

	printf("av : str : %s\n", str);
	printf("av : str2 : %s\n", str2);

	ft_memmove(str2, str, 8);

	printf("ap : str : %s\n", str);
	printf("ap : str2 : %s\n", str2);

	printf("=== Test OK === \n");
	return (0);
}
