################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../wci/intermediate/typeimpl/TypeChecker.cpp \
../wci/intermediate/typeimpl/TypeSpecImpl.cpp 

OBJS += \
./wci/intermediate/typeimpl/TypeChecker.o \
./wci/intermediate/typeimpl/TypeSpecImpl.o 

CPP_DEPS += \
./wci/intermediate/typeimpl/TypeChecker.d \
./wci/intermediate/typeimpl/TypeSpecImpl.d 


# Each subdirectory must supply rules for building sources it contributes
wci/intermediate/typeimpl/%.o: ../wci/intermediate/typeimpl/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


