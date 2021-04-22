/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 11:21:08 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/22 13:54:46 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	media(t_input_list *input_list, stack_n *head)
{
	stack_n *tmp;
	int media;
	
	media = 0;
	tmp = head;
	if (n_nodes(head) <= 1)
		return (0);
	while (tmp != NULL)
	{
		media = media + tmp->val;
		tmp = tmp->next;
	}
	media = media / input_list->n_numbers;
	return(media);
}
void	divide_f(t_input_list *input_list)
{
	int n;

	n = 0;
	while (n < input_list->n_numbers)
	{
		if (input_list->a->val > input_list->media_a)
			pb(input_list);
		else
			ra(input_list);
		n++;
	}
}

void	division(t_input_list *input_list)
{
	printf("%d\n", input_list->media_a);//borrar y continuar por aqui
}

int	main (int argc, char ** argv)
{
	t_input_list	input_list;

	input_list.a = NULL;
	input_list.b = NULL;
	
	check_arg(argc, argv, &input_list);
	input_list.a = list_in(input_list.a, &input_list);		//retornar la posicion mamahuevo por eso hay que guardarlo en head
	//input_list.b = list_in_b(input_list.b, &input_list);
	input_list.media_a = media(&input_list, input_list.a);
	divide_f(&input_list);
	division(&input_list);
	print_stack(&input_list);
	//printf("%d", input_list.media_a);
	

	/////////////////////////////////
	//printf("\n\n\n\n-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/\n\n\n\n");
	//system("leaks checker");
	/////////////////////////////////
	return (0);
}