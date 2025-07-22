################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

-include makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/subdir.mk
-include ra_gen/subdir.mk
-include ra/fsp/src/r_ioport/subdir.mk
-include ra/fsp/src/bsp/mcu/ra8p1/subdir.mk
-include ra/fsp/src/bsp/mcu/all/subdir.mk
-include ra/fsp/src/bsp/cmsis/Device/RENESAS/Source/subdir.mk
-include ra/board/ra8p1_ek/subdir.mk
-include ra/arm/CMSIS_6/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(SX_DEPS)),)
-include $(SX_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(SX_UPPER_DEPS)),)
-include $(SX_UPPER_DEPS)
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
$(C_DEPS):$(SMS_ASM)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
OBJCOPY += \
ledtests_CPU1.srec \

SECONDARY_SIZE += \
ledtests_CPU1.siz \


# All Target
all: ledtests_CPU1.elf secondary-outputs

# Tool invocations
ledtests_CPU1.elf: $(OBJS) $(USER_OBJS) $(LIBRARY_GENERATOR_OUTPUTTYPE_OUTPUTS) $(LINKER_SCRIPT)
	$(file > ledtests_CPU1.elf.in,-mcpu=cortex-m33 -mthumb -mlittle-endian -mfloat-abi=hard -mfpu=fpv5-sp-d16 -O2 -ffunction-sections -fdata-sections -fno-strict-aliasing -fmessage-length=0 -funsigned-char -Wunused -Wuninitialized -Wall -Wextra -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Waggregate-return -Wno-parentheses-equality -Wfloat-equal -g3 -o "ledtests_CPU1.elf" $(OBJS) $(USER_OBJS) -T "fsp.lld" -L"/Users/kim_kyoungkun/Desktop/technonia/ledtests_CPU1/script" -L"/Users/kim_kyoungkun/Desktop/technonia/ledtests_CPU1/Debug" -Wl,-Map=ledtests_CPU1.map -Wl,--start-group -lcrt0 -lc++abi  -Wl,--end-group -Wl,--gc-sections -Wl,--cref -Wl,-z,norelro -Wl,--icf=none -I"/Users/kim_kyoungkun/Desktop/technonia/ledtests_CPU1/src" -I"." -I"/Users/kim_kyoungkun/Desktop/technonia/ledtests_CPU1/ra/fsp/inc" -I"/Users/kim_kyoungkun/Desktop/technonia/ledtests_CPU1/ra/fsp/inc/api" -I"/Users/kim_kyoungkun/Desktop/technonia/ledtests_CPU1/ra/fsp/inc/instances" -I"/Users/kim_kyoungkun/Desktop/technonia/ledtests_CPU1/ra/arm/CMSIS_6/CMSIS/Core/Include" -I"/Users/kim_kyoungkun/Desktop/technonia/ledtests_CPU1/ra_gen" -I"/Users/kim_kyoungkun/Desktop/technonia/ledtests_CPU1/ra_cfg/fsp_cfg/bsp" -I"/Users/kim_kyoungkun/Desktop/technonia/ledtests_CPU1/ra_cfg/fsp_cfg")
	@echo Building target: $@ && clang  --target=arm-none-eabi @"ledtests_CPU1.elf.in"> ledtests_CPU1.cref
ledtests_CPU1.srec: ledtests_CPU1.elf
	llvm-objcopy "ledtests_CPU1.elf" -O srec  "ledtests_CPU1.srec"
ledtests_CPU1.siz: ledtests_CPU1.elf
	llvm-size --format=berkeley "ledtests_CPU1.elf"
# Other Targets
clean:
	-$(file > clean_file.tmp,  $(C_UPPER_DEPS)  $(SECONDARY_SIZE)  $(S_DEPS)  $(C_DEPS)  $(CREF)  $(OBJCOPY)  $(SX_DEPS)  $(ASM_UPPER_DEPS)  $(OBJS)  $(SX_UPPER_DEPS)  $(ASM_DEPS)  $(MAP)  $(S_UPPER_DEPS) )
	-@ xargs -P 2 -s 32000 -t -a clean_file.tmp $(RM)
	-@$(RM) clean_file.tmp
	-$(RM)  ledtests_CPU1.elf
	-@echo ' '

secondary-outputs: $(OBJCOPY) $(SECONDARY_SIZE)

.PHONY: all clean dependents 

-include ../makefile.targets
