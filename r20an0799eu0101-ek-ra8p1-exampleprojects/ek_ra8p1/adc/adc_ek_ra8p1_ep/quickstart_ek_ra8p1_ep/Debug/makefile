################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

-include makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/images/user_font_title/subdir.mk
-include src/images/user_font_body/uc/subdir.mk
-include src/images/user_font_body/lc/subdir.mk
-include src/images/user_font_body/subdir.mk
-include src/images/overlays/subdir.mk
-include src/images/backgrounds/subdir.mk
-include src/subdir.mk
-include ra_gen/subdir.mk
-include ra/tes/dave2d/src/subdir.mk
-include ra/fsp/src/rm_freertos_port/subdir.mk
-include ra/fsp/src/r_vin/subdir.mk
-include ra/fsp/src/r_sci_b_uart/subdir.mk
-include ra/fsp/src/r_ospi_b/subdir.mk
-include ra/fsp/src/r_mipi_phy/subdir.mk
-include ra/fsp/src/r_mipi_csi/subdir.mk
-include ra/fsp/src/r_ioport/subdir.mk
-include ra/fsp/src/r_iic_master/subdir.mk
-include ra/fsp/src/r_icu/subdir.mk
-include ra/fsp/src/r_gpt/subdir.mk
-include ra/fsp/src/r_glcdc/subdir.mk
-include ra/fsp/src/r_drw/subdir.mk
-include ra/fsp/src/r_adc_b/subdir.mk
-include ra/fsp/src/bsp/mcu/ra8p1/subdir.mk
-include ra/fsp/src/bsp/mcu/all/subdir.mk
-include ra/fsp/src/bsp/cmsis/Device/RENESAS/Source/subdir.mk
-include ra/board/ra8p1_ek/subdir.mk
-include ra/aws/FreeRTOS/FreeRTOS/Source/portable/MemMang/subdir.mk
-include ra/aws/FreeRTOS/FreeRTOS/Source/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(SX_DEPS)),)
-include $(SX_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(SX_UPPER_DEPS)),)
-include $(SX_UPPER_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
SECONDARY_FLASH += \
quickstart_ek_ra8p1_ep.hex \

SECONDARY_SIZE += \
quickstart_ek_ra8p1_ep.siz \


# All Target
all: quickstart_ek_ra8p1_ep.elf secondary-outputs

# Tool invocations
quickstart_ek_ra8p1_ep.elf: $(OBJS) $(USER_OBJS) $(LINKER_SCRIPT)
	$(file > quickstart_ek_ra8p1_ep.elf.in,-mfloat-abi=hard -mcpu=cortex-m85+nopacbti -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-strict-aliasing -Wunused -Wuninitialized -Wall -Wextra -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Wlogical-op -Waggregate-return -Wfloat-equal -g -T "fsp.ld" -Xlinker --gc-sections -L "/Users/kim_kyoungkun/Desktop/테크노니아/r20an0799eu0101-ek-ra8p1-exampleprojects/ek_ra8p1/adc/adc_ek_ra8p1_ep/quickstart_ek_ra8p1_ep/script" -Wl,-Map,"quickstart_ek_ra8p1_ep.map" --specs=nano.specs -o "quickstart_ek_ra8p1_ep.elf" -Wl,--start-group $(OBJS) $(USER_OBJS) $(LIBS) -Wl,--end-group)
	@echo Building target: $@ && arm-none-eabi-gcc @"quickstart_ek_ra8p1_ep.elf.in"
quickstart_ek_ra8p1_ep.hex: quickstart_ek_ra8p1_ep.elf
	arm-none-eabi-objcopy -O ihex "quickstart_ek_ra8p1_ep.elf"  "quickstart_ek_ra8p1_ep.hex"
quickstart_ek_ra8p1_ep.siz: quickstart_ek_ra8p1_ep.elf
	arm-none-eabi-size --format=berkeley "quickstart_ek_ra8p1_ep.elf"
# Other Targets
clean:
	-$(file > clean_file.tmp,  $(C_UPPER_DEPS)  $(SECONDARY_SIZE)  $(S_DEPS)  $(C_DEPS)  $(SX_DEPS)  $(ASM_UPPER_DEPS)  $(SX_UPPER_DEPS)  $(OBJS)  $(SECONDARY_FLASH)  $(ASM_DEPS)  $(SREC)  $(S_UPPER_DEPS)  $(MAP) )
	-@ xargs -P 2 -s 32000 -t -a clean_file.tmp $(RM)
	-@$(RM) clean_file.tmp
	-$(RM)  quickstart_ek_ra8p1_ep.elf
	-@echo ' '

secondary-outputs: $(SECONDARY_FLASH) $(SECONDARY_SIZE)

.PHONY: all clean dependents

-include ../makefile.targets
