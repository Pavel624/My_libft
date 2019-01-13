/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbethany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 21:43:22 by nbethany          #+#    #+#             */
/*   Updated: 2019/01/13 21:43:43 by nbethany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_strsplit(char const *s, char c)
{
    char **split;
    size_t i;
    size_t j;
    size_t len;
    
    len = ft_count_words(s,c);
    split = (char **) ft_memalloc(sizeof(*split) * (ft_count_words(s,c) + 1));
    
    if (!s || !c || !split)
        return (NULL);
    
    i = 0;
    j = 0;
    
    while (s[i])
    {
         if (s[i] == c)
            i++;
         else
         {
            len = 0;
            while (s[i + len] && (s[i + len] != c))
                len++;
            split[j] = ft_strsub(s, i, len);
             j++;
            i = i + len;
         }
    }
    split[j] = 0;
    
    return (split);
}
