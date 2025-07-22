################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ra/board/ra8p1_ek/board_init.c \
../ra/board/ra8p1_ek/board_leds.c 

C_DEPS += \
./ra/board/ra8p1_ek/board_init.d \
./ra/board/ra8p1_ek/board_leds.d 

CREF += \
ledtests_CPU1.cref 

OBJS += \
./ra/board/ra8p1_ek/board_init.o \
./ra/board/ra8p1_ek/board_leds.o 

MAP += \
ledtests_CPU1.map 


# Each subdirectory must supply rules for building sources it contributes
ra/board/ra8p1_ek/%.o: ../ra/board/ra8p1_ek/%.c
	@echo 'Building file: $<'
	$(file > $@.in,-mcpu=cortex-m33 -mthumb -mlittle-endian -mfloat-abi=hard -mfpu=fpv5-sp-d16 -O2 -ffunction-sections -fdata-sections -fno-strict-aliasing -fmessage-length=0 -funsigned-char -Wunused -Wuninitialized -Wall -Wextra -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Waggregate-return -Wno-parentheses-equality -Wfloat-equal -g3 -std=c99 -fshort-enums -fno-unroll-loops -I"/Users/kim_kyoungkun/Desktop/technonia/ledtests_CPU1/src" -I"." -I"/Users/kim_kyoungkun/Desktop/technonia/ledtests_CPU1/ra/fsp/inc" -I"/Users/kim_kyoungkun/Desktop/technonia/ledtests_CPU1/ra/fsp/inc/api" -I"/Users/kim_kyoungkun/Desktop/technonia/ledtests_CPU1/ra/fsp/inc/instances" -I"/Users/kim_kyoungkun/Desktop/technonia/ledtests_CPU1/ra/arm/CMSIS_6/CMSIS/Core/Include" -I"/Users/kim_kyoungkun/Desktop/technonia/ledtests_CPU1/ra_gen" -I"/Users/kim_kyoungkun/Desktop/technonia/ledtests_CPU1/ra_cfg/fsp_cfg/bsp" -I"/Users/kim_kyoungkun/Desktop/technonia/ledtests_CPU1/ra_cfg/fsp_cfg" -D_RENESAS_RA_ -D_RA_CORE=CPU1 -D_RA_ORDINAL=2 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -x c "$<" -c -o "$@")
	@clang --target=arm-none-eabi @"$@.in"

