/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbethany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 17:16:38 by nbethany          #+#    #+#             */
/*   Updated: 2018/12/11 17:27:00 by nbethany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main()
{
    char str1[] = "lel";
    char str2[] = "";
    printf("------------ft_strlen for \"lel\"----------\n");
	printf("%lu\n",strlen(str1));
    printf("------------ft_strlen for \"\"----------\n");
    printf("%lu\n",strlen(str2));
    
    printf("------------ft_strdup for \"lel\"----------\n");
    printf("%s\n",ft_strdup(str1));
    printf("------------ft_strdup for \"\"----------\n");
    printf("%s\n",ft_strdup(str2));
    
    char csrc[] = "leliki";
    char cdest[20];
    ft_memcpy(cdest, csrc, strlen(csrc) + 1);
    printf("------------ft_memcpy for \"leliki\"----------\n");
    printf("Copied string is %s\n", cdest);
    
    printf("------------ft_memset for (\"hello\", 'a', 5)----------\n");
    char *str;
    str = ft_strdup("hello");
    ft_memset(str, 'a', 5);
    printf("%s\n", str);
    
    printf("------------ft_memset for (\"hello\", 'b', 3)----------\n");
    char *strstr;
    strstr = ft_strdup("hello");
    ft_memset(strstr, 'b', 3);
    printf("%s\n", strstr);
    
    printf("------------memset for (\"hello\", 'b', 3)----------\n");
    char *strstr1;
    strstr1 = ft_strdup("hello");
    memset(strstr1, 'b', 3);
    printf("%s\n", strstr1);
    
    printf("------------ft_bzero for (\"hello\", 2)----------\n");
    char *strstrstr;
    strstrstr = ft_strdup("hello");
    ft_bzero(strstrstr, 2);
    printf("%s\n", strstrstr);
    printf("------------bzero for (\"hello\", 2)----------\n");
    char *strstrstr1;
    strstrstr1 = ft_strdup("hello");
    bzero(strstrstr1, 2);
    printf("%s\n", strstrstr1);
    
	return (0);
}
