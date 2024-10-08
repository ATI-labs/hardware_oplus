/*
 * Copyright (C) 2022-2024 The LineageOS Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <sys/ioctl.h>

#define OPLUS_PANEL_IOCTL_BASE 'o'

#define PANEL_IOCTL_SET_SEED _IOW(OPLUS_PANEL_IOCTL_BASE, 0x03, unsigned int)
#define PANEL_IOCTL_GET_SEED _IOWR(OPLUS_PANEL_IOCTL_BASE, 0x04, unsigned int)
#define PANEL_IOCTL_SET_HBM _IOW(OPLUS_PANEL_IOCTL_BASE, 0x0F, unsigned int)
#define PANEL_IOCTL_GET_HBM _IOWR(OPLUS_PANEL_IOCTL_BASE, 0x10, unsigned int)
#define PANEL_IOCTL_SET_DIMLAYER_HBM _IOW(OPLUS_PANEL_IOCTL_BASE, 0x1F, unsigned int)
#define PANEL_IOCTL_SET_DIMLAYER_BL_EN _IOW(OPLUS_PANEL_IOCTL_BASE, 0x21, unsigned int)
#define PANEL_IOCTL_GET_DIMLAYER_BL_EN _IOWR(OPLUS_PANEL_IOCTL_BASE, 0x22, unsigned int)
#define PANEL_IOCTL_SET_FP_PRESS _IOW(OPLUS_PANEL_IOCTL_BASE, 0x29, unsigned int)
#define PANEL_IOCTL_SET_CABC_STATUS _IOW(OPLUS_PANEL_IOCTL_BASE, 0x59, unsigned int)
#define PANEL_IOCTL_GET_CABC_STATUS _IOWR(OPLUS_PANEL_IOCTL_BASE, 0x5A, unsigned int)
