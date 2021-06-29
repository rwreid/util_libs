/*
 * Copyright 2019, Data61, CSIRO (ABN 41 687 119 230)
 * Copyright 2021, Robert Reid github.com/rwreid
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#define UART0_PADDR     0xffd00000
#define UART1_PADDR     0xffd00000
#define UART2_PADDR     0xffd00000
#define UART0_AO_PADDR  0xff800000
#define UART2_AO_PADDR  0xff800000

#define UART0_OFFSET    0x24000    /* 0x9000*4 */
#define UART1_OFFSET    0x23000    /* 0x8c00*4 */
#define UART2_OFFSET    0x22000    /* 0x8800*4 */
#define UART0_AO_OFFSET 0x3000     /* Memory Map 0xff803000 - 0xff803fff, dts soc/bus/serial@3000 */
#define UART2_AO_OFFSET 0x4000     /* Memory Map 0xff804000 - 0xff804fff, dts soc/bus/serial@4000 */

#define UART0_IRQ       58
#define UART1_IRQ       107
#define UART2_IRQ       125
#define UART0_AO_IRQ    225
#define UART2_AO_IRQ    229

enum chardev_id {
    UART0,
    UART1,
    UART2,
    UART0_AO,
    UART2_AO,
    /* Aliases */
    PS_SERIAL0 = UART0,
    PS_SERIAL1 = UART1,
    PS_SERIAL2 = UART2,
    PS_SERIAL3 = UART0_AO,
    PS_SERIAL4 = UART2_AO,
    /* defaults */
    PS_SERIAL_DEFAULT = PS_SERIAL3
};

#define DEFAULT_SERIAL_PADDR UART0_AO_PADDR
#define DEFAULT_SERIAL_INTERRUPT UART0_AO_IRQ
