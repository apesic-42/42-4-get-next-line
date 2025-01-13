/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apesic <apesic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 12:49:14 by apesic            #+#    #+#             */
/*   Updated: 2025/01/13 13:44:36 by apesic           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "get_next_line.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	size_t	p;
	void	*res;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	p = nmemb * size;
	res = malloc(p);
	if (res == NULL || p / size != nmemb)
		return (NULL);
	while (i < nmemb * size)
	{
		((char *)res)[i] = 0;
		i++;
	}
	return (res);
}

int	spe_len(t_caract *first)
{
	int			i;
	t_caract	*courant;

	i = 0;
	courant = first;
	if (first->data == '\n')
		return (1);
	while (courant != NULL && courant->is_nl != true && courant->data != '\n')
	{
		courant = courant->next;
		i++;
	}
	if (courant != NULL && courant->data == '\n')
		i++;
	return (i);
}

int	len_before_nl(t_caract *first)
{
	int			i;
	t_caract	*courant;

	i = 0;
	courant = first;
	while (courant != NULL)
	{
		if (courant->is_nl == true)
			return (i + 1);
		courant = courant->next;
		i++;
	}
	return (-1);
}

t_caract	*new_t_caract(t_caract *t_caract)
{
	if (t_caract->data == '\n')
		t_caract->is_nl = true;
	else
		t_caract->is_nl = false;
	t_caract->next = NULL;
	return (t_caract);
}

void	*clean_exit(t_caract *first)
{
	t_caract	*courant;
	t_caract	*tmp;

	courant = first;
	while (courant != NULL)
	{
		tmp = courant;
		courant = courant->next;
		free(tmp);
	}
	return (NULL);
}
