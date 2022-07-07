#include <stdio.h>
#include <libc.h>
#include <ctype.h>

int     ft_isalpha(int c);

int main(void)
{
    // isalpha
    int c = 65;
    printf("%s", "******isalpha**********\n");
    printf("%s %d\n", "ft_isalpha", ft_isalpha(c));
    printf("%s %d\n", "isalpha", isalpha(c));
}