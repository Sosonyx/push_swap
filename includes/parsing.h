/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihadj <ihadj@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:36:33 by ihadj             #+#    #+#             */
/*   Updated: 2025/05/26 17:36:41 by ihadj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
# define PARSING_H

# include "structures.h"

int			check_if_args_are_numbers(int ac, char **av);
int			check_if_no_duplicate(t_node *lst);
int			is_valid_number(char *str);
long long	ft_aatoi(const char *nptr);

#endif