################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CXX_SRCS += \
../src/3.2/3.3.cxx \
../src/3.2/KeyboardTs.cxx \
../src/3.2/LedLcd.cxx 

OBJS += \
./src/3.2/3.3.o \
./src/3.2/KeyboardTs.o \
./src/3.2/LedLcd.o 

CXX_DEPS += \
./src/3.2/3.3.d \
./src/3.2/KeyboardTs.d \
./src/3.2/LedLcd.d 


# Each subdirectory must supply rules for building sources it contributes
src/3.2/%.o src/3.2/%.su src/3.2/%.cyclo: ../src/3.2/%.cxx src/3.2/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DUSE_STM32F429I_DISCO -DSTM32F429xx -c -I"C:/Users/artsa/Desktop/SEM 4/PPO/DISCOVERY/DISCO/BSP/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"C:/Users/artsa/Desktop/SEM 4/PPO/DISCOVERY/DISCO/BSP/Drivers/CMSIS/Include" -I"C:/Users/artsa/Desktop/SEM 4/PPO/DISCOVERY/DISCO/BSP/Drivers/BSP/STM32F429I-Discovery" -I"C:/Users/artsa/Desktop/SEM 4/PPO/DISCOVERY/DISCO/BSP/Drivers/STM32F4xx_HAL_Driver/Inc" -I"C:/Users/artsa/Desktop/SEM 4/PPO/DISCOVERY/DISCO/BSP/Drivers/User" -I"C:/Users/artsa/Desktop/SEM 4/PPO/DISCOVERY/DISCO/BSP/Drivers" -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-src-2f-3-2e-2

clean-src-2f-3-2e-2:
	-$(RM) ./src/3.2/3.3.cyclo ./src/3.2/3.3.d ./src/3.2/3.3.o ./src/3.2/3.3.su ./src/3.2/KeyboardTs.cyclo ./src/3.2/KeyboardTs.d ./src/3.2/KeyboardTs.o ./src/3.2/KeyboardTs.su ./src/3.2/LedLcd.cyclo ./src/3.2/LedLcd.d ./src/3.2/LedLcd.o ./src/3.2/LedLcd.su

.PHONY: clean-src-2f-3-2e-2

