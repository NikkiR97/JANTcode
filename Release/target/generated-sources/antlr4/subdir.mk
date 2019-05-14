################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../target/generated-sources/antlr4/JANTBaseVisitor.cpp \
../target/generated-sources/antlr4/JANTLexer.cpp \
../target/generated-sources/antlr4/JANTParser.cpp \
../target/generated-sources/antlr4/JANTVisitor.cpp 

OBJS += \
./target/generated-sources/antlr4/JANTBaseVisitor.o \
./target/generated-sources/antlr4/JANTLexer.o \
./target/generated-sources/antlr4/JANTParser.o \
./target/generated-sources/antlr4/JANTVisitor.o 

CPP_DEPS += \
./target/generated-sources/antlr4/JANTBaseVisitor.d \
./target/generated-sources/antlr4/JANTLexer.d \
./target/generated-sources/antlr4/JANTParser.d \
./target/generated-sources/antlr4/JANTVisitor.d 


# Each subdirectory must supply rules for building sources it contributes
target/generated-sources/antlr4/%.o: ../target/generated-sources/antlr4/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


