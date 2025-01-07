
#include "get_next_line.h"
#include <fcntl.h> // Pour open() et O_RDONLY
#include <unistd.h> // Pour close() et d'autres fonctions d'E/S comme read()

int	main(void)
{
	int		fd;
	char	*a;
 	char	*b;
	// char	*c;
	// char	*d;
	// char	*e;

	fd = open("empty.txt", O_RDONLY);
	a = get_next_line(fd);
	printf("%s\n", a);
	free(a);
 	b = get_next_line(fd);
	printf("%s", b);
	free(b);
	// c = get_next_line(fd);
	// printf("%s", c);
	// free(c);
	// d = get_next_line(fd);
	// printf("%s", d);
	// free(d);
	// e = get_next_line(fd);
	// printf("%s", e);
	// free(e);
	// f = get_next_line(fd);
	// printf("%s", f);
	// free(f);
	// g = get_next_line(fd);
	// printf("%s", g);
	// free(g);
	// h = get_next_line(fd);
	// printf("%s", h);
	// free(h);
}

// cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c -g

