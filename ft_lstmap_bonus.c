#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*new_node;
	t_list	*prev_node;

	new_node = lst;
	res = malloc(sizeof(t_list));
	if (!res)
		return (0);
	prev_node = res;
	while (new_node)
	{
		prev_node->content = f(new_node->content);
		prev_node->next = malloc(sizeof(t_list));
		if (!prev_node)
			ft_lstclear(&new_node, del);
		new_node = new_node->next;
		prev_node = prev_node->next;
	}
	return (res);
}
