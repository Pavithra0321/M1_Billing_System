/**
 * @file Main.c
 * @author Pavithra M
 * @brief  Getting inputs from user
 * @version 0.1
 * @date 2022-02-11
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <Windows.h>
#include "inc/Main.h"
#include "inc/Bill_func.h"
#include"Bill_func.c"

void Urban_Area();
void Rural_Area();
void get_userdetails();
void main()
{
	get_userdetails();
	int user_option;
	do
	{
		printf("\t\t\t\t\t\t**WELCOME TO ELECTRICITY BILLING GENERATOR**\n");
		printf("Please SELECT Your Choice From Below Options:\n");
		printf("1. URBAN AREA\n");
		printf("2. RURAL AREA\n");
		printf("3. EXIT\n");

		printf("Now Enter Your Choice :\n");
		scanf("%d", &user_option);
		system("cls");
		switch (user_option)
		{
		case 1:
			Urban_Area();
			printf("\n\n\t\t\t\t****Thank you****\n\n");
            break;
		case 2:
			Rural_Area();
			printf("\n\n\t\t\t\t****Thank you****\n\n");
			break;
        case 3:
			printf("\n\n\t\t\t\t****Thank you****\n\n");
			break;
		default:
			printf("SORRY INVALID CHOICE!!!\n");
			printf("PLEASE CHOOSE FROM 1 or 2\n");
		}
		getch();
	} while (user_option == 3);
}
