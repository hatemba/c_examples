/*
 ============================================================================
 Name        : Condition.c
 Author      : Haten Ben Ayed
 Version     :
 Copyright   : Apache License 2.0
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Array.h"

int main(void) {
	int l=11;
	int T[l];
	ARRAY_Status Status;


	for(int i=0;i<l;i++)
	{
		T[i]=i*10;
	}

	// Display Array
	Status = ARRAY_Display(T,l);

	// Invert Array
	Status = ARRAY_Invert(T,l);

	// Display Array
	Status = ARRAY_Display(T,l);

	printf(" -------------- 3 times Rotation Right ------------ \n");
	// 3 times rotation
	Status = ARRAY_RightRotate(T,l,3);

	// Display Array
	Status = ARRAY_Display(T,l);


	printf(" -------------- 2 times Rotation Left ------------ \n");
	// 3 times rotation
	Status = ARRAY_LeftRotate(T,l,2);

	// Display Array
	Status = ARRAY_Display(T,l);

	if (Status)
	{
		puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	}
	return EXIT_SUCCESS;
}
