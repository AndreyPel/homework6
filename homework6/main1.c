#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int main(void)
{
    int n;

    setlocale(LC_ALL, "RUS");

    printf("Введите число от 1 до 99: ");
    scanf("%d", &n);

    if (n % 10 == 1 && n != 11) {
        printf("%d копейка\n", n);
    }
    else if ((n % 10 == 2 || n % 10 == 3 || n % 10 == 4)
        && n != 12 && n != 13 && n != 14) {
        printf("%d копейки\n", n);
    }
    else {
        printf("%d копеек\n", n);
    }

}
