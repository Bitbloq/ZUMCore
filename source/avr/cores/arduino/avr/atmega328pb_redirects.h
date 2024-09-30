/*
* This file redirects some SPI registries and bits.
* It is needed for redirect the libraries that make low level SPI manipulation
* on the atmega328p to the SPI0 interface in the atmega328pb.
*/

#ifndef _ATMEGA328PB_SPI0_REDIRECTS_
#define _ATMEGA328PB_SPI0_REDIRECTS_

#if defined(__AVR_ATmega328PB__)

// Bit values are identical for SPI0 and SPI1.
#define SPR0  SPR00
#define SPR1  SPR01
#define CPHA  CPHA0
#define CPOL  CPOL0
#define MSTR  MSTR0
#define DORD  DORD0
#define SPE  SPE0
#define SPIE  SPIE0
#define SPI2X  SPI2X0
#define WCOL  WCOL0
#define SPIF  SPIF0
#define SPDR SPDR0
#define SPSR SPSR0
#define SPCR SPCR0

#endif

#endif