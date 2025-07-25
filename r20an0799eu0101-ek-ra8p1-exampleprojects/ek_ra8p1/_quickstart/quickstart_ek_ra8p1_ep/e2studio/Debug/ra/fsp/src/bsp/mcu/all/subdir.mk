################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ra/fsp/src/bsp/mcu/all/bsp_clocks.c \
../ra/fsp/src/bsp/mcu/all/bsp_common.c \
../ra/fsp/src/bsp/mcu/all/bsp_delay.c \
../ra/fsp/src/bsp/mcu/all/bsp_group_irq.c \
../ra/fsp/src/bsp/mcu/all/bsp_guard.c \
../ra/fsp/src/bsp/mcu/all/bsp_io.c \
../ra/fsp/src/bsp/mcu/all/bsp_ipc.c \
../ra/fsp/src/bsp/mcu/all/bsp_irq.c \
../ra/fsp/src/bsp/mcu/all/bsp_macl.c \
../ra/fsp/src/bsp/mcu/all/bsp_register_protection.c \
../ra/fsp/src/bsp/mcu/all/bsp_sbrk.c \
../ra/fsp/src/bsp/mcu/all/bsp_sdram.c \
../ra/fsp/src/bsp/mcu/all/bsp_security.c 

C_DEPS += \
./ra/fsp/src/bsp/mcu/all/bsp_clocks.d \
./ra/fsp/src/bsp/mcu/all/bsp_common.d \
./ra/fsp/src/bsp/mcu/all/bsp_delay.d \
./ra/fsp/src/bsp/mcu/all/bsp_group_irq.d \
./ra/fsp/src/bsp/mcu/all/bsp_guard.d \
./ra/fsp/src/bsp/mcu/all/bsp_io.d \
./ra/fsp/src/bsp/mcu/all/bsp_ipc.d \
./ra/fsp/src/bsp/mcu/all/bsp_irq.d \
./ra/fsp/src/bsp/mcu/all/bsp_macl.d \
./ra/fsp/src/bsp/mcu/all/bsp_register_protection.d \
./ra/fsp/src/bsp/mcu/all/bsp_sbrk.d \
./ra/fsp/src/bsp/mcu/all/bsp_sdram.d \
./ra/fsp/src/bsp/mcu/all/bsp_security.d 

OBJS += \
./ra/fsp/src/bsp/mcu/all/bsp_clocks.o \
./ra/fsp/src/bsp/mcu/all/bsp_common.o \
./ra/fsp/src/bsp/mcu/all/bsp_delay.o \
./ra/fsp/src/bsp/mcu/all/bsp_group_irq.o \
./ra/fsp/src/bsp/mcu/all/bsp_guard.o \
./ra/fsp/src/bsp/mcu/all/bsp_io.o \
./ra/fsp/src/bsp/mcu/all/bsp_ipc.o \
./ra/fsp/src/bsp/mcu/all/bsp_irq.o \
./ra/fsp/src/bsp/mcu/all/bsp_macl.o \
./ra/fsp/src/bsp/mcu/all/bsp_register_protection.o \
./ra/fsp/src/bsp/mcu/all/bsp_sbrk.o \
./ra/fsp/src/bsp/mcu/all/bsp_sdram.o \
./ra/fsp/src/bsp/mcu/all/bsp_security.o 

SREC += \
e2studio.srec 

MAP += \
e2studio.map 


# Each subdirectory must supply rules for building sources it contributes
ra/fsp/src/bsp/mcu/all/%.o: ../ra/fsp/src/bsp/mcu/all/%.c
	$(file > $@.in,-mfloat-abi=hard -mcpu=cortex-m85+nopacbti -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-strict-aliasing -Wunused -Wuninitialized -Wall -Wextra -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Wlogical-op -Waggregate-return -Wfloat-equal -g -D_RENESAS_RA_ -D_RA_ORDINAL=1 -D_RA_DEBUG_BUILD_ -D_RA_CORE=CPU0 -I"/Users/kim_kyoungkun/Desktop/technonia/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/src" -I"." -I"/Users/kim_kyoungkun/Desktop/technonia/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra/fsp/inc" -I"/Users/kim_kyoungkun/Desktop/technonia/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra/fsp/inc/api" -I"/Users/kim_kyoungkun/Desktop/technonia/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra/fsp/inc/instances" -I"/Users/kim_kyoungkun/Desktop/technonia/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra/fsp/src/rm_freertos_port" -I"/Users/kim_kyoungkun/Desktop/technonia/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra/aws/FreeRTOS/FreeRTOS/Source/include" -I"/Users/kim_kyoungkun/Desktop/technonia/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra/arm/CMSIS_6/CMSIS/Core/Include" -I"/Users/kim_kyoungkun/Desktop/technonia/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra_gen" -I"/Users/kim_kyoungkun/Desktop/technonia/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra_cfg/fsp_cfg/bsp" -I"/Users/kim_kyoungkun/Desktop/technonia/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra_cfg/fsp_cfg" -I"/Users/kim_kyoungkun/Desktop/technonia/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra_cfg/aws" -I"/Users/kim_kyoungkun/Desktop/technonia/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra/tes/dave2d/inc" -I"/Users/kim_kyoungkun/Desktop/technonia/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra/fsp/src/r_mipi_csi" -I"/Users/kim_kyoungkun/Desktop/technonia/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra/fsp/src/r_vin" -std=c99 -Wno-stringop-overflow -Wno-format-truncation -flax-vector-conversions --param=min-pagesize=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" -x c "$<")
	@echo Building file: $< && arm-none-eabi-gcc @"$@.in"

