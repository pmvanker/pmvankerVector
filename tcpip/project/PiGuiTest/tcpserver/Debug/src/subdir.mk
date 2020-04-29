################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/logging.c \
../src/main.c \
../src/server.c \
../src/testing.c 

OBJS += \
./src/logging.o \
./src/main.o \
./src/server.o \
./src/testing.o 

C_DEPS += \
./src/logging.d \
./src/main.d \
./src/server.d \
./src/testing.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


