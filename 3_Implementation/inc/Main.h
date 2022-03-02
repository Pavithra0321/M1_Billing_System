
/**
 * @file Main.h
 * @author Pavithra M
 * @brief  naming and declaring multi datatype variables using structure 
 * @version 0.1
 * @date 2022-02-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef __Main_H__
#define __Main_H__

#include<stdio.h>
#include<stdlib.h>
#include<curses.h>
#include<string.h>

struct ElectricityBill
{
	char area[6];
	char name[15];
	int meternumber;
    int unitsconsumed;
	char email[15];
	char address[100];
	int phonenumber[10];
};
void Urban_Area();
void Rural_Area();
void get_userdetails();

struct ElectricityBill EB;
#endif