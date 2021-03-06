/*
  Copyright (c) 2014 DFrobot.  All right reserved.
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef _VARIANT_MAKERLAB_SUN_
#define _VARIANT_MAKERLAB_SUN_

/*----------------------------------------------------------------------------
 *        Definitions
 *----------------------------------------------------------------------------*/

/** Frequency of the board main oscillator */
#define VARIANT_MAINOSC		8000000

/** Master clock frequency */
#define VARIANT_MCK			72000000

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/

#include "Arduino.h"
#ifdef __cplusplus
//#include "UARTClass.h"
#include "USARTClass.h"
#endif

#ifdef __cplusplus
extern "C"{
#endif // __cplusplus

/**
 * Libc porting layers
 */
#if defined (  __GNUC__  ) /* GCC CS3 */
#    include <syscalls.h> /** RedHat Newlib minimal stub */
#endif

#define NONE ((uint8_t)0xFF)

/*----------------------------------------------------------------------------
 *        Pins
 *----------------------------------------------------------------------------*/

// Number of pins defined in PinDescription array
#define PINS_COUNT				(38u)

// LEDs
#define PIN_LED_13				(13u)
#define PIN_LED_RXL				-1	//(72u)
#define PIN_LED_TXL				-1	//(73u)
#define PIN_LED					PIN_LED_13
#define PIN_LED2				PIN_LED_RXL
#define PIN_LED3				PIN_LED_TXL

/*
 * SPI Interfaces
 */
#define SPI_INTERFACES_COUNT	2	// stm32 privide two SPI interfaces;

#define SPI_INTERFACE			STM32_SPI1
#define SPI_INTERFACE_ID		-1	//ID_SPI0
#define SPI_CHANNELS_NUM		-1	//4
// NSS use software control
#define PIN_SPI_SS0				-1	//(59u)
#define PIN_SPI_SS1				-1	//(60u)
#define PIN_SPI_SS2				-1	//(61u)
#define PIN_SPI_SS3				-1	//(62u)
#define PIN_SPI_MOSI			(11u) 
#define PIN_SPI_MISO			(12u)
#define PIN_SPI_SCK				(13u)
#define BOARD_SPI_SS0			-1	//(59u)
#define BOARD_SPI_SS1			-1	//(60u)
#define BOARD_SPI_SS2			-1	//(61u)
#define BOARD_SPI_SS3			-1	//PIN_SPI_SS3
#define BOARD_SPI_DEFAULT_SS	-1	//BOARD_SPI_SS3

#define SPI_INTERFACE1			SPI2
#define PIN_SPI_MOSI1			(34u)
#define PIN_SPI_MISO1			(33u)
#define PIN_SPI_SCK1			(32u)

#define SPI_INTERFACE2			SPI3
#define PIN_SPI_MOSI2			(8u)
#define PIN_SPI_MISO2			(7u)
#define PIN_SPI_SCK2			(6u)


#define BOARD_PIN_TO_SPI_PIN(x) \
	(x==BOARD_SPI_SS0 ? PIN_SPI_SS0 : \
	(x==BOARD_SPI_SS1 ? PIN_SPI_SS1 : \
	(x==BOARD_SPI_SS2 ? PIN_SPI_SS2 : PIN_SPI_SS3 )))
#define BOARD_PIN_TO_SPI_CHANNEL(x) \
	(x==BOARD_SPI_SS0 ? 0 : \
	(x==BOARD_SPI_SS1 ? 1 : \
	(x==BOARD_SPI_SS2 ? 2 : 3)))

//static const uint8_t SS   = BOARD_SPI_SS0;
//static const uint8_t SS1  = BOARD_SPI_SS1;
//static const uint8_t SS2  = BOARD_SPI_SS2;
//static const uint8_t SS3  = BOARD_SPI_SS3;
static const uint8_t MOSI = PIN_SPI_MOSI;
static const uint8_t MISO = PIN_SPI_MISO;
static const uint8_t SCK  = PIN_SPI_SCK;

static const uint8_t MOSI1 = PIN_SPI_MOSI1;
static const uint8_t MISO1 = PIN_SPI_MISO1;
static const uint8_t SCK1  = PIN_SPI_SCK1;

static const uint8_t MOSI2 = PIN_SPI_MOSI2;
static const uint8_t MISO2 = PIN_SPI_MISO2;
static const uint8_t SCK2  = PIN_SPI_SCK2;

/*
 * Wire Interfaces
 */
#define WIRE_INTERFACES_COUNT	2

#define PIN_WIRE_SDA			(9u)
#define PIN_WIRE_SCL			(5u)
#define WIRE_INTERFACE			I2C1
#define WIRE_INTERFACE_ID		ID_TWI1
#define WIRE_ISR_HANDLER		I2C1_EV_IRQHandler

#define PIN_WIRE1_SDA			(30u)
#define PIN_WIRE1_SCL			(29u)
#define WIRE1_INTERFACE			I2C2
#define WIRE1_INTERFACE_ID		ID_TWI0
#define WIRE1_ISR_HANDLER		I2C2_EV_IRQHandler

/*
 * UART/USART Interfaces
 */

// Serial1(Serial4)
#define RX1						(0u)	//PA10
#define TX1						(1u)	//PA9

// Serial2(Serial2)
#define RX2             (22u) //PA3
#define TX2              (21u) //PA2

// Serial3 (Serial3)
#define RX3              (30u) //PB11
#define TX3              (29u) //PB10


// Serial4 (Serial4)
#define RX4              (8u) //PC11
#define TX4              (9u) //PC10

// Serial5 (Serial5)
#define RX5              (25u) //PD2
#define TX5              (23u) //PC12


/*
 * USB Interfaces
 */
#define PINS_USB             (85u)

/*
 * Analog pins
 */
static const uint8_t A0  = 0;
static const uint8_t A1  = 1;
static const uint8_t A2  = 2;
static const uint8_t A3  = 3;
static const uint8_t A4  = 4;
static const uint8_t A5  = 5;

static const uint8_t A6  = 6;
static const uint8_t A7  = 7;

static const uint8_t A8  = 8;
static const uint8_t A9  = 9;
static const uint8_t A10 = 10;
static const uint8_t A11 = 11;

static const uint8_t DAC0 = 66;
static const uint8_t DAC1 = 67;
static const uint8_t A12 = 66;//same as DAC0
static const uint8_t A13 = 67;//same as DAC1
static const uint8_t A14 = 52;
static const uint8_t A15 = 53;
static const uint8_t CANRX = 68;
static const uint8_t CANTX = 69;
#define ADC_RESOLUTION		12

/*
 * DACC
 */
#define DACC_INTERFACE		DACC
#define DACC_INTERFACE_ID	ID_DACC
#define DACC_RESOLUTION		12
#define DACC_ISR_HANDLER    DACC_Handler
#define DACC_ISR_ID         DACC_IRQn

/*
 * PWM
 */
#define PWM_INTERFACE		PWM
#define PWM_INTERFACE_ID	ID_PWM
#define PWM_FREQUENCY		1000
#define PWM_MAX_DUTY_CYCLE	255
#define PWM_MIN_DUTY_CYCLE	0
#define PWM_RESOLUTION		8

/*
 * TC
 */
#define TC_INTERFACE        TC0
#define TC_INTERFACE_ID     ID_TC0
#define TC_FREQUENCY        1000
#define TC_MAX_DUTY_CYCLE   255
#define TC_MIN_DUTY_CYCLE   0
#define TC_RESOLUTION		8

#ifdef __cplusplus
}
#endif

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#ifdef __cplusplus

