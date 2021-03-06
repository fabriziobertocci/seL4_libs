/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 *
 * @TAG(DATA61_BSD)
 */
#pragma once

#include <platsupport/plat/serial.h>

#if defined(CONFIG_PLAT_SABRE)
    #define DEFAULT_SERIAL_PADDR UART2_PADDR
    #define DEFAULT_SERIAL_INTERRUPT UART2_IRQ
#elif defined(CONFIG_PLAT_WANDQ)
    #define DEFAULT_SERIAL_PADDR UART1_PADDR
    #define DEFAULT_SERIAL_INTERRUPT UART1_IRQ
#endif
