#include "libft.h"

static t_list	*copy_list(t_list *lst)
{
	t_list	*res;
	t_list	*new_node;
	t_list	*prev_node;

	if (!lst)
		return (NULL);
	res = ft_lstnew(lst->content);
	if (!res)
		return (NULL);
	prev_node = res;
	lst = lst->next;
	while (lst)
	{
		new_node = ft_lstnew(lst->content);
		if (!new_node)
		{
			ft_lstclear(&res, free);
			return (NULL);
		}
		prev_node->next = new_node;
		prev_node = new_node;
		lst = lst->next;
	}
	return (res);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*node;
	void	*new_content;

	if (!lst || !f)
		return (NULL);
	res = copy_list(lst);
	if (!res)
		return (NULL);
	node = res;
	while (node)
	{
		new_content = f(node->content);
		if (!new_content)
		{
			ft_lstclear(&res, del);
			return (NULL);
		}
		node->content = new_content;
		node = node->next;
	}
	return (res);
}
