/**
  ******************************************************************************
  * @file    Array.h
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

#ifndef ARRAY_H_
#define ARRAY_H_

/* Includes ------------------------------------------------------------------*/

/* Exported types ------------------------------------------------------------*/
/**
  * @brief Array Status
  */
typedef enum
{
	ARRAY_OK = 0,
	ARRAY_ERROR
}ARRAY_Status;

/* Exported constants --------------------------------------------------------*/

/* Exported macro ------------------------------------------------------------*/
/* Exported functions --------------------------------------------------------*/
ARRAY_Status ARRAY_Display_Values(int Array[], int Length);



#endif /* ARRAY_H_ */
