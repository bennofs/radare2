#include "r_syscall.h"

RSyscallPort sysport_x86[] = {
	{ 0x3, "HELLO WORLD" },
	{ 0x378, "lp1" },
	{ 0, NULL }
};

// XXX: changed for RHME board
// for Microchip XMEGA A4U
RSyscallPort sysport_avr[] = {
  // CPU
	//{ 0x30, "SFIOR: Special Function IO Register"},
	//{ 0x31, "OSCCAL: (Internal) Oscillator Calibration Register"},
	//{ 0x32, "TCNT0: Timer/Counter Register 0 (8 bits)"},
	//{ 0x33, "TCCR0: Timer/Counter Control Register 0"},
	{ 0x34, "CCP: Configuration Change Protection Register" },
	//{ 0x35, "MCUCR: MCU (Power Management) Control Register"},
	//{ 0x36, "TWCR: I2C (Two-wire) Control Register"},
	//{ 0x37, "SPMCR: Store Program Memory Control Register"},
	{ 0x38, "RAMPD: Extended Direct Addressing Register"},
	{ 0x39, "RAMPX: Extended X-Pointer Register"},
	{ 0x3a, "RAMPY: Extended Y-Pointer Register"},
	{ 0x3b, "RAMPZ: Extended Z-Pointer Register" },
	{ 0x3c, "EIND: Extended Indirect Register"},
	{ 0x3d, "SPL: Stack lower bits SP0-SP7"},
	{ 0x3e, "SPH: Stack higher bits SP8-SP10" },
	{ 0x3f, "SREG: flags" },

  // GPIO
  { 0, "GPIOR0: General Purpose IO Register 0" },
  { 1, "GPIOR1: General Purpose IO Register 1" },
  { 2, "GPIOR2: General Purpose IO Register 2" },
  { 3, "GPIOR3: General Purpose IO Register 3" },
  { 4, "GPIOR4: General Purpose IO Register 4" },
  { 5, "GPIOR5: General Purpose IO Register 5" },
  { 6, "GPIOR6: General Purpose IO Register 6" },
  { 7, "GPIOR7: General Purpose IO Register 7" },
  { 8, "GPIOR8: General Purpose IO Register 8" },
  { 9, "GPIOR9: General Purpose IO Register 9" },
  { 10, "GPIOR10: General Purpose IO Register 10" },
  { 11, "GPIOR11: General Purpose IO Register 11" },
  { 12, "GPIOR12: General Purpose IO Register 12" },
  { 13, "GPIOR13: General Purpose IO Register 13" },
  { 14, "GPIOR14: General Purpose IO Register 14" },
  { 15, "GPIOR15: General Purpose IO Register 15" },
  
	{ 0, NULL }
};
