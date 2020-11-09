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
	int l=10;
	int T[l];
	ARRAY_Status Status;


	for(int i=0;i<l;i++)
	{
		T[i]=i*10;
	}

	Status = ARRAY_Display_Values(T,l);

	if (Status)
	{
		puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	}
	return EXIT_SUCCESS;
}
