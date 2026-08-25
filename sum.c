#include <stdio.h>
int main(void)

{
int max;
max = 10;

int total;
total = 0;

for(int i = 1; i <= 10; i++) {

total += i;

}

printf("Сумма всех чисел от 1 до 10 равна %d.\n", total);

return (0);
}
