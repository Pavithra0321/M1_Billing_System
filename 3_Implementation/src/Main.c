/**
 * @file Main.c
 * @author Pavithra M ()
 * @brief 
 * @version 0.1
 * @date 2022-03-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <string.h>
#include "Main.h"


void main()
{
	get_userdetails();
	int user_option;
	do
	{
		
		printf("Please SELECT Your Choice From Below Options:\n");
		printf("1. URBAN AREA\n");
		printf("2. RURAL AREA\n");
		printf("3. EXIT\n");

		printf("Now Enter Your Choice :\n");
		scanf("%d", &user_option);
		system("clr");
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
			exit(0);
		}
		getch();
	} while (user_option == 3);

}
