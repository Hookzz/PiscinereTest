#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *output;

	while (lst)
	{
		output = f(lst);
		output->next = ft_lstmap(lst->next, f);
		return (output);
	}
	return (NULL);
}