/**
 * @file Bill_func.c
 * @author Pavithra M
 * @brief  Calculating power bill according to conditions(area,unit)
 * @version 0.1
 * @date 2022-02-11
 *
 * @copyright Copyright (c) 2022
 *
 */

#include<stdio.h>
#include<stdlib.h>
#include<curses.h>
#include<string.h>
#include"Main.h"



void get_userdetails()
{
    printf("\t\t\t**WELCOME TO ELECTRICITY BILLING GENERATOR**\n");
    printf("AREA NAME:\n");
	scanf("%s",EB.area);
	printf("REGISTERED PERSON NAME:\n");
	scanf("%s",EB.name);
	printf("METER NUMBER:\n");
	scanf("%d", &EB.meternumber);
    printf("UNITS CONSUMED:\n");
	scanf("%d",&EB.unitsconsumed);
    printf("LINKED EMAIL ID:\n");
    scanf("%s",EB.email);
    printf("PERMANENT ADDRESS:\n");
    scanf("%s",EB.address);
    printf("PHONE NUMBER : \n");
    scanf("%d", &EB.phonenumber);
}

void Urban_Area()
{
    int amount=0;
    EB.unitsconsumed;
    if(EB.unitsconsumed <=30 && EB.unitsconsumed >= 0)
    {
        amount = EB.unitsconsumed * 3.25; //3.25 is rupees
    }
    else if(EB.unitsconsumed >= 31 && EB.unitsconsumed <= 100)
    {
        amount = EB.unitsconsumed * 4.70;
    }
    else if(EB.unitsconsumed >= 101 && EB.unitsconsumed <= 200)
    {
        amount = EB.unitsconsumed * 6.25;
    }
    else
    {
        amount = EB.unitsconsumed * 7.30;
    }

    printf("\t\t----------GENERATING ELECTRICITY BILL----------\n\n");
    printf("Name                            :%s\n",EB.name);
    printf("AREA                            :%s\n",EB.area);
    printf("Units you consumed this month   : %d\n",EB.unitsconsumed);
    printf("In Urban, your electricity bill : %d\n",amount);
    printf("ELECTRICITY BOARD HEPLINE       : 8435 2340\n");
}

void Rural_Area()
{
    int amount=0;
    EB.unitsconsumed;
    if(EB.unitsconsumed <=30 && EB.unitsconsumed >= 0)
    {
        amount = EB.unitsconsumed * 3.15; //3.25 is rupees
    }
    else if(EB.unitsconsumed >= 31 && EB.unitsconsumed <= 100)
    {
        amount = EB.unitsconsumed * 4.40;
    }
    else if(EB.unitsconsumed >= 101 && EB.unitsconsumed <= 200)
    {
        amount = EB.unitsconsumed * 5.95;
    }
    else
    {
        amount = EB.unitsconsumed * 6.80;
    }
    printf("\t\t----------GENERATING ELECTRICITY BILL----------\n\n");
    printf("Name                            : %s\n",EB.name);
    printf("AREA                            :%s\n",EB.area);
    printf("Units you consumed this month   : %d\n",EB.unitsconsumed);
    printf("In Rural, your electricity bill : %d\n",amount);
    printf("ELECTRICITY BOARD HEPLINE       : 8435 2340\n");
}
