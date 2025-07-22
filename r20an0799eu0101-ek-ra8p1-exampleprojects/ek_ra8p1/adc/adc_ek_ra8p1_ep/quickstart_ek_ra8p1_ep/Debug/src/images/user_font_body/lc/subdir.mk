################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/images/user_font_body/lc/a.c \
../src/images/user_font_body/lc/b.c \
../src/images/user_font_body/lc/c.c \
../src/images/user_font_body/lc/d.c \
../src/images/user_font_body/lc/e.c \
../src/images/user_font_body/lc/f.c \
../src/images/user_font_body/lc/g.c \
../src/images/user_font_body/lc/h.c \
../src/images/user_font_body/lc/i.c \
../src/images/user_font_body/lc/j.c \
../src/images/user_font_body/lc/k.c \
../src/images/user_font_body/lc/l.c \
../src/images/user_font_body/lc/m.c \
../src/images/user_font_body/lc/n.c \
../src/images/user_font_body/lc/o.c \
../src/images/user_font_body/lc/p.c \
../src/images/user_font_body/lc/q.c \
../src/images/user_font_body/lc/r.c \
../src/images/user_font_body/lc/s.c \
../src/images/user_font_body/lc/t.c \
../src/images/user_font_body/lc/u.c \
../src/images/user_font_body/lc/v.c \
../src/images/user_font_body/lc/w.c \
../src/images/user_font_body/lc/x.c \
../src/images/user_font_body/lc/y.c \
../src/images/user_font_body/lc/z.c 

C_DEPS += \
./src/images/user_font_body/lc/a.d \
./src/images/user_font_body/lc/b.d \
./src/images/user_font_body/lc/c.d \
./src/images/user_font_body/lc/d.d \
./src/images/user_font_body/lc/e.d \
./src/images/user_font_body/lc/f.d \
./src/images/user_font_body/lc/g.d \
./src/images/user_font_body/lc/h.d \
./src/images/user_font_body/lc/i.d \
./src/images/user_font_body/lc/j.d \
./src/images/user_font_body/lc/k.d \
./src/images/user_font_body/lc/l.d \
./src/images/user_font_body/lc/m.d \
./src/images/user_font_body/lc/n.d \
./src/images/user_font_body/lc/o.d \
./src/images/user_font_body/lc/p.d \
./src/images/user_font_body/lc/q.d \
./src/images/user_font_body/lc/r.d \
./src/images/user_font_body/lc/s.d \
./src/images/user_font_body/lc/t.d \
./src/images/user_font_body/lc/u.d \
./src/images/user_font_body/lc/v.d \
./src/images/user_font_body/lc/w.d \
./src/images/user_font_body/lc/x.d \
./src/images/user_font_body/lc/y.d \
./src/images/user_font_body/lc/z.d 

OBJS += \
./src/images/user_font_body/lc/a.o \
./src/images/user_font_body/lc/b.o \
./src/images/user_font_body/lc/c.o \
./src/images/user_font_body/lc/d.o \
./src/images/user_font_body/lc/e.o \
./src/images/user_font_body/lc/f.o \
./src/images/user_font_body/lc/g.o \
./src/images/user_font_body/lc/h.o \
./src/images/user_font_body/lc/i.o \
./src/images/user_font_body/lc/j.o \
./src/images/user_font_body/lc/k.o \
./src/images/user_font_body/lc/l.o \
./src/images/user_font_body/lc/m.o \
./src/images/user_font_body/lc/n.o \
./src/images/user_font_body/lc/o.o \
./src/images/user_font_body/lc/p.o \
./src/images/user_font_body/lc/q.o \
./src/images/user_font_body/lc/r.o \
./src/images/user_font_body/lc/s.o \
./src/images/user_font_body/lc/t.o \
./src/images/user_font_body/lc/u.o \
./src/images/user_font_body/lc/v.o \
./src/images/user_font_body/lc/w.o \
./src/images/user_font_body/lc/x.o \
./src/images/user_font_body/lc/y.o \
./src/images/user_font_body/lc/z.o 

SREC += \
quickstart_ek_ra8p1_ep.srec 

MAP += \
quickstart_ek_ra8p1_ep.map 


# Each subdirectory must supply rules for building sources it contributes
src/images/user_font_body/lc/%.o: ../src/images/user_font_body/lc/%.c
	$(file > $@.in,-mfloat-abi=hard -mcpu=cortex-m85+nopacbti -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-strict-aliasing -Wunused -Wuninitialized -Wall -Wextra -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Wlogical-op -Waggregate-return -Wfloat-equal -g -D_RENESAS_RA_ -D_RA_ORDINAL=1 -D_RA_DEBUG_BUILD_ -D_RA_CORE=CPU0 -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/src" -I"." -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra/fsp/inc" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra/fsp/inc/api" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra/fsp/inc/instances" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra/fsp/src/rm_freertos_port" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra/aws/FreeRTOS/FreeRTOS/Source/include" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra/arm/CMSIS_6/CMSIS/Core/Include" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra_gen" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra_cfg/fsp_cfg/bsp" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra_cfg/fsp_cfg" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra_cfg/aws" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra/tes/dave2d/inc" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra/fsp/src/r_mipi_csi" -I"/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/ra/fsp/src/r_vin" -std=c99 -Wno-stringop-overflow -Wno-format-truncation -flax-vector-conversions --param=min-pagesize=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" -x c "$<")
	@echo Building file: $< && arm-none-eabi-gcc @"$@.in"

