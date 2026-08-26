#include <stdio.h>

void ft_is_plus(int n) {
    if(n < 0) {
        printf("N\n");
    } else {
        printf("P\n");
    }
}
int main(void) {
    ft_is_plus(5);
    ft_is_plus(-15);
    ft_is_plus(0);
    return(0);
}
