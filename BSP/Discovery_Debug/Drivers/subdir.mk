################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/init.c 

C_DEPS += \
./Drivers/init.d 

OBJS += \
./Drivers/init.o 


# Each subdirectory must supply rules for building sources it contributes
Drivers/%.o Drivers/%.su Drivers/%.cyclo: ../Drivers/%.c Drivers/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_STM32F429I_DISCO -DSTM32F429xx -c -I"C:/Users/artsa/Desktop/SEM 4/PPO/DISCOVERY/DISCO/BSP/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"C:/Users/artsa/Desktop/SEM 4/PPO/DISCOVERY/DISCO/BSP/Drivers/STM32F4xx_HAL_Driver/Inc" -I"C:/Users/artsa/Desktop/SEM 4/PPO/DISCOVERY/DISCO/BSP/Drivers/BSP/STM32F429I-Discovery" -I"C:/Users/artsa/Desktop/SEM 4/PPO/DISCOVERY/DISCO/BSP/Drivers/CMSIS/Include" -I"C:/Users/artsa/Desktop/SEM 4/PPO/DISCOVERY/DISCO/BSP/Drivers/User" -I"C:/Users/artsa/Desktop/SEM 4/PPO/DISCOVERY/DISCO/BSP/Drivers" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers

clean-Drivers:
	-$(RM) ./Drivers/init.cyclo ./Drivers/init.d ./Drivers/init.o ./Drivers/init.su

.PHONY: clean-Drivers

