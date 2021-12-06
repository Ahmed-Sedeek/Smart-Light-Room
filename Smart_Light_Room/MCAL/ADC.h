/*
 * ADC.h
 *
 * Created: 11/12/2021 4:43:11 PM
 *  Author: Ahmed Sedeek
 */ 


#ifndef ADC_H_
#define ADC_H_

/*------------ Include Section --------------*/
#include "Utils.h"
#include "MemMap.h"
#include "StdTypes.h"

#define F_CPU 8000000UL
#include <util/delay.h>

typedef enum
{
	ADC_AREF = 0,  // External Voltage reference
	ADC_VCC ,      // Vcc Voltage reference
	ADC_256 = 3	   // internal Voltage reference 2.56 v
}ADC_Vref_type; /* Voltage reference */

typedef enum{


typedef enum


void ADC_Init(ADC_Vref_type vref, ADC_Scaler_type scaler);

/*Reads the ADC Registers from the selected channel*/
u16 ADC_Read(ADC_Channel_type ch);


#endif /* ADC_H_ */