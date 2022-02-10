/**
 * @file MainElectricityBill.c
 * @author Pavithra M
 * @brief 
 * 
 * @version 0.1
 * @date 2022-02-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <Windows.h>
#include "MainElectricityBill.h"
#include "ElectricityBill.c"
void Urban();
void Rural();
//void details();
void main()
{ 
	details();
	int option;
	do
	{
		printf("****Electricity Bill****\n");
		printf("Please enter your choice from below (1-2):\n");
		printf("1. Urban\n");
		printf("2. Rural\n");
		printf("3. EXIT\n");
		printf("Electricity Board Helpline: 8435 2340\n");
		printf("Enter your choice :\n");
		scanf("%d", &option);
		system("cls");
		switch (option)
		{
			case 1:
			Urban();

            printf("\n\n*******Thank you******\n\n");
            break;
		case 2:
			Rural();
			printf("\n\n*******Thank you******\n\n");

			break;
        case 3:
			printf("\n*******Thank you******\n");
			break;default:
			printf("SORRY INVALID CHOICE!\n");
			printf("PLEASE CHOOSE FROM 1 or 2\n");
		}
		getch();
	} while (option == 3);
}