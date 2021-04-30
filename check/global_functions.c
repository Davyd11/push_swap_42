/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   global_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 09:06:29 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/30 11:07:24 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*void	print_stack(t_input_list *input_list)
{
	t_stack_n	*current_a;
	t_stack_n	*current_b;
	int			na;
	int			nb;
	int			loops;

	current_a = input_list->a;
	current_b = input_list->b;
	na = n_nodes(input_list->a);
	nb = n_nodes(input_list->b);
	loops = 0;
	printf("\n  A\t  B\n-----\t-----\n");
	while (current_a != NULL || current_b != NULL)
	{
		if (loops < na)
		{
			printf("%d", current_a->val);
			current_a = current_a->next;
		}
		if (loops < nb)
		{
			printf("\t%d", current_b->val);
			current_b = current_b->next;
		}
		printf("\n");
		loops++;
	}
	printf("-----\t-----\n");
}*/

t_stack_n	*list_in(t_stack_n *head, t_input_list *input_list)
{
	t_stack_n	*tmp;
	int			n;

	n = 0;
	tmp = create_new_node(input_list->number_list[n]);
	head = tmp;
	tmp->prev = NULL;
	n++;
	while (n < input_list->n_numbers)
	{
		tmp->next = create_new_node(input_list->number_list[n]);
		tmp = tmp->next;
		n++;
	}
	return (head);
}

t_stack_n	*find_node(t_stack_n *head, int number)
{
	t_stack_n	*tmp;

	tmp = head;
	while (tmp != NULL)
	{
		if (tmp->val == number)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}

t_stack_n	*position_node(t_stack_n *head, int position)
{
	t_stack_n	*tmp;
	int			count;

	tmp = head;
	count = 1;
	while (count < position && tmp != NULL)
	{
		count++;
		tmp = tmp->next;
	}
	return (tmp);
}
