/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbethany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 21:04:59 by nbethany          #+#    #+#             */
/*   Updated: 2019/01/13 21:05:16 by nbethany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *snew;
    size_t len;
    
    len = ft_strlen(s1) + ft_strlen(s2);
    snew = (char *) malloc (sizeof(*snew) * (len + 1));
    
    if (!snew || !s1 || !s2)
        return (NULL);
    
    ft_strcpy(snew,s1);
    ft_strcat(snew,s2);
    return (snew);

}
