################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/src_five/sub_five.c 

OBJS += \
./src/src_five/sub_five.o 

C_DEPS += \
./src/src_five/sub_five.d 


# Each subdirectory must supply rules for building sources it contributes
src/src_five/%.o: ../src/src_five/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	/home/farman/timesys/nitrogen6x/toolchain/bin/armv7l-timesys-linux-gnueabihf-gcc  -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF "$(@:%.o=%.d)" -MT "$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


