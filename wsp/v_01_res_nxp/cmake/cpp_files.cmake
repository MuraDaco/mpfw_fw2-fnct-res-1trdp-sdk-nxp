#   *******************************************************************************
#   
#   mpfw / fw2 - Multi Platform FirmWare FrameWork 
#       library that contains the wrapper code to manage the threads
#   Copyright (C) (2023) Marco Dau
#   
#   This program is free software: you can redistribute it and/or modify
#   it under the terms of the GNU Affero General Public License as published
#   by the Free Software Foundation, either version 3 of the License, or
#   (at your option) any later version.
#   
#   This program is distributed in the hope that it will be useful,
#   but WITHOUT ANY WARRANTY; without even the implied warranty of
#   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#   GNU Affero General Public License for more details.
#   
#   You should have received a copy of the GNU Affero General Public License
#   along with this program.  If not, see <https://www.gnu.org/licenses/>.
#   
#   You can contact me by the following email address
#   marco <d o t> ing <d o t> dau <a t> gmail <d o t> com
#   
#   *******************************************************************************

### ---------------------------
##
#   cpp_files.cmake
#
#   Created on: Aug, 26th 2025  (Tue)
#   Author: Marco Dau
##
### ---------------------------

include_guard()

    set(CURR_MOD_NAME       FNCT-RES-1TRDP-SDK-NXP)

    set(${CURR_MOD_NAME}_cmmn_SOURCE_FILES_CPP

        ${${CURR_MOD_NAME}_cmmn_SRC_DIR}/drivers/v_${RES_1TRDP_SDK_drivers_VER}/fsl_usart_mod.c
        ${${CURR_MOD_NAME}_cmmn_SRC_DIR}/drivers/v_${RES_1TRDP_SDK_drivers_VER}/rsSerialConnections.cpp

    )

