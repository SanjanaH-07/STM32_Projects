################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Drivers/STM32F4xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
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

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := stmcube_2.0.0__BT_project_App_code
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
stmcube_2.0.0__BT_project_App_code.elf \

MAP_FILES += \
stmcube_2.0.0__BT_project_App_code.map \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
stmcube_2.0.0__BT_project_App_code.list \

OBJCOPY_BIN += \
stmcube_2.0.0__BT_project_App_code.bin \


# All Target
all: main-build

# Main-build Target
main-build: stmcube_2.0.0__BT_project_App_code.elf secondary-outputs

# Tool invocations
stmcube_2.0.0__BT_project_App_code.elf stmcube_2.0.0__BT_project_App_code.map: $(OBJS) $(USER_OBJS) D:\stm\stmcube_2.0.0__BT_project_App_code\STM32F410RBTX_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -o "stmcube_2.0.0__BT_project_App_code.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"D:\stm\stmcube_2.0.0__BT_project_App_code\STM32F410RBTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="stmcube_2.0.0__BT_project_App_code.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

stmcube_2.0.0__BT_project_App_code.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "stmcube_2.0.0__BT_project_App_code.list"
	@echo 'Finished building: $@'
	@echo ' '

stmcube_2.0.0__BT_project_App_code.bin: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "stmcube_2.0.0__BT_project_App_code.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) default.size.stdout stmcube_2.0.0__BT_project_App_code.bin stmcube_2.0.0__BT_project_App_code.elf stmcube_2.0.0__BT_project_App_code.list stmcube_2.0.0__BT_project_App_code.map
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents main-build fail-specified-linker-script-missing warn-no-linker-script-specified

-include ../makefile.targets
