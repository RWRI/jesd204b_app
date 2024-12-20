/***************************************************************************//**
 *   @file   config.h
 *   @brief  Config file of AD9361/API Driver.
 *   @author DBogdan (dragos.bogdan@analog.com)
 ********************************************************************************
 * Copyright 2015(c) Analog Devices, Inc.
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *  - Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  - Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  - Neither the name of Analog Devices, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *  - The use of this software may or may not infringe the patent rights
 *    of one or more patent holders.  This license does not release you
 *    from the requirement that you obtain separate licenses from these
 *    patent holders to use this software.
 *  - Use of the software either in source or binary form, must be run
 *    on or directly connected to an Analog Devices Inc. component.
 *
 * THIS SOFTWARE IS PROVIDED BY ANALOG DEVICES "AS IS" AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, NON-INFRINGEMENT,
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL ANALOG DEVICES BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, INTELLECTUAL PROPERTY RIGHTS, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *******************************************************************************/

#ifndef CONFIG_H_
#define CONFIG_H_

// #define HAVE_VERBOSE_MESSAGES /* Recommended during development prints errors and warnings */
// #define DEBUG		 /* For Debug purposes only */

/******************************************************************************/
/****************************** Carrier Vendors *******************************/
/******************************************************************************/
#define XILINX
// #define ALTERA

/******************************************************************************/
/********************************* CPU Arch ***********************************/
/******************************************************************************/
/*Xilinx*/
#define ZYNQ /* Requires a family definition (below)*/
//#define ZYNQ_PS7
#define ZYNQ_PSU
// #define MICROBLAZE

/*Altera*/
// #define SOC
// #define NIOS_II
/******************************************************************************/
/********************************* Warn User **********************************/
/******************************************************************************/

#if !defined(XILINX) && !defined(ALTERA)
printf("\nWARNING no vendor defined in config.h (for carrier)\n");
#endif

#if !defined(MICROBLAZE) && !defined(NIOS_II) && !defined(SOC) && !defined(ZYNQ)
printf("\nWARNING CPU arch defined in config.h\n");
#endif

typedef enum {ADC, DAC_DDS, DAC_DMA, ADC_DAC, END_MODE} tmode;

int init_jesd204b(int qntAmostras, tmode  mode);
int adc();
int dac();
int adc_dac();
int clear_jesd204b();

#endif
