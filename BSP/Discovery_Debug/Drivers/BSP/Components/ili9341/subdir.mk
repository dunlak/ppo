################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/BSP/Components/ili9341/ili9341.c 

C_DEPS += \
./Drivers/BSP/Components/ili9341/ili9341.d 

OBJS += \
./Drivers/BSP/Components/ili9341/ili9341.o 


# Each subdirectory must supply rules for building sources it contributes
Drivers/BSP/Components/ili9341/%.o Drivers/BSP/Components/ili9341/%.su Drivers/BSP/Components/ili9341/%.cyclo: ../Drivers/BSP/Components/ili9341/%.c Drivers/BSP/Components/ili9341/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_STM32F429I_DISCO -DSTM32F429xx -c -I"C:/Users/artsa/Desktop/SEM 4/PPO/DISCOVERY/DISCO/BSP/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"C:/Users/artsa/Desktop/SEM 4/PPO/DISCOVERY/DISCO/BSP/Drivers/STM32F4xx_HAL_Driver/Inc" -I"C:/Users/artsa/Desktop/SEM 4/PPO/DISCOVERY/DISCO/BSP/Drivers/BSP/STM32F429I-Discovery" -I"C:/Users/artsa/Desktop/SEM 4/PPO/DISCOVERY/DISCO/BSP/Drivers/CMSIS/Include" -I"C:/Users/artsa/Desktop/SEM 4/PPO/DISCOVERY/DISCO/BSP/Drivers/User" -I"C:/Users/artsa/Desktop/SEM 4/PPO/DISCOVERY/DISCO/BSP/Drivers" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-BSP-2f-Components-2f-ili9341

clean-Drivers-2f-BSP-2f-Components-2f-ili9341:
	-$(RM) ./Drivers/BSP/Components/ili9341/ili9341.cyclo ./Drivers/BSP/Components/ili9341/ili9341.d ./Drivers/BSP/Components/ili9341/ili9341.o ./Drivers/BSP/Components/ili9341/ili9341.su

.PHONY: clean-Drivers-2f-BSP-2f-Components-2f-ili9341

