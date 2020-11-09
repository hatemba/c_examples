/**
  ******************************************************************************
  * @file    Array.c
  * @author  Hatem Ben Ayed
  * @version V0.1.0
  * @date    9-11-2020
  * @brief   This sample library provide Array manipulation functions.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT 2020 Hatem Ben Ayed </center></h2>
  *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 *
 ******************************************************************************
*/


/* ==================================================================== */
/* ========================== include files =========================== */
/* ==================================================================== */

#include "stdlib.h"
#include "stdio.h"
#include "Array.h"

/* Inclusion of system and local header files goes here */



/* ==================================================================== */
/* ============================ constants ============================= */
/* ==================================================================== */

/* #define and enum statements go here */



/* ==================================================================== */
/* ======================== global variables ========================== */
/* ==================================================================== */

/* Global variables definitions go here */



/* ==================================================================== */
/* ============================== data ================================ */
/* ==================================================================== */

/* Definition of datatypes go here */



/* ==================================================================== */
/* ==================== function prototypes =========================== */
/* ==================================================================== */

/* Function prototypes for public (external) functions go here */




/* ==================================================================== */
/* ============================ functions ============================= */
/* ==================================================================== */

/**
  * @brief  Display Array values.
  *
  * @note   All value are in Int values.
  *
  * @param  Array: The Array to display values.
  *
  *
  * @param  Length: Legnth of the Array.
  *
  * @retval ARRAY_Status: The returned value can be: ARRAY_OK, ARRAY_ERROR.
  */

ARRAY_Status ARRAY_Display_Values(int Array[], int Length)
{
	// Loop to display the array values
	for(int i=0; i<Length; i++)
	{
		printf("Array[%d]=%d \n",i,Array[i]);
	}
	return ARRAY_OK;
}
