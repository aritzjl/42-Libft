#include "libft.h"


t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *res;
    t_list *new_node;
    t_list *prev_node;

    res = NULL;
    new_node = NULL;
    prev_node = NULL;
    (void)del;
    while (lst)
    {
        new_node = ft_lstnew(f(lst->content));
        if (!res)
            res = new_node;
        else
            prev_node->next = new_node;
        prev_node = new_node;
        lst = lst->next;
    }
    return (res);
}
