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

/**
  * @brief  Display Array values in one line.
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

ARRAY_Status ARRAY_Display(int Array[], int Length)
{
	// Loop to display the array values
	printf("Array: %d",Array[0]);
	for(int i=1; i<Length; i++)
	{
		printf(", %d",Array[i]);
	}
	printf(".\n");
	return ARRAY_OK;
}





/**
  * @brief  Invert Array values.
  *
  * @note   All value are in Int values.
  *
  * @param  Array: The Array to invert .
  *
  *
  * @param  Length: Legnth of the Array.
  *
  * @retval ARRAY_Status: The returned value can be: ARRAY_OK, ARRAY_ERROR.
  */
ARRAY_Status ARRAY_Invert(int Array[], int Length)
{
	// Temporary value for invert
	int tmp;
	for(int i=0; i<(Length/2);i++)
	{
		tmp=Array[i];
		printf("[%s] i=%d  - Length=%d -- Tmp=%d \n",__FUNCTION__,i,Length,tmp);
		Array[i]=Array[Length-i-1];
		Array[Length-i-1]=tmp;
	}
	return ARRAY_OK;
}



/**
  * @brief  Rotate Array values to right.
  *
  * @note   All value are in Int values.
  *
  * @param  Array: The Array to rotate.
  *
  * @param  Length: Length of the Array.
  *
  * @param  Nb_Shift: Number of Shift must be less than Length
  *
  * @retval ARRAY_Status: The returned value can be: ARRAY_OK, ARRAY_ERROR.
  */
ARRAY_Status ARRAY_RightRotate(int Array[], int Length, int NB_Shift)
{
	if(NB_Shift >= Length) return ARRAY_ERROR;

	// Repeat Array Rotate NB_shift
	for(int i=0;i<NB_Shift;i++)
	{
		//printf("[%s] ++++++++++++++ Rotation number i=%d +++++++++++\n",__FUNCTION__,i);
		// Temporary value to save the last Array value to rotate in the first position
		int tmp=Array[Length-1];
		//printf("[%s] tmp=%d \n",__FUNCTION__,tmp);

		// Copy all Array[i]=Array[i-1]
		for(int j=Length-1; j>=1;j--)
		{
			//printf("[%s] j=%d Copy Array[%d]=%d   in Array[%d]  \n",__FUNCTION__,j,j-1,Array[j-1],Array[j]);
			Array[j]=Array[j-1];
		}
		// Copy the temporary value for Array[0]
		//printf("[%s] Copy tmp=%d in Array[0]  \n",__FUNCTION__,tmp);
		Array[0]=tmp;
		//printf("[%s] Result Rotate Nb=%d : ",__FUNCTION__,i);
		//ARRAY_Display(Array,Length);
	}
	return ARRAY_OK;
}

/**
  * @brief  Rotate Array values to Left.
  *
  * @note   All value are in Int values.
  *
  * @param  Array: The Array to rotate.
  *
  * @param  Length: Length of the Array.
  *
  * @param  Nb_Shift: Number of Shift must be less than Length
  *
  * @retval ARRAY_Status: The returned value can be: ARRAY_OK, ARRAY_ERROR.
  */
ARRAY_Status ARRAY_LeftRotate(int Array[], int Length, int NB_Shift)
{
	if(NB_Shift >= Length) return ARRAY_ERROR;

	// Repeat Array Rotate NB_shift
	for(int i=0;i<NB_Shift;i++)
	{
		//printf("[%s] ++++++++++++++ Rotation number i=%d +++++++++++\n",__FUNCTION__,i);
		// Temporary value to save the first value to rotate in the last position
		int tmp=Array[0];
		//printf("[%s] tmp=%d \n",__FUNCTION__,tmp);

		// Copy all Array[i]=Array[i-1]
		for(int j=0; j<Length-1;j++)
		{
			//printf("[%s] j=%d Copy Array[%d]=%d   in Array[%d]  \n",__FUNCTION__,j,j-1,Array[j-1],Array[j]);
			Array[j]=Array[j+1];
		}
		// Copy the temporary value for Array[0]
		//printf("[%s] Copy tmp=%d in Array[0]  \n",__FUNCTION__,tmp);
		Array[Length-1]=tmp;
		//printf("[%s] Result Rotate Nb=%d : ",__FUNCTION__,i);
		//ARRAY_Display(Array,Length);
	}
	return ARRAY_OK;
}
