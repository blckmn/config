/*
 * This file is part of Betaflight.
 *
 * Betaflight is free software. You can redistribute this software
 * and/or modify this software under the terms of the GNU General
 * Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later
 * version.
 *
 * Betaflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define FC_TARGET_MCU      ESP32S3

#define BOARD_NAME         ESP32S3_FC
#define MANUFACTURER_ID    CUST

// Sensors
#define USE_ACC
#define USE_GYRO
#define USE_ACC_SPI_ICM42688P
#define USE_GYRO_SPI_ICM42688P
#define USE_BARO
#define USE_BARO_BMP580

// ICM-42688P on SPI0 (gyro INT not wired -> polled)
#define GYRO_1_SPI_INSTANCE  SPI0
#define GYRO_1_CS_PIN        PA39
#define GYRO_1_ALIGN         CW0_DEG

#define SPI0_SCK_PIN         PA38
#define SPI0_SDI_PIN         PA36
#define SPI0_SDO_PIN         PA37

// I2C0 shared by BMP580 baro + VL53L1 ToF (no BF driver for VL53L1 yet)
#define BARO_I2C_INSTANCE    I2CDEV_0
#define I2C0_SCL_PIN         PA42
#define I2C0_SDA_PIN         PA41

// User UART (UART1) on FPC user serial
#define UART1_TX_PIN         PA15
#define UART1_RX_PIN         PA16

// 6 motor outputs (LEDC PWM, no DSHOT)
#define MOTOR1_PIN           PA4
#define MOTOR2_PIN           PA33
#define MOTOR3_PIN           PA5
#define MOTOR4_PIN           PA34
#define MOTOR5_PIN           PA6
#define MOTOR6_PIN           PA35

// WS2812 RGB LED on PA8 (single LED, driven as LED_STRIP via RMT)
#define LED_STRIP_PIN        PA8

// VBAT divider on PA1 (ADC1_CH0)
#define ADC_VBAT_PIN         PA1

// FPC expansion -- first 4 exposed as PINIO (BF default PINIO_COUNT=4)
// FPCIO5/FPCIO6 (PA13/PA14) left for runtime CLI resource assignment.
#define PINIO1_PIN           PA9
#define PINIO2_PIN           PA10
#define PINIO3_PIN           PA11
#define PINIO4_PIN           PA12

// Runtime defaults
#define DEFAULT_BLACKBOX_DEVICE      BLACKBOX_DEVICE_SERIAL
#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC
#define DEFAULT_PID_PROCESS_DENOM    2
