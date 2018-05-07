/**************************************************************************************************
*                                                                                                 *
* This file is part of BLASFEO.                                                                   *
*                                                                                                 *
* BLASFEO -- BLAS For Embedded Optimization.                                                      *
* Copyright (C) 2016-2017 by Gianluca Frison.                                                     *
* Developed at IMTEK (University of Freiburg) under the supervision of Moritz Diehl.              *
* All rights reserved.                                                                            *
*                                                                                                 *
* HPMPC is free software; you can redistribute it and/or                                          *
* modify it under the terms of the GNU Lesser General Public                                      *
* License as published by the Free Software Foundation; either                                    *
* version 2.1 of the License, or (at your option) any later version.                              *
*                                                                                                 *
* HPMPC is distributed in the hope that it will be useful,                                        *
* but WITHOUT ANY WARRANTY; without even the implied warranty of                                  *
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.                                            *
* See the GNU Lesser General Public License for more details.                                     *
*                                                                                                 *
* You should have received a copy of the GNU Lesser General Public                                *
* License along with HPMPC; if not, write to the Free Software                                    *
* Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA                  *
*                                                                                                 *
* Author: Gianluca Frison, giaf (at) dtu.dk                                                       *
*                          gianluca.frison (at) imtek.uni-freiburg.de                             *
*                                                                                                 *
**************************************************************************************************/

#ifndef BLASFEO_V_AUX_EXT_DEP_H_
#define BLASFEO_V_AUX_EXT_DEP_H_

#if defined(EXT_DEP)



#include <stdio.h>



#ifdef __cplusplus
extern "C" {
#endif



/************************************************
* d_aux_extern_depend_lib.c
************************************************/

void v_zeros(void **ptrA, int size);
// dynamically allocate size bytes of memory aligned to 64-byte boundaries and set accordingly a pointer to void; set allocated memory to zero
void v_zeros_align(void **ptrA, int size);
// free the memory allocated by v_zeros
void v_free(void *ptrA);
// free the memory allocated by v_zeros_aligned
void v_free_align(void *ptrA);
// dynamically allocate size bytes of memory and set accordingly a pointer to char; set allocated memory to zero
void c_zeros(char **ptrA, int size);
// dynamically allocate size bytes of memory aligned to 64-byte boundaries and set accordingly a pointer to char; set allocated memory to zero
void c_zeros_align(char **ptrA, int size);
// free the memory allocated by c_zeros
void c_free(char *ptrA);
// free the memory allocated by c_zeros_aligned
void c_free_align(char *ptrA);



#ifdef __cplusplus
}
#endif



#endif  // EXT_DEP

#endif  // BLASFEO_V_AUX_EXT_DEP_H_
