/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apesic <apesic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 16:47:58 by apesic            #+#    #+#             */
/*   Updated: 2024/12/17 19:15:00 by apesic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct t_caract
{
	char			data;
	struct t_caract	*next;
	bool			is_nl;
}					t_caract;

char				*get_next_line(int fd);
void				*ft_calloc(size_t nmemb, size_t size);
void				afficher_liste(t_caract *head);
int					len_before_nl(t_caract *first);
t_caract			*new_t_caract(t_caract *t_caract);
int	spe_len(t_caract *first);

#endif // FT_H
