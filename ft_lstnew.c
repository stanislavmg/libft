#include "libft.h"

t_list	*ft_listnew(void *content)
{
	t_list	*ps;

	ps = malloc(sizeof(t_list));
	ps -> content = content;
	ps -> next = NULL;
	return (ps);
}