/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'nios2_gen2_0' in SOPC Builder design 'calculator_final'
 * SOPC Builder design path: ../../calculator_final.sopcinfo
 *
 * Generated: Thu Dec 12 14:41:24 EST 2019
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x00008820
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "fast"
#define ALT_CPU_DATA_ADDR_WIDTH 0x10
#define ALT_CPU_DCACHE_BYPASS_MASK 0x80000000
#define ALT_CPU_DCACHE_LINE_SIZE 32
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_DCACHE_SIZE 2048
#define ALT_CPU_EXCEPTION_ADDR 0x00004020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 1
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_EXTRA_EXCEPTION_INFO
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 32
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_ICACHE_SIZE 4096
#define ALT_CPU_INITDA_SUPPORTED
#define ALT_CPU_INST_ADDR_WIDTH 0x10
#define ALT_CPU_NAME "nios2_gen2_0"
#define ALT_CPU_NUM_OF_SHADOW_REG_SETS 0
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x00004000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x00008820
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "fast"
#define NIOS2_DATA_ADDR_WIDTH 0x10
#define NIOS2_DCACHE_BYPASS_MASK 0x80000000
#define NIOS2_DCACHE_LINE_SIZE 32
#define NIOS2_DCACHE_LINE_SIZE_LOG2 5
#define NIOS2_DCACHE_SIZE 2048
#define NIOS2_EXCEPTION_ADDR 0x00004020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 1
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_EXTRA_EXCEPTION_INFO
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 32
#define NIOS2_ICACHE_LINE_SIZE_LOG2 5
#define NIOS2_ICACHE_SIZE 4096
#define NIOS2_INITDA_SUPPORTED
#define NIOS2_INST_ADDR_WIDTH 0x10
#define NIOS2_NUM_OF_SHADOW_REG_SETS 0
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x00004000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_NIOS2_GEN2


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone IV E"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/jtag_uart_0"
#define ALT_STDERR_BASE 0x9070
#define ALT_STDERR_DEV jtag_uart_0
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag_uart_0"
#define ALT_STDIN_BASE 0x9070
#define ALT_STDIN_DEV jtag_uart_0
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag_uart_0"
#define ALT_STDOUT_BASE 0x9070
#define ALT_STDOUT_DEV jtag_uart_0
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "calculator_final"


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 4
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK none


/*
 * input_1 configuration
 *
 */

#define ALT_MODULE_CLASS_input_1 altera_avalon_pio
#define INPUT_1_BASE 0x9060
#define INPUT_1_BIT_CLEARING_EDGE_REGISTER 0
#define INPUT_1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define INPUT_1_CAPTURE 0
#define INPUT_1_DATA_WIDTH 4
#define INPUT_1_DO_TEST_BENCH_WIRING 0
#define INPUT_1_DRIVEN_SIM_VALUE 0
#define INPUT_1_EDGE_TYPE "NONE"
#define INPUT_1_FREQ 50000000
#define INPUT_1_HAS_IN 1
#define INPUT_1_HAS_OUT 0
#define INPUT_1_HAS_TRI 0
#define INPUT_1_IRQ -1
#define INPUT_1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define INPUT_1_IRQ_TYPE "NONE"
#define INPUT_1_NAME "/dev/input_1"
#define INPUT_1_RESET_VALUE 0
#define INPUT_1_SPAN 16
#define INPUT_1_TYPE "altera_avalon_pio"


/*
 * input_2 configuration
 *
 */

#define ALT_MODULE_CLASS_input_2 altera_avalon_pio
#define INPUT_2_BASE 0x9050
#define INPUT_2_BIT_CLEARING_EDGE_REGISTER 0
#define INPUT_2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define INPUT_2_CAPTURE 0
#define INPUT_2_DATA_WIDTH 4
#define INPUT_2_DO_TEST_BENCH_WIRING 0
#define INPUT_2_DRIVEN_SIM_VALUE 0
#define INPUT_2_EDGE_TYPE "NONE"
#define INPUT_2_FREQ 50000000
#define INPUT_2_HAS_IN 1
#define INPUT_2_HAS_OUT 0
#define INPUT_2_HAS_TRI 0
#define INPUT_2_IRQ -1
#define INPUT_2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define INPUT_2_IRQ_TYPE "NONE"
#define INPUT_2_NAME "/dev/input_2"
#define INPUT_2_RESET_VALUE 0
#define INPUT_2_SPAN 16
#define INPUT_2_TYPE "altera_avalon_pio"


