//
//  main.c
//  Homework2
//
//  Created by Maxim Tolstikov on 30/01/2019.
//  Copyright © 2019 Maxim Tolstikov. All rights reserved.
//

#include <stdio.h>
#include "math.h"

void solution1(void);
void solution2(void);
void menu(void);

void devision(int in);
int raiseToPower(int num, int pow);


//1. Реализовать перевод чисел из десятичной системы в двоичную. Используя рекурсию.
void solution1(void)
{
    int input;
    
    printf("Enter any integer number: ");
    scanf("%d", &input);
    
    devision(input);
    
    printf("\n");
}

// не смог придумать как средствами языка сформировать переменную двоичного числа
void devision(int in)
{
    if (in < 2 ){
        printf("Result: %d\n", in % 2);
    }
    else {
        printf("Result: %d\n", in % 2);
        devision(in / 2);
    }
}


//2. Реализовать возведение в степень числа.
void solution2()
{
    int number, power, result = 1;
    
    printf("Enter any integer number: ");
    scanf("%d", &number);
    printf("Enter any power: ");
    scanf("%d", &power);
    
    // a) без рекурсии.
    for (int i = 0; i < power; i ++) {
        result *= number;
    }
    
    printf("Result A : %d\n", result);
    printf("4^5: %f\n", pow(4,5));
    
    // b) рекурсионно
    printf("Result B : %d\n", raiseToPower(number, power));
    
}

int raiseToPower(int num, int pow)
{
    if (pow < 1) return 1;
    else return num * raiseToPower(num, pow - 1);
}


// Главная функция
int main(int argc, const char * argv[])
{
    int sel = 0;
    do
    {
        menu();
        scanf("%i", &sel);
        switch (sel) {
            case 1:
                solution1();
                break;
            case 2:
                solution2();
                break;
            case 0:
                printf("Bye-bye!");
                break;
            default:
                printf("Wrong selected!");
                break;
        }
    } while (sel != 0);
    return 0;
}

void menu()
{
    printf("1 - task1\n");
    printf("2 - task2\n");
    printf(" \n");
}
