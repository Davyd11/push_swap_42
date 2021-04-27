/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_utils1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 11:20:09 by dpuente-          #+#    #+#             */
/*   Updated: 2021/04/27 11:09:26 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	media(t_input_list *input_list, stack_n *head){
	stack_n *tmp;
	int media;
	
	media = 0;
	tmp = head;
	input_list->n_numbers = input_list->n_numbers;
	if (n_nodes(head) <= 1)
		return (0);
	while (tmp != NULL){
		media = media + tmp->val;
		tmp = tmp->next;
	}
	media = media / n_nodes(head);
	return(media);
}
int	how_much(t_input_list *input_list, int media_botton, int media_top){
	stack_n *tmp;
	int n;
	
	n = 0;
	tmp = input_list->a;
	while (tmp != NULL){
		if (tmp->val <= media_top && tmp->val >= media_botton)
			n++;
		tmp = tmp->next;
	}
	return (n);
}

void	divide_to_b(t_input_list *input_list, int media_botton, int media_top){
	int n;
	int x;
	int nodos;
	int n_moves_max;

	n = 0;
	x = 0;
	nodos = n_nodes(input_list->a);
	n_moves_max = how_much(input_list, media_botton, media_top);
	while (n < nodos && x < n_moves_max){
		if (input_list->a->val <= media_top && input_list->a->val >= media_botton){
			pb(input_list);
			x++;
		}
		else {
			ra(input_list, 1);
		}
		n++;
	}
}

int	greater(stack_n *head){
	stack_n *tmp;
	int posicion;
	int n;
	
	tmp = head;
	posicion = 1;
	n = 1;
	while (tmp->next != NULL){	
		n++;
		if (position_node(head, posicion)->val < tmp->next->val){
			posicion = n;
		}
		tmp = tmp->next;
	}
	//printf("El mayor es :--%d--\n", posicion);
	return (posicion);
}

int	smaller(stack_n *head){
	stack_n *tmp;
	int posicion;
	int n;
	
	tmp = head;
	posicion = 1;
	n = 1;
	while (tmp->next != NULL){	
		n++;
		if (position_node(head, posicion)->val > tmp->next->val){
			posicion = n;
		}
		tmp = tmp->next;
	}
	return (posicion);
	//printf("El mayor es :--%d--\n", posicion);
}