/*
 * input_3 configuration
 *
 */

#define ALT_MODULE_CLASS_input_3 altera_avalon_pio
#define INPUT_3_BASE 0x9040
#define INPUT_3_BIT_CLEARING_EDGE_REGISTER 0
#define INPUT_3_BIT_MODIFYING_OUTPUT_REGISTER 0
#define INPUT_3_CAPTURE 0
#define INPUT_3_DATA_WIDTH 1
#define INPUT_3_DO_TEST_BENCH_WIRING 0
#define INPUT_3_DRIVEN_SIM_VALUE 0
#define INPUT_3_EDGE_TYPE "NONE"
#define INPUT_3_FREQ 50000000
#define INPUT_3_HAS_IN 1
#define INPUT_3_HAS_OUT 0
#define INPUT_3_HAS_TRI 0
#define INPUT_3_IRQ -1
#define INPUT_3_IRQ_INTERRUPT_CONTROLLER_ID -1
#define INPUT_3_IRQ_TYPE "NONE"
#define INPUT_3_NAME "/dev/input_3"
#define INPUT_3_RESET_VALUE 0
#define INPUT_3_SPAN 16
#define INPUT_3_TYPE "altera_avalon_pio"


/*
 * input_4 configuration
 *
 */

#define ALT_MODULE_CLASS_input_4 altera_avalon_pio
#define INPUT_4_BASE 0x9030
#define INPUT_4_BIT_CLEARING_EDGE_REGISTER 0
#define INPUT_4_BIT_MODIFYING_OUTPUT_REGISTER 0
#define INPUT_4_CAPTURE 0
#define INPUT_4_DATA_WIDTH 1
#define INPUT_4_DO_TEST_BENCH_WIRING 0
#define INPUT_4_DRIVEN_SIM_VALUE 0
#define INPUT_4_EDGE_TYPE "NONE"
#define INPUT_4_FREQ 50000000
#define INPUT_4_HAS_IN 1
#define INPUT_4_HAS_OUT 0
#define INPUT_4_HAS_TRI 0
#define INPUT_4_IRQ -1
#define INPUT_4_IRQ_INTERRUPT_CONTROLLER_ID -1
#define INPUT_4_IRQ_TYPE "NONE"
#define INPUT_4_NAME "/dev/input_4"
#define INPUT_4_RESET_VALUE 0
#define INPUT_4_SPAN 16
#define INPUT_4_TYPE "altera_avalon_pio"


/*
 * input_5 configuration
 *
 */

#define ALT_MODULE_CLASS_input_5 altera_avalon_pio
#define INPUT_5_BASE 0x9020
#define INPUT_5_BIT_CLEARING_EDGE_REGISTER 0
#define INPUT_5_BIT_MODIFYING_OUTPUT_REGISTER 0
#define INPUT_5_CAPTURE 0
#define INPUT_5_DATA_WIDTH 1
#define INPUT_5_DO_TEST_BENCH_WIRING 0
#define INPUT_5_DRIVEN_SIM_VALUE 0
#define INPUT_5_EDGE_TYPE "NONE"
#define INPUT_5_FREQ 50000000
#define INPUT_5_HAS_IN 1
#define INPUT_5_HAS_OUT 0
#define INPUT_5_HAS_TRI 0
#define INPUT_5_IRQ -1
#define INPUT_5_IRQ_INTERRUPT_CONTROLLER_ID -1
#define INPUT_5_IRQ_TYPE "NONE"
#define INPUT_5_NAME "/dev/input_5"
#define INPUT_5_RESET_VALUE 0
#define INPUT_5_SPAN 16
#define INPUT_5_TYPE "altera_avalon_pio"


/*
 * input_6 configuration
 *
 */

#define ALT_MODULE_CLASS_input_6 altera_avalon_pio
#define INPUT_6_BASE 0x9010
#define INPUT_6_BIT_CLEARING_EDGE_REGISTER 0
#define INPUT_6_BIT_MODIFYING_OUTPUT_REGISTER 0
#define INPUT_6_CAPTURE 0
#define INPUT_6_DATA_WIDTH 1
#define INPUT_6_DO_TEST_BENCH_WIRING 0
#define INPUT_6_DRIVEN_SIM_VALUE 0
#define INPUT_6_EDGE_TYPE "NONE"
#define INPUT_6_FREQ 50000000
#define INPUT_6_HAS_IN 1
#define INPUT_6_HAS_OUT 0
#define INPUT_6_HAS_TRI 0
#define INPUT_6_IRQ -1
#define INPUT_6_IRQ_INTERRUPT_CONTROLLER_ID -1
#define INPUT_6_IRQ_TYPE "NONE"
#define INPUT_6_NAME "/dev/input_6"
#define INPUT_6_RESET_VALUE 0
#define INPUT_6_SPAN 16
#define INPUT_6_TYPE "altera_avalon_pio"


