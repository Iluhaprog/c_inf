#include <stdio.h>

#define SIZE 100
#define NAME_SIZE 50

void main()
    {
    /*
    Упражнение 8 (fio_08d). Использование #define.
    Аналогично упражнению 7 и на базе его исходника, но  размерность массива
    структур определена с использованием #define.
    */    
    struct material
        {
        char name[NAME_SIZE];
        int price;
        int size;
        int total;
        };

    int i = 0;

    struct material price_list[SIZE];

    while (i < SIZE)
        {
        printf("\nВведите название материала: ");
        scanf("%s", price_list[i].name);

        if (price_list[i].name[0] == '*')
            {
            break;
            }

        printf("Введите цену материала: ");
        scanf("%d", &price_list[i].price);

        printf("Введите количесво: ");
        scanf("%d", &price_list[i].size);

        price_list[i].total = price_list[i].price * price_list[i].size;

        i++;
        }

    i = 0;

    while(i < SIZE && price_list[i].name[0] != '*') 
        {
        printf("\n\nНазвание: %s \n", price_list[i].name);
        printf("Цена: %d \n", price_list[i].price);
        printf("Количество: %d \n", price_list[i].size);
        printf("Стоимость: %d \n", price_list[i].total);
        i++;
        }

    printf("\n\nВведи любую цифру: ");
    int x;
    scanf("%d", &x);
    }