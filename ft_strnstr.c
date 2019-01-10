/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbethany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 20:09:08 by nbethany          #+#    #+#             */
/*   Updated: 2019/01/10 20:09:32 by nbethany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;
    
    if (!needle[0])
        return ((char *)haystack);
    i = 0;
    while (haystack[i] && i < len)
    {
        if (haystack[i] == needle[0])
        {
            j = 1;
            while (needle[j] && haystack[j + i] == needle[j] && (i + j < len))
                j++;
            if (needle[j] == '\0')
                return ((char *) &haystack[i]);
        }
        i++;
    }
    return NULL;
}
