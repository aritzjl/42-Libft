#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node;
	t_list	*next_node;

	if (!(*lst) || !lst)
		return ;
	node = *lst;
	while (node)
	{
		next_node = node->next;
		del(node->content);
		free(node);
		node = next_node;
	}
	*lst = NULL;
}
