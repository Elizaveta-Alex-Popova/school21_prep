#include <stdio.h>

int ft_max(int a, int b) {
return (a > b? a : b);
}

int main(void)
{
    printf("Из чисел 8 и 12 большее: %d\n", ft_max(8, 12));
    return (0);
}


