################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ra/tes/dave2d/src/dave_64bitoperation.c \
../ra/tes/dave2d/src/dave_base.c \
../ra/tes/dave2d/src/dave_blit.c \
../ra/tes/dave2d/src/dave_box.c \
../ra/tes/dave2d/src/dave_circle.c \
../ra/tes/dave2d/src/dave_context.c \
../ra/tes/dave2d/src/dave_curve.c \
../ra/tes/dave2d/src/dave_dlist.c \
../ra/tes/dave2d/src/dave_driver.c \
../ra/tes/dave2d/src/dave_edge.c \
../ra/tes/dave2d/src/dave_errorcodes.c \
../ra/tes/dave2d/src/dave_gradient.c \
../ra/tes/dave2d/src/dave_hardware.c \
../ra/tes/dave2d/src/dave_line.c \
../ra/tes/dave2d/src/dave_math.c \
../ra/tes/dave2d/src/dave_memory.c \
../ra/tes/dave2d/src/dave_pattern.c \
../ra/tes/dave2d/src/dave_perfcount.c \
../ra/tes/dave2d/src/dave_polyline.c \
../ra/tes/dave2d/src/dave_quad.c \
../ra/tes/dave2d/src/dave_rbuffer.c \
../ra/tes/dave2d/src/dave_render.c \
../ra/tes/dave2d/src/dave_texture.c \
../ra/tes/dave2d/src/dave_triangle.c \
../ra/tes/dave2d/src/dave_utility.c \
../ra/tes/dave2d/src/dave_viewport.c \
../ra/tes/dave2d/src/dave_wedge.c 

C_DEPS += \
./ra/tes/dave2d/src/dave_64bitoperation.d \
./ra/tes/dave2d/src/dave_base.d \
./ra/tes/dave2d/src/dave_blit.d \
./ra/tes/dave2d/src/dave_box.d \
./ra/tes/dave2d/src/dave_circle.d \
./ra/tes/dave2d/src/dave_context.d \
./ra/tes/dave2d/src/dave_curve.d \
./ra/tes/dave2d/src/dave_dlist.d \
./ra/tes/dave2d/src/dave_driver.d \
./ra/tes/dave2d/src/dave_edge.d \
./ra/tes/dave2d/src/dave_errorcodes.d \
./ra/tes/dave2d/src/dave_gradient.d \
./ra/tes/dave2d/src/dave_hardware.d \
./ra/tes/dave2d/src/dave_line.d \
./ra/tes/dave2d/src/dave_math.d \
./ra/tes/dave2d/src/dave_memory.d \
./ra/tes/dave2d/src/dave_pattern.d \
./ra/tes/dave2d/src/dave_perfcount.d \
./ra/tes/dave2d/src/dave_polyline.d \
./ra/tes/dave2d/src/dave_quad.d \
./ra/tes/dave2d/src/dave_rbuffer.d \
./ra/tes/dave2d/src/dave_render.d \
./ra/tes/dave2d/src/dave_texture.d \
./ra/tes/dave2d/src/dave_triangle.d \
./ra/tes/dave2d/src/dave_utility.d \
./ra/tes/dave2d/src/dave_viewport.d \
./ra/tes/dave2d/src/dave_wedge.d 

OBJS += \
./ra/tes/dave2d/src/dave_64bitoperation.o \
./ra/tes/dave2d/src/dave_base.o \
./ra/tes/dave2d/src/dave_blit.o \
./ra/tes/dave2d/src/dave_box.o \
./ra/tes/dave2d/src/dave_circle.o \
./ra/tes/dave2d/src/dave_context.o \
./ra/tes/dave2d/src/dave_curve.o \
./ra/tes/dave2d/src/dave_dlist.o \
./ra/tes/dave2d/src/dave_driver.o \
./ra/tes/dave2d/src/dave_edge.o \
./ra/tes/dave2d/src/dave_errorcodes.o \
./ra/tes/dave2d/src/dave_gradient.o \
./ra/tes/dave2d/src/dave_hardware.o \
./ra/tes/dave2d/src/dave_line.o \
./ra/tes/dave2d/src/dave_math.o \
./ra/tes/dave2d/src/dave_memory.o \
./ra/tes/dave2d/src/dave_pattern.o \
./ra/tes/dave2d/src/dave_perfcount.o \
./ra/tes/dave2d/src/dave_polyline.o \
./ra/tes/dave2d/src/dave_quad.o \
./ra/tes/dave2d/src/dave_rbuffer.o \
./ra/tes/dave2d/src/dave_render.o \
./ra/tes/dave2d/src/dave_texture.o \
./ra/tes/dave2d/src/dave_triangle.o \
./ra/tes/dave2d/src/dave_utility.o \
./ra/tes/dave2d/src/dave_viewport.o \
./ra/tes/dave2d/src/dave_wedge.o 

SREC += \
quickstart_ek_ra8p1_ep.srec 

MAP += \
quickstart_ek_ra8p1_ep.map 


# Each subdirectory must supply rules for building sources it contributes
ra/tes/dave2d/src/%.o: ../ra/tes/dave2d/src/%.c
	$(file > $@.in,-mfloat-abi=hard -mcpu=cortex-m85+nopacbti -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-strict-aliasing -Wunused -Wuninitialized -Wall -Wextra -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Wlogical-op -Waggregate-return -Wfloat-equal -g -D_RENESAS_RA_ -D_RA_ORDINAL=1 -D_RA_DEBUG_BUILD_ -D_RA_CORE=CPU0 -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/src" -I"." -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra/fsp/inc" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra/fsp/inc/api" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra/fsp/inc/instances" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra/fsp/src/rm_freertos_port" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra/aws/FreeRTOS/FreeRTOS/Source/include" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra/arm/CMSIS_6/CMSIS/Core/Include" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra_gen" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra_cfg/fsp_cfg/bsp" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra_cfg/fsp_cfg" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra_cfg/aws" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra/tes/dave2d/inc" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra/fsp/src/r_mipi_csi" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra/fsp/src/r_vin" -std=c99 -Wno-stringop-overflow -Wno-format-truncation -flax-vector-conversions --param=min-pagesize=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" -x c "$<")
	@echo Building file: $< && arm-none-eabi-gcc @"$@.in"

