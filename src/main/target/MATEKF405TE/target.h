/*
 * This file is part of INAV.
 *
 * INAV is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * INAV is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with INAV.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once
#define USE_TARGET_CONFIG

#if defined(MATEKF405TE_SD)
#   define TARGET_BOARD_IDENTIFIER "MF4T"
#   define USBD_PRODUCT_STRING  "MatekF405TE_SD"
#else
#   define TARGET_BOARD_IDENTIFIER "MF4T"
#   define USBD_PRODUCT_STRING  "MatekF405TE"
#endif

#define LED0                    PA14  //Blue
#define LED1                    PA13  //Green

#define BEEPER                  PB9
#define BEEPER_INVERTED
#define BEEPER_PWM_FREQUENCY    2500

// *************** SPI1 IMU & OSD *******************
#define USE_SPI
#define USE_SPI_DEVICE_1

#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN   	    PB4
#define SPI1_MOSI_PIN   	    PA7

#define USE_IMU_ICM42605
#define IMU_ICM42605_ALIGN      CW270_DEG_FLIP
#define ICM42605_SPI_BUS        BUS_SPI1
#define ICM42605_CS_PIN         PC14
#define ICM42605_EXTI_PIN       PC15

#define USE_IMU_BMI270
#define IMU_BMI270_ALIGN        CW270_DEG_FLIP
#define BMI270_SPI_BUS          BUS_SPI1
#define BMI270_CS_PIN           PC14
#define BMI270_EXTI_PIN         PC15

#define USE_EXTI
#define USE_MPU_DATA_READY_SIGNAL

#define USE_MAX7456
#define MAX7456_SPI_BUS         BUS_SPI1
#define MAX7456_CS_PIN          PB12

// *************** SPI2 Flash/SD Card  ****************
#define USE_SPI_DEVICE_2
#define SPI2_SCK_PIN            PB13
#define SPI2_MISO_PIN   	    PC2
#define SPI2_MOSI_PIN   	    PC3

#if defined(MATEKF405TE_SD)
#   define USE_SDCARD
#   define USE_SDCARD_SPI
#   define SDCARD_SPI_BUS          BUS_SPI2
#   define SDCARD_CS_PIN           PC1
#   define ENABLE_BLACKBOX_LOGGING_ON_SDCARD_BY_DEFAULT
#else
#   define USE_FLASHFS
#   define USE_FLASH_M25P16
#   define M25P16_SPI_BUS          BUS_SPI2
#   define M25P16_CS_PIN           PC13
#   define ENABLE_BLACKBOX_LOGGING_ON_SPIFLASH_BY_DEFAULT
#endif

// *************** I2C /Baro/Mag *********************
#define USE_I2C
#define USE_I2C_DEVICE_1
#define I2C1_SCL                PB8
#define I2C1_SDA                PB7

#define USE_BARO
#define BARO_I2C_BUS            BUS_I2C1
#define USE_BARO_BMP280
#define USE_BARO_MS5611
#define USE_BARO_DPS310
#define USE_BARO_SPL06

#define USE_MAG
#define MAG_I2C_BUS             BUS_I2C1
#define USE_MAG_HMC5883
#define USE_MAG_QMC5883
#define USE_MAG_IST8310
#define USE_MAG_IST8308
#define USE_MAG_MAG3110
#define USE_MAG_LIS3MDL

#define USE_RANGEFINDER
#define RANGEFINDER_I2C_BUS     BUS_I2C1
#define PITOT_I2C_BUS           BUS_I2C1
#define TEMPERATURE_I2C_BUS     BUS_I2C1

// *************** UART *****************************
#define USE_VCP

#define USE_UART1
#define UART1_TX_PIN            PA9
#define UART1_RX_PIN            PA10

#define USE_UART2
#define UART2_TX_PIN            PA2
#define UART2_RX_PIN            PA3

#define USE_UART3
#define UART3_TX_PIN            PC10
#define UART3_RX_PIN            PC11

#define USE_UART4
#define UART4_TX_PIN            PA0
#define UART4_RX_PIN            PA1

#define USE_UART5
#define UART5_TX_PIN            PC12
#define UART5_RX_PIN            PD2

#define USE_UART6
#define UART6_TX_PIN            PC6
#define UART6_RX_PIN            PC7

#define USE_SOFTSERIAL1
#define SOFTSERIAL_1_TX_PIN      PA2
#define SOFTSERIAL_1_RX_PIN      PA2

#define SERIAL_PORT_COUNT       8

#define DEFAULT_RX_TYPE         RX_TYPE_SERIAL
#define SERIALRX_PROVIDER       SERIALRX_CRSF
#define SERIALRX_UART           SERIAL_PORT_USART2

// *************** ADC ***************************
#define USE_ADC
#define ADC_INSTANCE                ADC1
#define ADC1_DMA_STREAM             DMA2_Stream4
#define ADC_CHANNEL_1_PIN           PC4
#define ADC_CHANNEL_2_PIN           PC5
#define ADC_CHANNEL_3_PIN           PB0
#define ADC_CHANNEL_4_PIN           PC0
#define VBAT_ADC_CHANNEL            ADC_CHN_1
#define CURRENT_METER_ADC_CHANNEL   ADC_CHN_2
#define RSSI_ADC_CHANNEL            ADC_CHN_3
#define AIRSPEED_ADC_CHANNEL        ADC_CHN_4

// *************** PINIO ***************************
#define USE_PINIO
#define USE_PINIOBOX
#define PINIO1_PIN                  PA4
#define PINIO2_PIN                  PB5

// *************** LEDSTRIP ************************
#define USE_LED_STRIP
#define WS2811_PIN                  PB1

// *************** others  ************************
#define DEFAULT_FEATURES   (FEATURE_OSD | FEATURE_TELEMETRY | FEATURE_CURRENT_METER | FEATURE_VBAT | FEATURE_TX_PROF_SEL | FEATURE_BLACKBOX)
#define VBAT_SCALE_DEFAULT      2100
#define CURRENT_METER_SCALE     150

#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         0xffff
#define TARGET_IO_PORTD         (BIT(2))

#define MAX_PWM_OUTPUT_PORTS    11

#define USE_SERIAL_4WAY_BLHELI_INTERFACE
#define USE_DSHOT
#define USE_ESC_SENSOR

