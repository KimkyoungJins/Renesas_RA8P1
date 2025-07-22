################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/images/user_font_body/uc/A.c \
../src/images/user_font_body/uc/B.c \
../src/images/user_font_body/uc/C.c \
../src/images/user_font_body/uc/D.c \
../src/images/user_font_body/uc/E.c \
../src/images/user_font_body/uc/F.c \
../src/images/user_font_body/uc/G.c \
../src/images/user_font_body/uc/H.c \
../src/images/user_font_body/uc/I.c \
../src/images/user_font_body/uc/J.c \
../src/images/user_font_body/uc/K.c \
../src/images/user_font_body/uc/L.c \
../src/images/user_font_body/uc/M.c \
../src/images/user_font_body/uc/N.c \
../src/images/user_font_body/uc/O.c \
../src/images/user_font_body/uc/P.c \
../src/images/user_font_body/uc/Q.c \
../src/images/user_font_body/uc/R.c \
../src/images/user_font_body/uc/S.c \
../src/images/user_font_body/uc/T.c \
../src/images/user_font_body/uc/U.c \
../src/images/user_font_body/uc/V.c \
../src/images/user_font_body/uc/W.c \
../src/images/user_font_body/uc/X.c \
../src/images/user_font_body/uc/Y.c \
../src/images/user_font_body/uc/Z.c 

C_DEPS += \
./src/images/user_font_body/uc/A.d \
./src/images/user_font_body/uc/B.d \
./src/images/user_font_body/uc/C.d \
./src/images/user_font_body/uc/D.d \
./src/images/user_font_body/uc/E.d \
./src/images/user_font_body/uc/F.d \
./src/images/user_font_body/uc/G.d \
./src/images/user_font_body/uc/H.d \
./src/images/user_font_body/uc/I.d \
./src/images/user_font_body/uc/J.d \
./src/images/user_font_body/uc/K.d \
./src/images/user_font_body/uc/L.d \
./src/images/user_font_body/uc/M.d \
./src/images/user_font_body/uc/N.d \
./src/images/user_font_body/uc/O.d \
./src/images/user_font_body/uc/P.d \
./src/images/user_font_body/uc/Q.d \
./src/images/user_font_body/uc/R.d \
./src/images/user_font_body/uc/S.d \
./src/images/user_font_body/uc/T.d \
./src/images/user_font_body/uc/U.d \
./src/images/user_font_body/uc/V.d \
./src/images/user_font_body/uc/W.d \
./src/images/user_font_body/uc/X.d \
./src/images/user_font_body/uc/Y.d \
./src/images/user_font_body/uc/Z.d 

OBJS += \
./src/images/user_font_body/uc/A.o \
./src/images/user_font_body/uc/B.o \
./src/images/user_font_body/uc/C.o \
./src/images/user_font_body/uc/D.o \
./src/images/user_font_body/uc/E.o \
./src/images/user_font_body/uc/F.o \
./src/images/user_font_body/uc/G.o \
./src/images/user_font_body/uc/H.o \
./src/images/user_font_body/uc/I.o \
./src/images/user_font_body/uc/J.o \
./src/images/user_font_body/uc/K.o \
./src/images/user_font_body/uc/L.o \
./src/images/user_font_body/uc/M.o \
./src/images/user_font_body/uc/N.o \
./src/images/user_font_body/uc/O.o \
./src/images/user_font_body/uc/P.o \
./src/images/user_font_body/uc/Q.o \
./src/images/user_font_body/uc/R.o \
./src/images/user_font_body/uc/S.o \
./src/images/user_font_body/uc/T.o \
./src/images/user_font_body/uc/U.o \
./src/images/user_font_body/uc/V.o \
./src/images/user_font_body/uc/W.o \
./src/images/user_font_body/uc/X.o \
./src/images/user_font_body/uc/Y.o \
./src/images/user_font_body/uc/Z.o 

SREC += \
e2studio.srec 

MAP += \
e2studio.map 


# Each subdirectory must supply rules for building sources it contributes
src/images/user_font_body/uc/%.o: ../src/images/user_font_body/uc/%.c
	$(file > $@.in,-mfloat-abi=hard -mcpu=cortex-m85+nopacbti -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-strict-aliasing -Wunused -Wuninitialized -Wall -Wextra -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Wlogical-op -Waggregate-return -Wfloat-equal -g -D_RENESAS_RA_ -D_RA_ORDINAL=1 -D_RA_DEBUG_BUILD_ -D_RA_CORE=CPU0 -I"/Users/kim_kyoungkun/Desktop/technonia/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/src" -I"." -I"/Users/kim_kyoungkun/Desktop/technonia/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra/fsp/inc" -I"/Users/kim_kyoungkun/Desktop/technonia/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra/fsp/inc/api" -I"/Users/kim_kyoungkun/Desktop/technonia/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra/fsp/inc/instances" -I"/Users/kim_kyoungkun/Desktop/technonia/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra/fsp/src/rm_freertos_port" -I"/Users/kim_kyoungkun/Desktop/technonia/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra/aws/FreeRTOS/FreeRTOS/Source/include" -I"/Users/kim_kyoungkun/Desktop/technonia/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra/arm/CMSIS_6/CMSIS/Core/Include" -I"/Users/kim_kyoungkun/Desktop/technonia/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra_gen" -I"/Users/kim_kyoungkun/Desktop/technonia/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra_cfg/fsp_cfg/bsp" -I"/Users/kim_kyoungkun/Desktop/technonia/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra_cfg/fsp_cfg" -I"/Users/kim_kyoungkun/Desktop/technonia/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra_cfg/aws" -I"/Users/kim_kyoungkun/Desktop/technonia/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra/tes/dave2d/inc" -I"/Users/kim_kyoungkun/Desktop/technonia/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra/fsp/src/r_mipi_csi" -I"/Users/kim_kyoungkun/Desktop/technonia/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra/fsp/src/r_vin" -std=c99 -Wno-stringop-overflow -Wno-format-truncation -flax-vector-conversions --param=min-pagesize=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" -x c "$<")
	@echo Building file: $< && arm-none-eabi-gcc @"$@.in"

