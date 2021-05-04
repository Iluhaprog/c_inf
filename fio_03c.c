#include <stdio.h>

#define NAME_SIZE 100

void main()
    {
    /*
    Упражнение 3 (fio_03c). Работа в цикле
    Вышеуказанные переменные вводить с консоли и выволить на консоль пока
    не будет введена в названии материала первая *

    mt_ - префикс материала
    tt_ - префикс total
    */
    while (1)
        {
        printf("\nВведите название материала: ");
        char mt_name[NAME_SIZE];
        scanf("%s", mt_name);

        if (mt_name[0] == '*')
            {
            break;
            }

        printf("Введите название цену материала: ");
        int mt_price;
        scanf("%d", &mt_price);

        printf("Введите количесво: ");
        int mt_size;
        scanf("%d", &mt_size);

        int tt_price = mt_price * mt_size;

        printf("\n\nНазвание: %s \n", mt_name);
        printf("Цена: %d \n", mt_price);
        printf("Количество: %d \n", mt_size);
        printf("Стоимость: %d \n", tt_price);

        }
    printf("\n\nВведи любую цифру: ");
    int x;
    scanf("%d", &x);
    }