//extern UARTClass Serial1;

extern USARTClass Serial1;
extern USARTClass Serial2;
extern USARTClass Serial3;
extern USARTClass Serial4;
extern USARTClass Serial5;

// These serial port names are intended to allow libraries and architecture-neutral
// sketches to automatically default to the correct port name for a particular type
// of use.  For example, a GPS module would normally connect to SERIAL_PORT_HARDWARE_OPEN,
// the first hardware serial port whose RX/TX pins are not dedicated to another use.
//
// SERIAL_PORT_MONITOR        Port which normally prints to the Arduino Serial Monitor
//
// SERIAL_PORT_USBVIRTUAL     Port which is USB virtual serial
//
// SERIAL_PORT_LINUXBRIDGE    Port which connects to a Linux system via Bridge library
//
// SERIAL_PORT_HARDWARE       Hardware serial port, physical RX & TX pins.
//
// SERIAL_PORT_HARDWARE_OPEN  Hardware serial ports which are open for use.  Their RX & TX
//                            pins are NOT connected to anything by default.
#define SERIAL_PORT_MONITOR			Serial1
#define SERIAL_PORT_HARDWARE		Serial1
#define SERIAL_PORT_HARDWARE_OPEN	Serial2

// Alias Serial to Serial1
#define Serial						Serial1

#endif

#endif /* _VARIANT_MAKERLAB_SUN_ */
