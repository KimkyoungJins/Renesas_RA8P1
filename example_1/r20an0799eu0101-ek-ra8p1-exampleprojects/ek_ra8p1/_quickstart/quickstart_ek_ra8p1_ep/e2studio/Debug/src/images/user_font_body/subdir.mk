################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/images/user_font_body/0.c \
../src/images/user_font_body/1.c \
../src/images/user_font_body/2.c \
../src/images/user_font_body/3.c \
../src/images/user_font_body/4.c \
../src/images/user_font_body/5.c \
../src/images/user_font_body/6.c \
../src/images/user_font_body/7.c \
../src/images/user_font_body/8.c \
../src/images/user_font_body/9.c \
../src/images/user_font_body/AND.c \
../src/images/user_font_body/CLOSED_CURVED.c \
../src/images/user_font_body/CLOSED_SQUARE.c \
../src/images/user_font_body/COLON.c \
../src/images/user_font_body/COMMA.c \
../src/images/user_font_body/DEGREES.c \
../src/images/user_font_body/FULL_STOP.c \
../src/images/user_font_body/MINUS.c \
../src/images/user_font_body/OPEN_CURVED.c \
../src/images/user_font_body/OPEN_SQUARE.c \
../src/images/user_font_body/PERCENT.c \
../src/images/user_font_body/SLASH.c \
../src/images/user_font_body/SPACE.c \
../src/images/user_font_body/UNDERSCORE.c \
../src/images/user_font_body/user_font_body_if.c 

C_DEPS += \
./src/images/user_font_body/0.d \
./src/images/user_font_body/1.d \
./src/images/user_font_body/2.d \
./src/images/user_font_body/3.d \
./src/images/user_font_body/4.d \
./src/images/user_font_body/5.d \
./src/images/user_font_body/6.d \
./src/images/user_font_body/7.d \
./src/images/user_font_body/8.d \
./src/images/user_font_body/9.d \
./src/images/user_font_body/AND.d \
./src/images/user_font_body/CLOSED_CURVED.d \
./src/images/user_font_body/CLOSED_SQUARE.d \
./src/images/user_font_body/COLON.d \
./src/images/user_font_body/COMMA.d \
./src/images/user_font_body/DEGREES.d \
./src/images/user_font_body/FULL_STOP.d \
./src/images/user_font_body/MINUS.d \
./src/images/user_font_body/OPEN_CURVED.d \
./src/images/user_font_body/OPEN_SQUARE.d \
./src/images/user_font_body/PERCENT.d \
./src/images/user_font_body/SLASH.d \
./src/images/user_font_body/SPACE.d \
./src/images/user_font_body/UNDERSCORE.d \
./src/images/user_font_body/user_font_body_if.d 

OBJS += \
./src/images/user_font_body/0.o \
./src/images/user_font_body/1.o \
./src/images/user_font_body/2.o \
./src/images/user_font_body/3.o \
./src/images/user_font_body/4.o \
./src/images/user_font_body/5.o \
./src/images/user_font_body/6.o \
./src/images/user_font_body/7.o \
./src/images/user_font_body/8.o \
./src/images/user_font_body/9.o \
./src/images/user_font_body/AND.o \
./src/images/user_font_body/CLOSED_CURVED.o \
./src/images/user_font_body/CLOSED_SQUARE.o \
./src/images/user_font_body/COLON.o \
./src/images/user_font_body/COMMA.o \
./src/images/user_font_body/DEGREES.o \
./src/images/user_font_body/FULL_STOP.o \
./src/images/user_font_body/MINUS.o \
./src/images/user_font_body/OPEN_CURVED.o \
./src/images/user_font_body/OPEN_SQUARE.o \
./src/images/user_font_body/PERCENT.o \
./src/images/user_font_body/SLASH.o \
./src/images/user_font_body/SPACE.o \
./src/images/user_font_body/UNDERSCORE.o \
./src/images/user_font_body/user_font_body_if.o 

SREC += \
quickstart_ek_ra8p1_ep.srec 

MAP += \
quickstart_ek_ra8p1_ep.map 


# Each subdirectory must supply rules for building sources it contributes
src/images/user_font_body/%.o: ../src/images/user_font_body/%.c
	$(file > $@.in,-mfloat-abi=hard -mcpu=cortex-m85+nopacbti -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-strict-aliasing -Wunused -Wuninitialized -Wall -Wextra -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Wlogical-op -Waggregate-return -Wfloat-equal -g -D_RENESAS_RA_ -D_RA_ORDINAL=1 -D_RA_DEBUG_BUILD_ -D_RA_CORE=CPU0 -I"/Users/kim_kyoungkun/Desktop/테크노니아/example 1/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/src" -I"." -I"/Users/kim_kyoungkun/Desktop/테크노니아/example 1/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra/fsp/inc" -I"/Users/kim_kyoungkun/Desktop/테크노니아/example 1/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra/fsp/inc/api" -I"/Users/kim_kyoungkun/Desktop/테크노니아/example 1/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra/fsp/inc/instances" -I"/Users/kim_kyoungkun/Desktop/테크노니아/example 1/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra/fsp/src/rm_freertos_port" -I"/Users/kim_kyoungkun/Desktop/테크노니아/example 1/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra/aws/FreeRTOS/FreeRTOS/Source/include" -I"/Users/kim_kyoungkun/Desktop/테크노니아/example 1/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra/arm/CMSIS_6/CMSIS/Core/Include" -I"/Users/kim_kyoungkun/Desktop/테크노니아/example 1/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra_gen" -I"/Users/kim_kyoungkun/Desktop/테크노니아/example 1/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra_cfg/fsp_cfg/bsp" -I"/Users/kim_kyoungkun/Desktop/테크노니아/example 1/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra_cfg/fsp_cfg" -I"/Users/kim_kyoungkun/Desktop/테크노니아/example 1/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra_cfg/aws" -I"/Users/kim_kyoungkun/Desktop/테크노니아/example 1/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra/tes/dave2d/inc" -I"/Users/kim_kyoungkun/Desktop/테크노니아/example 1/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra/fsp/src/r_mipi_csi" -I"/Users/kim_kyoungkun/Desktop/테크노니아/example 1/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra/fsp/src/r_vin" -std=c99 -Wno-stringop-overflow -Wno-format-truncation -flax-vector-conversions --param=min-pagesize=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" -x c "$<")
	@echo Building file: $< && arm-none-eabi-gcc @"$@.in"

