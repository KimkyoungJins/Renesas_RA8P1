################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ra/fsp/src/r_icu/r_icu.c 

C_DEPS += \
./ra/fsp/src/r_icu/r_icu.d 

CREF += \
e2studio.cref 

OBJS += \
./ra/fsp/src/r_icu/r_icu.o 

MAP += \
e2studio.map 


# Each subdirectory must supply rules for building sources it contributes
ra/fsp/src/r_icu/%.o: ../ra/fsp/src/r_icu/%.c
	@echo 'Building file: $<'
	$(file > $@.in,-mcpu=cortex-m85 -mthumb -mlittle-endian -mfloat-abi=hard -O2 -ffunction-sections -fdata-sections -fmessage-length=0 -funsigned-char -Wunused -Wuninitialized -Wall -Wextra -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Waggregate-return -Wno-parentheses-equality -Wfloat-equal -gdwarf-4 -g3 -std=c99 -flax-vector-conversions -fshort-enums -fno-unroll-loops -I"/Users/kim_kyoungkun/Desktop/technonia/example 1/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/icu/icu_ek_ra8p1_ep/e2studio/src" -I"." -I"/Users/kim_kyoungkun/Desktop/technonia/example 1/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/icu/icu_ek_ra8p1_ep/e2studio/ra/fsp/inc" -I"/Users/kim_kyoungkun/Desktop/technonia/example 1/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/icu/icu_ek_ra8p1_ep/e2studio/ra/fsp/inc/api" -I"/Users/kim_kyoungkun/Desktop/technonia/example 1/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/icu/icu_ek_ra8p1_ep/e2studio/ra/fsp/inc/instances" -I"/Users/kim_kyoungkun/Desktop/technonia/example 1/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/icu/icu_ek_ra8p1_ep/e2studio/ra/arm/CMSIS_6/CMSIS/Core/Include" -I"/Users/kim_kyoungkun/Desktop/technonia/example 1/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/icu/icu_ek_ra8p1_ep/e2studio/ra_gen" -I"/Users/kim_kyoungkun/Desktop/technonia/example 1/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/icu/icu_ek_ra8p1_ep/e2studio/ra_cfg/fsp_cfg/bsp" -I"/Users/kim_kyoungkun/Desktop/technonia/example 1/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/icu/icu_ek_ra8p1_ep/e2studio/ra_cfg/fsp_cfg" -D_RENESAS_RA_ -D_RA_CORE=CPU0 -D_RA_ORDINAL=1 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -x c "$<" -c -o "$@")
	@clang --target=arm-none-eabi @"$@.in"

