################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/images/user_font_title/A.c \
../src/images/user_font_title/B.c \
../src/images/user_font_title/C.c \
../src/images/user_font_title/D.c \
../src/images/user_font_title/E.c \
../src/images/user_font_title/F.c \
../src/images/user_font_title/G.c \
../src/images/user_font_title/H.c \
../src/images/user_font_title/I.c \
../src/images/user_font_title/J.c \
../src/images/user_font_title/K.c \
../src/images/user_font_title/L.c \
../src/images/user_font_title/M.c \
../src/images/user_font_title/MINUS.c \
../src/images/user_font_title/N.c \
../src/images/user_font_title/O.c \
../src/images/user_font_title/P.c \
../src/images/user_font_title/Q.c \
../src/images/user_font_title/R.c \
../src/images/user_font_title/S.c \
../src/images/user_font_title/SPACE.c \
../src/images/user_font_title/T.c \
../src/images/user_font_title/U.c \
../src/images/user_font_title/UNDERSCORE.c \
../src/images/user_font_title/V.c \
../src/images/user_font_title/W.c \
../src/images/user_font_title/X.c \
../src/images/user_font_title/Y.c \
../src/images/user_font_title/Z.c \
../src/images/user_font_title/user_font_title_if.c 

C_DEPS += \
./src/images/user_font_title/A.d \
./src/images/user_font_title/B.d \
./src/images/user_font_title/C.d \
./src/images/user_font_title/D.d \
./src/images/user_font_title/E.d \
./src/images/user_font_title/F.d \
./src/images/user_font_title/G.d \
./src/images/user_font_title/H.d \
./src/images/user_font_title/I.d \
./src/images/user_font_title/J.d \
./src/images/user_font_title/K.d \
./src/images/user_font_title/L.d \
./src/images/user_font_title/M.d \
./src/images/user_font_title/MINUS.d \
./src/images/user_font_title/N.d \
./src/images/user_font_title/O.d \
./src/images/user_font_title/P.d \
./src/images/user_font_title/Q.d \
./src/images/user_font_title/R.d \
./src/images/user_font_title/S.d \
./src/images/user_font_title/SPACE.d \
./src/images/user_font_title/T.d \
./src/images/user_font_title/U.d \
./src/images/user_font_title/UNDERSCORE.d \
./src/images/user_font_title/V.d \
./src/images/user_font_title/W.d \
./src/images/user_font_title/X.d \
./src/images/user_font_title/Y.d \
./src/images/user_font_title/Z.d \
./src/images/user_font_title/user_font_title_if.d 

OBJS += \
./src/images/user_font_title/A.o \
./src/images/user_font_title/B.o \
./src/images/user_font_title/C.o \
./src/images/user_font_title/D.o \
./src/images/user_font_title/E.o \
./src/images/user_font_title/F.o \
./src/images/user_font_title/G.o \
./src/images/user_font_title/H.o \
./src/images/user_font_title/I.o \
./src/images/user_font_title/J.o \
./src/images/user_font_title/K.o \
./src/images/user_font_title/L.o \
./src/images/user_font_title/M.o \
./src/images/user_font_title/MINUS.o \
./src/images/user_font_title/N.o \
./src/images/user_font_title/O.o \
./src/images/user_font_title/P.o \
./src/images/user_font_title/Q.o \
./src/images/user_font_title/R.o \
./src/images/user_font_title/S.o \
./src/images/user_font_title/SPACE.o \
./src/images/user_font_title/T.o \
./src/images/user_font_title/U.o \
./src/images/user_font_title/UNDERSCORE.o \
./src/images/user_font_title/V.o \
./src/images/user_font_title/W.o \
./src/images/user_font_title/X.o \
./src/images/user_font_title/Y.o \
./src/images/user_font_title/Z.o \
./src/images/user_font_title/user_font_title_if.o 

SREC += \
quickstart_ek_ra8p1_ep.srec 

MAP += \
quickstart_ek_ra8p1_ep.map 


# Each subdirectory must supply rules for building sources it contributes
src/images/user_font_title/%.o: ../src/images/user_font_title/%.c
	$(file > $@.in,-mfloat-abi=hard -mcpu=cortex-m85+nopacbti -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-strict-aliasing -Wunused -Wuninitialized -Wall -Wextra -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Wlogical-op -Waggregate-return -Wfloat-equal -g -D_RENESAS_RA_ -D_RA_ORDINAL=1 -D_RA_DEBUG_BUILD_ -D_RA_CORE=CPU0 -I"/Users/kim_kyoungkun/Desktop/테크노니아/example 1/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/src" -I"." -I"/Users/kim_kyoungkun/Desktop/테크노니아/example 1/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra/fsp/inc" -I"/Users/kim_kyoungkun/Desktop/테크노니아/example 1/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra/fsp/inc/api" -I"/Users/kim_kyoungkun/Desktop/테크노니아/example 1/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra/fsp/inc/instances" -I"/Users/kim_kyoungkun/Desktop/테크노니아/example 1/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra/fsp/src/rm_freertos_port" -I"/Users/kim_kyoungkun/Desktop/테크노니아/example 1/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra/aws/FreeRTOS/FreeRTOS/Source/include" -I"/Users/kim_kyoungkun/Desktop/테크노니아/example 1/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra/arm/CMSIS_6/CMSIS/Core/Include" -I"/Users/kim_kyoungkun/Desktop/테크노니아/example 1/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra_gen" -I"/Users/kim_kyoungkun/Desktop/테크노니아/example 1/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra_cfg/fsp_cfg/bsp" -I"/Users/kim_kyoungkun/Desktop/테크노니아/example 1/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra_cfg/fsp_cfg" -I"/Users/kim_kyoungkun/Desktop/테크노니아/example 1/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra_cfg/aws" -I"/Users/kim_kyoungkun/Desktop/테크노니아/example 1/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra/tes/dave2d/inc" -I"/Users/kim_kyoungkun/Desktop/테크노니아/example 1/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra/fsp/src/r_mipi_csi" -I"/Users/kim_kyoungkun/Desktop/테크노니아/example 1/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/_quickstart/quickstart_ek_ra8p1_ep/e2studio/ra/fsp/src/r_vin" -std=c99 -Wno-stringop-overflow -Wno-format-truncation -flax-vector-conversions --param=min-pagesize=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" -x c "$<")
	@echo Building file: $< && arm-none-eabi-gcc @"$@.in"

