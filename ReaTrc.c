/*
 * ReaTrc.c
 *
 *  Created on: Nov 16, 2023
 *      Author: gleeman
 */

#include "motor.h"

void goForward()
{
	Speed(70, 70);
}
void turnLeft_1()
{
	Speed(68, 75);// turn Left 1
}
void turnLeft_2()
{
	Speed(65, 75);
}
void turnLeft_MAX()
{
	Speed(0, 75);
}
void turnRight_1()
{
	Speed(75,68);// turn Left 1
}
void turnRight_2()
{
	Speed(75, 62);
}
void turnRight_MAX()
{
	Speed(75, 0);
}

void left_zhijiao()
{
	Speed(-20, 60);
}

void ruijiao()
{
	Speed(-10, 60);
}

