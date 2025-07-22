################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ra/fsp/src/r_ospi_b/r_ospi_b.c 

C_DEPS += \
./ra/fsp/src/r_ospi_b/r_ospi_b.d 

OBJS += \
./ra/fsp/src/r_ospi_b/r_ospi_b.o 

SREC += \
quickstart_ek_ra8p1_ep.srec 

MAP += \
quickstart_ek_ra8p1_ep.map 


# Each subdirectory must supply rules for building sources it contributes
ra/fsp/src/r_ospi_b/%.o: ../ra/fsp/src/r_ospi_b/%.c
	$(file > $@.in,-mfloat-abi=hard -mcpu=cortex-m85+nopacbti -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-strict-aliasing -Wunused -Wuninitialized -Wall -Wextra -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Wlogical-op -Waggregate-return -Wfloat-equal -g -D_RENESAS_RA_ -D_RA_ORDINAL=1 -D_RA_DEBUG_BUILD_ -D_RA_CORE=CPU0 -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/src" -I"." -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra/fsp/inc" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra/fsp/inc/api" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra/fsp/inc/instances" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra/fsp/src/rm_freertos_port" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra/aws/FreeRTOS/FreeRTOS/Source/include" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra/arm/CMSIS_6/CMSIS/Core/Include" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra_gen" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra_cfg/fsp_cfg/bsp" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra_cfg/fsp_cfg" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra_cfg/aws" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra/tes/dave2d/inc" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra/fsp/src/r_mipi_csi" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra/fsp/src/r_vin" -std=c99 -Wno-stringop-overflow -Wno-format-truncation -flax-vector-conversions --param=min-pagesize=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" -x c "$<")
	@echo Building file: $< && arm-none-eabi-gcc @"$@.in"

