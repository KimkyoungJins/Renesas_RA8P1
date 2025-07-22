################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/blinky_thread_entry.c \
../src/board_cfg_switch.c \
../src/board_greenpak.c \
../src/board_hw_cfg.c \
../src/board_i2c_master.c \
../src/board_mon_thread_entry.c \
../src/board_sdram.c \
../src/camera_thread_entry.c \
../src/common_init.c \
../src/common_utils.c \
../src/display_thread_entry.c \
../src/hal_entry.c \
../src/jlink_console.c \
../src/main_menu_thread_entry.c \
../src/menu_ext.c \
../src/menu_kis.c \
../src/menu_lcd.c \
../src/menu_led.c \
../src/menu_main.c \
../src/menu_ns.c \
../src/ospi_b_commands.c \
../src/ospi_b_ep.c \
../src/ospi_commands.c \
../src/ov5640.c \
../src/touch_FT5316.c \
../src/tp_thread_entry.c 

C_DEPS += \
./src/blinky_thread_entry.d \
./src/board_cfg_switch.d \
./src/board_greenpak.d \
./src/board_hw_cfg.d \
./src/board_i2c_master.d \
./src/board_mon_thread_entry.d \
./src/board_sdram.d \
./src/camera_thread_entry.d \
./src/common_init.d \
./src/common_utils.d \
./src/display_thread_entry.d \
./src/hal_entry.d \
./src/jlink_console.d \
./src/main_menu_thread_entry.d \
./src/menu_ext.d \
./src/menu_kis.d \
./src/menu_lcd.d \
./src/menu_led.d \
./src/menu_main.d \
./src/menu_ns.d \
./src/ospi_b_commands.d \
./src/ospi_b_ep.d \
./src/ospi_commands.d \
./src/ov5640.d \
./src/touch_FT5316.d \
./src/tp_thread_entry.d 

OBJS += \
./src/blinky_thread_entry.o \
./src/board_cfg_switch.o \
./src/board_greenpak.o \
./src/board_hw_cfg.o \
./src/board_i2c_master.o \
./src/board_mon_thread_entry.o \
./src/board_sdram.o \
./src/camera_thread_entry.o \
./src/common_init.o \
./src/common_utils.o \
./src/display_thread_entry.o \
./src/hal_entry.o \
./src/jlink_console.o \
./src/main_menu_thread_entry.o \
./src/menu_ext.o \
./src/menu_kis.o \
./src/menu_lcd.o \
./src/menu_led.o \
./src/menu_main.o \
./src/menu_ns.o \
./src/ospi_b_commands.o \
./src/ospi_b_ep.o \
./src/ospi_commands.o \
./src/ov5640.o \
./src/touch_FT5316.o \
./src/tp_thread_entry.o 

SREC += \
quickstart_ek_ra8p1_ep.srec 

MAP += \
quickstart_ek_ra8p1_ep.map 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	$(file > $@.in,-mfloat-abi=hard -mcpu=cortex-m85+nopacbti -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-strict-aliasing -Wunused -Wuninitialized -Wall -Wextra -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Wlogical-op -Waggregate-return -Wfloat-equal -g -D_RENESAS_RA_ -D_RA_ORDINAL=1 -D_RA_DEBUG_BUILD_ -D_RA_CORE=CPU0 -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/src" -I"." -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra/fsp/inc" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra/fsp/inc/api" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra/fsp/inc/instances" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra/fsp/src/rm_freertos_port" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra/aws/FreeRTOS/FreeRTOS/Source/include" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra/arm/CMSIS_6/CMSIS/Core/Include" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra_gen" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra_cfg/fsp_cfg/bsp" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra_cfg/fsp_cfg" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra_cfg/aws" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra/tes/dave2d/inc" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra/fsp/src/r_mipi_csi" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra/fsp/src/r_vin" -std=c99 -Wno-stringop-overflow -Wno-format-truncation -flax-vector-conversions --param=min-pagesize=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" -x c "$<")
	@echo Building file: $< && arm-none-eabi-gcc @"$@.in"

