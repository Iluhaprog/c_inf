#include <stdio.h>

#define NAME_SIZE 100

void main()
    {
    /*
    Упражнение 2 (fio_02op). Объявление переменных
     Из исходника упражнения 1  сделать исходный файл где:
    - объявить переменные "название материала", "цена", "количество","стоимость"
    - ввести "название материала", "цена", "количество" с консоли после подсказки
    - рассчитать "стоимость"
    - вывести на консоль "название материала", "цена", "количество","стоимость"
    - поставить в конце программы "Введи любую цифру" для того чтобы не выходить
    на экран пользователя для проверки результата

    mt_ - префикс материала
    tt_ - префикс total
    */
    printf("\nВведите название материала: ");
    char mt_name[NAME_SIZE];
    scanf("%s", mt_name);

    printf("Введите цену материала: ");
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

    printf("\n\nВведи любую цифру: ");
    int x;
    scanf("%d", &x);
    }