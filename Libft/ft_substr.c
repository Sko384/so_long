/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmiyosh <shmiyosh@student.42tokyo.jp>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-07 03:30:39 by shmiyosh          #+#    #+#             */
/*   Updated: 2025-05-07 03:30:39 by shmiyosh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*array;

	i = 0;
	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len <= start || !len)
		return (ft_strdup(""));
	else if (s_len < start + len)
		len = s_len - start;
	array = (char *)malloc(sizeof(char) * (len + 1));
	if (!array)
		return (NULL);
	while (i < len)
	{
		array[i] = s[start];
		i++;
		start++;
	}
	array[i] = '\0';
	return (array);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char			s[] = "hello world";
// 	unsigned int	start;
// 	size_t			len;
// 	char			*array;

// 	start = 7;
// 	len = 5;
// 	array = ft_substr(s, start, len);
// 	if (!array)
// 		return (1);
// 	printf("%s\n", array);
// 	free(array);
// 	return (0);
// }
// #include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

// int    main(void)
// {
//     char    *str;
//     char    *boom1;
//     char    *boom2;
//     char    *boom3;
//     char    *boom4;

//     str = "helloworld";
//     // 1. 範囲外アクセス → Segfault狙い
//     boom1 = ft_substr(str, 100, 5);
//     printf("boom1: %s\n", boom1); // 未定義領域読む → 死ぬ可能性あり
//     free(boom1);                  // NULLをfreeすると未定義動作
//     // 2. len長くしすぎて過剰読み取り
//     boom2 = ft_substr(str, 5, 1000);
//     printf("boom2: %s\n", boom2); // ゴミ or Segfault
//     free(boom2);
//     // 3. NULL文字列を渡して確定クラッシュ:fire:
//     boom3 = ft_substr(NULL, 0, 5);
//     printf("boom3: %s\n", boom3); // ft_substrがNULLチェックしてなければ即死
//     free(boom3);
//     // 4. ft_substrがNULL返してきたのに比較して爆死
//     boom4 = ft_substr(str, 5000, 5);
//     if (boom4 && boom4[0] == 'X') // NULLポインタにアクセス
//         printf("boom4 hit!\n");
//     free(boom4);
//     return (0);
// }
