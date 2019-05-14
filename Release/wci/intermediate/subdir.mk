################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../wci/intermediate/ICodeFactory.cpp \
../wci/intermediate/SymTabFactory.cpp \
../wci/intermediate/TypeFactory.cpp 

OBJS += \
./wci/intermediate/ICodeFactory.o \
./wci/intermediate/SymTabFactory.o \
./wci/intermediate/TypeFactory.o 

CPP_DEPS += \
./wci/intermediate/ICodeFactory.d \
./wci/intermediate/SymTabFactory.d \
./wci/intermediate/TypeFactory.d 


# Each subdirectory must supply rules for building sources it contributes
wci/intermediate/%.o: ../wci/intermediate/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


