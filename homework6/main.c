#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>


int main(void)
{
    int n;

    setlocale(LC_ALL, "RUS");

    printf("Введите число от 1 до 99: ");
    scanf("%d", &n);


    int key = (n % 100 > 20) ? n % 10 : n % 100;

    switch (key) {
    case 1:
        printf("%d копейка\n", n);
        break;
    case 2: case 3: case 4:
        printf("%d копейки\n", n);
        break;
    default:
        printf("%d копеек\n", n);
        break;
    }
}
