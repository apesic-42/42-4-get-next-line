
#include "get_next_line.h"
#include <fcntl.h> // Pour open() et O_RDONLY
#include <unistd.h> // Pour close() et d'autres fonctions d'E/S comme read()

int	main(void)
{
	int		fd;
	char	*a;
 	char	*b;
	char	*c;
	char	*d;
	char	*e;
	char	*f;
	char	*g;
	char	*h;
	char	*i;
	char	*j;
	char	*k;
	char	*l;
	char	*m;



	// empty.txt
	// ok.txt
	fd = open("variable_nls.txt", O_RDONLY);
	a = get_next_line(fd);
	printf("%s\n", a);
	free(a);
 	b = get_next_line(fd);
	printf("%s", b);
	free(b);
	c = get_next_line(fd);
	printf("%s", c);
	free(c);
	d = get_next_line(fd);
	printf("%s", d);
	free(d);
	e = get_next_line(fd);
	printf("%s", e);
	free(e);
	f = get_next_line(fd);
	printf("%s", f);
	free(f);
	g = get_next_line(fd);
	printf("%s", g);
	free(g);
	h = get_next_line(fd);
	printf("%s", h);
	free(h);
	i = get_next_line(fd);
	printf("%s", i);
	free(i);
	j = get_next_line(fd);
	printf("%s", j);
	free(j);
	k = get_next_line(fd);
	printf("%s", k);
	free(k);
	l = get_next_line(fd);
	printf("%s", l);
	free(l);
	m = get_next_line(fd);
	printf("%s", m);
	free(m);
}

//cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c main.c -g 
