/*
 * Copyright (c) 2016, Freescale Semiconductor, Inc.
 * Copyright 2016-2019 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#ifndef _FSL_USART_MOD_H_
#define _FSL_USART_MOD_H_

#include <fsl_usart.h>

// PROTOCOL SECTION - START

// protocol definitions
typedef void    (*callback_protocol_x_buffer_management_t)  (void* p_ptrData);
typedef uint8_t (*callback_protocol_status_get_t)           (void);
typedef void    (*callback_protocol_status_set_t)           (void);

typedef struct _callback_protocol_functions {
    callback_protocol_x_buffer_management_t tx_buffer_management;
    callback_protocol_x_buffer_management_t rx_buffer_management;

    callback_protocol_status_get_t          tx_status_get__running;
    callback_protocol_status_get_t          tx_status_get__completed;
    callback_protocol_status_get_t          rx_status_get__running;
    callback_protocol_status_get_t          rx_status_get__completed;

    callback_protocol_status_set_t          tx_status_set__free;
    callback_protocol_status_set_t          rx_status_set__free;
    callback_protocol_status_set_t          tx_status_set__running;
    callback_protocol_status_set_t          rx_status_set__running;

    callback_protocol_status_get_t          rx_status_get__free;
    callback_protocol_status_set_t          tx_status_set__completed;
} callback_protocol_functions_t;

extern callback_protocol_functions_t g_callback_protocol_functions;

// PROTOCOL SECTION - END

#define SDK_USART_TX_STATUS__FREE               0 // 
#define SDK_USART_TX_STATUS__RUNNING	        1 // kUSART_TxBusy
#define SDK_USART_TX_STATUS__SEND_COMPLETED     2 // kUSART_TxIdle
#define SDK_USART_RX_STATUS__FREE               0
#define SDK_USART_RX_STATUS__RUNNING            3 // kUSART_RxBusy
#define SDK_USART_RX_STATUS__READY_TO_READ      4 // kUSART_RxIdle

#if defined(__cplusplus)
extern "C" {
#endif /* _cplusplus */

void buffer_init(callback_protocol_functions_t* p_ptrCallbacks);

void buffer_management(USART_Type *base, usart_handle_t *handle, char c);

void buffer_management_end(USART_Type *base, usart_handle_t *handle, char c);

status_t USART_tx_enable    (USART_Type *base);
status_t USART_rx_enable    (USART_Type *base);
void USART_tx_disable   (void* p_ptrData);
void USART_rx_disable   (void* p_ptrData);

void    USART_reg_write       (void* p_ptrData, char p_data);
uint8_t USART_reg_read        (void* p_ptrData);




#if defined(__cplusplus)
}
#endif

/*! @}*/

#endif /* _FSL_USART_MOD_H_ */
