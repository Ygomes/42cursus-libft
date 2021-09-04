#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stddef.h>
#include <stdlib.h>
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
void *ft_memcpy(void *restrict dest, const void *restrict src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int	ft_toupper(int c);
int	ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char	*big, const char *little, size_t len);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int	ft_atoi(const char *nptr);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strdup(const char *s);
void	ft_bzero(void *s, size_t n);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	c;

	c = nb;
	a = 1;
	if (nb < 0)
	{
		c = c * -1;
		write (1, "-", 1);
	}
	while (a < c / 10)
	{
		a = a * 10;
	}
	while (a > 0)
	{
		b = c / a + 48;
		c = c % a;
		a = a / 10;
		write (1, &b, 1);
	}
}

void	teste(unsigned int i, char *s)
{
	ft_putchar(*s);
	ft_putchar('[');
	ft_putnbr(i);
	ft_putchar(']');
}
*/
int	main(void)
{


					//FT_ISALPHA
/*
    printf("%d is an alphabetic character.\n", ft_isalpha(65));
    printf("%d is an alphabetic character.\n", ft_isalpha(67));
    printf("%d is an alphabetic character.\n", ft_isalpha(90));
    printf("%d is an alphabetic character.\n", ft_isalpha(97));
    printf("%d is an alphabetic character.\n", ft_isalpha(100));
    printf("%d is an alphabetic character.\n", ft_isalpha(122));
    printf("%d is not an alphabetic character.\n", ft_isalpha(54));
    printf("%d is not an alphabetic character.\n", ft_isalpha(55));
    printf("%d is not an alphabetic character.\n", ft_isalpha(56));
    printf("%d is not an alphabetic character.\n", ft_isalpha(58));
    printf("%d is not an alphabetic character.\n", ft_isalpha(0));
    printf("%d is not an alphabetic character.\n", ft_isalpha(128));
    printf("%d is not an alphabetic character.\n", ft_isalpha(-10));
    printf("%d is not an alphabetic character.\n", ft_isalpha(200));
*/


					//FT_IFDIGIT
/*
    printf("%d is a numeric character.\n", ft_isdigit(48));
    printf("%d is a numeric character.\n", ft_isdigit(49));
    printf("%d is a numeric character.\n", ft_isdigit(50));
    printf("%d is a numeric character.\n", ft_isdigit(51));
    printf("%d is a numeric character.\n", ft_isdigit(52));
    printf("%d is a numeric character.\n", ft_isdigit(53));
    printf("%d is a numeric character.\n", ft_isdigit(54));
    printf("%d is a numeric character.\n", ft_isdigit(55));
    printf("%d is a numeric character.\n", ft_isdigit(56));
    printf("%d is not a numeric character.\n", ft_isdigit(58));
    printf("%d is not a numeric character.\n", ft_isdigit(0));
    printf("%d is not a numeric character.\n", ft_isdigit(128));
    printf("%d is not a numeric character.\n", ft_isdigit(-10));
    printf("%d is not a numeric character.\n", ft_isdigit(200));
*/


						//FT_ISALNUM

/*
    printf("%d is an alphanumeric character.\n", ft_isalnum(48));
    printf("%d is an alphanumeric character.\n", ft_isalnum(49));
    printf("%d is an alphanumeric character.\n", ft_isalnum(50));
    printf("%d is an alphanumeric character.\n", ft_isalnum(51));
    printf("%d is an alphanumeric character.\n", ft_isalnum(52));
    printf("%d is an alphanumeric character.\n", ft_isalnum(53));
    printf("%d is an alphanumeric character.\n", ft_isalnum(54));
    printf("%d is an alphanumeric character.\n", ft_isalnum(55));
    printf("%d is an alphanumeric character.\n", ft_isalnum(56));
    printf("%d is an alphanumeric character.\n", ft_isalnum(65));
    printf("%d is an alphanumeric character.\n", ft_isalnum(67));
    printf("%d is an alphanumeric character.\n", ft_isalnum(90));
    printf("%d is an alphanumeric character.\n", ft_isalnum(97));
    printf("%d is an alphanumeric character.\n", ft_isalnum(100));
    printf("%d is an alphanumeric character.\n", ft_isalnum(122));
    printf("%d is not an alphanumeric character.\n", ft_isalnum(58));
    printf("%d is not an alphanumeric character.\n", ft_isalnum(0));
    printf("%d is not an alphanumeric character.\n", ft_isalnum(128));
    printf("%d is not an alphanumeric character.\n", ft_isalnum(-10));
    printf("%d is not an alphanumeric character.\n", ft_isalnum(200));
*/


					//FT_ISASCII
/*
    printf("%d is an ascii character.| %d is an ascii character(ORIGINAL FUNCTION).\n", ft_isascii(48), isascii(48));
    printf("%d is an ascii character.\n", ft_isascii(49));
    printf("%d is an ascii character.\n", ft_isascii(50));
    printf("%d is an ascii character.\n", ft_isascii(51));
    printf("%d is an ascii character.\n", ft_isascii(52));
    printf("%d is an ascii character.\n", ft_isascii(53));
    printf("%d is an ascii character.\n", ft_isascii(54));
    printf("%d is an ascii character.\n", ft_isascii(55));
    printf("%d is an ascii character.\n", ft_isascii(56));
    printf("%d is an ascii character.\n", ft_isascii(58));
    printf("%d is an ascii character.| %d is an ascii character(ORIGINAL FUNCTION).\n", ft_isascii(0), isascii(0));
    printf("%d is not an ascii character.| %d is not an ascii character(ORIGINAL FUNCTION).\n", ft_isascii(128), isascii(128));
    printf("%d is not an ascii character.| %d is not an ascii character(ORIGINAL FUNCTION).\n", ft_isascii(-10), isascii(-10));
    printf("%d is not an ascii character.| %d is not an ascii character(ORIGINAL FUNCTION).\n", ft_isascii(200), isascii(200));
*/


							//FT_ISPRINT
/*
    printf("%d is not a printable character. | %d is not a printable character(ORIGINAL FUNCTION)\n", ft_isprint(31), isprint(31));
    printf("%d is a printable character. | %d is a printable character(ORIGINAL FUNCTION)\n", ft_isprint(32), isprint(32));
    printf("%d is not a printable character. | %d is not a printable character(ORIGINAL FUNCTION)\n", ft_isprint(127), isprint(127));
    printf("%d is not a printable character. | %d is not a printable character(ORIGINAL FUNCTION)\n", ft_isprint(133), isprint(133));
    printf("%d is not a printable character. | %d is not a printable character(ORIGINAL FUNCTION)\n", ft_isprint(128), isprint(128));
    printf("%d is not a printable character. | %d is not a printable character(ORIGINAL FUNCTION)\n", ft_isprint(5), isprint(5));
    printf("%d is a printable character. | %d is a printable character(ORIGINAL FUNCTION)\n", ft_isprint(54), isprint(54));
    printf("%d is a printable character. | %d is a printable character(ORIGINAL FUNCTION)\n", ft_isprint(55), isprint(55));
    printf("%d is a printable character. | %d is a printable character(ORIGINAL FUNCTION)\n", ft_isprint(56), isprint(56));
*/


							//FT_STRLEN
/*
	char *c = "testes";

	printf("%lu (ORIGINAL FUNCTION)\n", strlen(c));
	printf("%lu\n", ft_strlen(c));
*/


								//FT_MEMSET
/*
    char str[28] = "The original function result";
    printf("\nBefore memset(): %s\n", str);

    // Fill 8 characters starting from str[1] with '.'
    memset(str + 1, '.', 8);

    printf("After memset():  %s\n", str);

	char str2[28] = "The original function result";
    printf("\nBefore ft_memset(): %s\n", str2);

    // Fill 8 characters starting from str[1] with '.'
    ft_memset(str2 + 1, '.', 8);

    printf("After ft_memset():  %s\n", str2);
*/


					//FT_BZERO
/*
    char str[28] = "The original function result";
    printf("\nBefore bzero(): %s\n", str);

    // Fill 8 characters starting from str[1] with 0
    bzero(str + 1, 8);

    printf("After bzero():  %s\n", str);

	char str2[28] = "The original function result";
    printf("\nBefore ft_bzero(): %s\n", str2);

    // Fill 8 characters starting from str[1] with 0
    ft_bzero(str2 + 1, 8);

    printf("After ft_bzero():  %s\n", str2);
*/


					//FT_MEMCPY
/*
    char str[] = "teste a";
    printf("\nBefore memcpy(): %s\n", str);

    memcpy(str + 5,str, strlen(str));
    printf("After memcpy():  %s\n", str);

	char str2[] = "teste a";
    printf("\nBefore ft_memcpy(): %s\n", str2);

    ft_memcpy(str2 + 5,str2, strlen(str2));
    printf("After ft_memcpy():  %s\n", str2);
*/

								//FT_MEMMOVE


/*
	char str[28] = "this is a teste";
	char dest[28] = "";
    printf("\nBefore memmove(): %s\n", dest);

    memmove(dest,str, strlen(str));
    printf("After memmove():  %s\n", dest);

	char str2[28] = "this is a teste";
	char dest2[28] = "";
    printf("\nBefore ft_memmove(): %s\n", dest2);

    ft_memmove(dest2 ,str2, strlen(str2));
    printf("After ft_memmove():  %s\n", dest2);
*/

							//FT_STRLCPY

/*
	char c[] = "teste";
	char d[] = "";

	printf("\nBefore ft_strlcpy(): %s\n", d);
	ft_strlcpy(d,c,7);
	printf("\nAfter ft_strlcpy(): %s\n", d);
*/

					//FT_STRLCAT

/*
    char first[] = "This is ";
    char last[] = "a potentially long string";
    int r;
    int size = 64;
    char buffer[size];

    strcpy(buffer,first);
    r = ft_strlcat(buffer,last,size);

    puts(buffer);
    printf("Value returned: %d\n",r);
    if( r > size )
        puts("String truncated");
    else
        puts("String was fully concatenated");
*/

						//FT_TOUPPER

/*
	int b = 48;

	printf("%c(ORIGINAL FUNCTION)\n", toupper(b));
	printf("%c\n", ft_toupper(b));
*/

						//FT_TOLOWER

/*
	int b = 90;

	printf("%c (ORIGINAL FUNCTION)\n", tolower(b));
	printf("%c\n", ft_tolower(b));
*/

						//FT_STRCHR

/*
    char str[] = "56789313213";

	printf("%s\n", ft_strchr(str,'9'));
*/

						//FT_STRRCHR
/*
    char str[] = "56789313213";

	printf("%s\n", ft_strrchr(str,'1'));
*/

						//FT_STRNCMP
/*
	char str[] = "56798313213";
	char str2[] = "56789313213";

	printf("%d\n", ft_strncmp(str,str2,'1'));
*/

						//FT_MEMCHR

/*
	char  str[] = "Hello World";

	printf("%p\n", ft_memchr(str, 'd', 11));
	printf("%p\n", memchr(str, 'd', 11));
	printf("%p\n", ft_memchr(str, 'o', 11));
	printf("%p\n", memchr(str, 'o', 11));
	return 0;
*/

//FT_MEMCMP

/*
	char s1[] = "321314";
	char s2[] = "321414";
	printf("%d\n", ft_memcmp(s1, s2, 3));
	printf("%d (ORIGINAL FUNCTION)\n", memcmp(s1, s2, 3));
	printf("%d\n", ft_memcmp(s1, s2, 8));
	printf("%d (ORIGINAL FUNCTION)\n", memcmp(s1, s2, 8));
	return (0);
*/

				//FT_STRNSTR

/*
	char s1[30] = "This string is a test";

	char* ptr = ft_strnstr(s1, "str", 10);
	printf("%s\n", ptr);
	char* ptr1 = ft_strnstr(s1, "th", 2);
	printf("%s\n", ptr1);
*/

					//FT_ATOI

/*
	char str[]= "-4132asdb43da4s";

	printf("%d", ft_atoi(str));
*/

						//FT_CALLOC
/*

	int i, * ptr, sum = 0;
	ptr = ft_calloc(10, sizeof(int));
	if (ptr == NULL)
	{
		printf("Error! memory not allocated.");
		exit(0);
	}
	printf("Building and calculating the sequence sum of the first 10 terms \n");
	for (i = 0; i < 10; ++i)
	 {
		*(ptr + i) = i;
		sum += * (ptr + i);
	}
	printf("Sum = %d\n", sum);
	free(ptr);
*/

					//FT_STRDUP

/*
	char s[]= "testing";
	printf("%s\n", ft_strdup(s));
*/

					//FT_SUBSTR

/*
	char t[] = "www.42sp.org.br";
	printf("%s \n", ft_substr(t,5,10));
*/

						//FT_STRJOIN
/*
	char s1[] = "Hello ";
	char s2[] = "World!";
	printf("%s \n", ft_strjoin(s1,s2));
*/

						//FT_STRTRIM

/*
	char s1[] = "abcstringtestcba";
	char set[] = "abc";
	printf("%s \n",ft_strtrim(s1,set));
*/

						//FT_ITOA
/*
	int i = -2147483648;
	printf("%s\n", ft_itoa(i));
*/

					//FT_STRMAPI

/*
char	f(unsigned int i, char c)
{
	return (c - c + 48 + i);
}

{
	char str[] = "testingggggg";
	printf("%s\n", ft_strmapi(str,f));
}
*/

						//FT_STRITERI

/*
	printf("[ft_striteri]\n");
	char s50[50];
	strcpy(s50, "Testing");
	ft_striteri(s50, teste);//FT_STRITERI	ft_add_index
	printf("\n");
	printf("\n");
	printf("[expected]\n");
	printf("T[0]e[1]s[2]t[3]i[4]n[5]g[6]\n");


*/

						//FT_PUTCHAR_FD

/*
	printf("[ft_putchar_fd]\n");
	ft_putchar_fd('g', 1);//FT_PUTCHAR_FD
	printf("\n");
	printf("\n");
	printf("[expected]\n");
	printf("g\n");
	printf("-----------------------------------------------------------------------------\n");
*/

						//FT_PUTENDL_FD

/*
	printf("[ft_putendl_fd]\n");
	ft_putendl_fd("42saopaulo", 1);//FT_PUTENDL_FD
	printf("\n");
	printf("[expected]\n");
	printf("42saopaulo\n");
	printf("-----------------------------------------------------------------------------\n");
*/

						//FT_PUTNBR_FD

/*
	printf("[ft_putnbr_fd]\n");
	ft_putnbr_fd(-31416, 1);//FT_PUTNBR_FD
	printf("\n");
	printf("\n");
	printf("[expected]\n");
	printf("-31416\n");
	printf("-----------------------------------------------------------------------------\n");
*/

}

