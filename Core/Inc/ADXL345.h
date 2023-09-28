#ifndef INC_ADXL345_H_
#define INC_ADXL345_H_
#include <stm32f1xx.h>

typedef enum{
	DEVICE_ID 		= 0x00,
	TAP_THRESHOLD	= 0x1D,		//Registers 0x01 to 0x1C are reserved
	OFFSET_X,
	OFFSET_Y,
	OFFSET_Z,
	TAP_DURATION,
	TAP_LATENCY,
	TAP_WINDOW,
	ACTIVITY_THRESHOLD,
	INACTIVITY_THRESHOLD,
	INACTIVITY_TIME,
	ACTIVITY_CONTROL,
	FREEFALL_THRESHOLD,
	FREEFALL_TIME,
	TAP_AXES,
	TAP_ACTIVITY_SOURCE,
	BANDWIDTH_POWERMODE,
	POWER_CONTROL,
	INTERRUPT_ENABLE,
	INTERRUPT_MAPPING,
	INTERRUPT_SOURCE,
	DATA_FORMAT,
	DATA_X0,
	DATA_X1,
	DATA_Y0,
	DATA_Y1,
	DATA_Z0,
	DATA_Z1,
	FIFO_CONTROL,
	FIFO_STATUS,
	ADXL_NB_REGISTERS
}adxl345Registers_e;

extern volatile uint8_t adxlINT1occurred;

HAL_StatusTypeDef ADXL345initialise(const SPI_HandleTypeDef* handle);
HAL_StatusTypeDef ADXL345readRegister(adxl345Registers_e registerNumber, uint8_t* value);
HAL_StatusTypeDef ADXL345writeRegister(adxl345Registers_e registerNumber, uint8_t value);
HAL_StatusTypeDef ADXL345readRegisters(adxl345Registers_e firstRegister, uint8_t* value, uint8_t size);

#endif /* INC_ADXL345_H_ */