/*
 * jtag_uart_0 configuration
 *
 */

#define ALT_MODULE_CLASS_jtag_uart_0 altera_avalon_jtag_uart
#define JTAG_UART_0_BASE 0x9070
#define JTAG_UART_0_IRQ 0
#define JTAG_UART_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_0_NAME "/dev/jtag_uart_0"
#define JTAG_UART_0_READ_DEPTH 64
#define JTAG_UART_0_READ_THRESHOLD 8
#define JTAG_UART_0_SPAN 8
#define JTAG_UART_0_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_0_WRITE_DEPTH 64
#define JTAG_UART_0_WRITE_THRESHOLD 8


/*
 * onchip_memory2_0 configuration
 *
 */

#define ALT_MODULE_CLASS_onchip_memory2_0 altera_avalon_onchip_memory2
#define ONCHIP_MEMORY2_0_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define ONCHIP_MEMORY2_0_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define ONCHIP_MEMORY2_0_BASE 0x4000
#define ONCHIP_MEMORY2_0_CONTENTS_INFO ""
#define ONCHIP_MEMORY2_0_DUAL_PORT 0
#define ONCHIP_MEMORY2_0_GUI_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_MEMORY2_0_INIT_CONTENTS_FILE "calculator_final_onchip_memory2_0"
#define ONCHIP_MEMORY2_0_INIT_MEM_CONTENT 1
#define ONCHIP_MEMORY2_0_INSTANCE_ID "NONE"
#define ONCHIP_MEMORY2_0_IRQ -1
#define ONCHIP_MEMORY2_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ONCHIP_MEMORY2_0_NAME "/dev/onchip_memory2_0"
#define ONCHIP_MEMORY2_0_NON_DEFAULT_INIT_FILE_ENABLED 0
#define ONCHIP_MEMORY2_0_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_MEMORY2_0_READ_DURING_WRITE_MODE "DONT_CARE"
#define ONCHIP_MEMORY2_0_SINGLE_CLOCK_OP 0
#define ONCHIP_MEMORY2_0_SIZE_MULTIPLE 1
#define ONCHIP_MEMORY2_0_SIZE_VALUE 16384
#define ONCHIP_MEMORY2_0_SPAN 16384
#define ONCHIP_MEMORY2_0_TYPE "altera_avalon_onchip_memory2"
#define ONCHIP_MEMORY2_0_WRITABLE 1


/*
 * output_all configuration
 *
 */

#define ALT_MODULE_CLASS_output_all altera_avalon_pio
#define OUTPUT_ALL_BASE 0x9000
#define OUTPUT_ALL_BIT_CLEARING_EDGE_REGISTER 0
#define OUTPUT_ALL_BIT_MODIFYING_OUTPUT_REGISTER 0
#define OUTPUT_ALL_CAPTURE 0
#define OUTPUT_ALL_DATA_WIDTH 8
#define OUTPUT_ALL_DO_TEST_BENCH_WIRING 0
#define OUTPUT_ALL_DRIVEN_SIM_VALUE 0
#define OUTPUT_ALL_EDGE_TYPE "NONE"
#define OUTPUT_ALL_FREQ 50000000
#define OUTPUT_ALL_HAS_IN 0
#define OUTPUT_ALL_HAS_OUT 1
#define OUTPUT_ALL_HAS_TRI 0
#define OUTPUT_ALL_IRQ -1
#define OUTPUT_ALL_IRQ_INTERRUPT_CONTROLLER_ID -1
#define OUTPUT_ALL_IRQ_TYPE "NONE"
#define OUTPUT_ALL_NAME "/dev/output_all"
#define OUTPUT_ALL_RESET_VALUE 0
#define OUTPUT_ALL_SPAN 16
#define OUTPUT_ALL_TYPE "altera_avalon_pio"

#endif /* __SYSTEM_H_ */
