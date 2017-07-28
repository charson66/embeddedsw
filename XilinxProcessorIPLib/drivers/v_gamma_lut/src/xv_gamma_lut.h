// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.4
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
//
// ==============================================================

#ifndef XV_GAMMA_LUT_H
#define XV_GAMMA_LUT_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#ifndef __linux__
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#else
#include <stdint.h>
#include <assert.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stddef.h>
#endif
#include "xv_gamma_lut_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Ctrl_BaseAddress;
} XV_gamma_lut_Config;
#endif

typedef struct {
    u32 Ctrl_BaseAddress;
    u32 IsReady;
} XV_gamma_lut;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XV_gamma_lut_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XV_gamma_lut_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XV_gamma_lut_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XV_gamma_lut_ReadReg(BaseAddress, RegOffset) \
    *(volatile u32*)((BaseAddress) + (RegOffset))

#define Xil_AssertVoid(expr)    assert(expr)
#define Xil_AssertNonvoid(expr) assert(expr)

#define XST_SUCCESS             0
#define XST_DEVICE_NOT_FOUND    2
#define XST_OPEN_DEVICE_FAILED  3
#define XIL_COMPONENT_IS_READY  1
#endif

/************************** Function Prototypes *****************************/
#ifndef __linux__
int XV_gamma_lut_Initialize(XV_gamma_lut *InstancePtr, u16 DeviceId);
XV_gamma_lut_Config* XV_gamma_lut_LookupConfig(u16 DeviceId);
int XV_gamma_lut_CfgInitialize(XV_gamma_lut *InstancePtr, XV_gamma_lut_Config *ConfigPtr);
#else
int XV_gamma_lut_Initialize(XV_gamma_lut *InstancePtr, const char* InstanceName);
int XV_gamma_lut_Release(XV_gamma_lut *InstancePtr);
#endif

void XV_gamma_lut_Start(XV_gamma_lut *InstancePtr);
u32 XV_gamma_lut_IsDone(XV_gamma_lut *InstancePtr);
u32 XV_gamma_lut_IsIdle(XV_gamma_lut *InstancePtr);
u32 XV_gamma_lut_IsReady(XV_gamma_lut *InstancePtr);
void XV_gamma_lut_EnableAutoRestart(XV_gamma_lut *InstancePtr);
void XV_gamma_lut_DisableAutoRestart(XV_gamma_lut *InstancePtr);

void XV_gamma_lut_Set_HwReg_width(XV_gamma_lut *InstancePtr, u32 Data);
u32 XV_gamma_lut_Get_HwReg_width(XV_gamma_lut *InstancePtr);
void XV_gamma_lut_Set_HwReg_height(XV_gamma_lut *InstancePtr, u32 Data);
u32 XV_gamma_lut_Get_HwReg_height(XV_gamma_lut *InstancePtr);
void XV_gamma_lut_Set_HwReg_video_format(XV_gamma_lut *InstancePtr, u32 Data);
u32 XV_gamma_lut_Get_HwReg_video_format(XV_gamma_lut *InstancePtr);
u32 XV_gamma_lut_Get_HwReg_gamma_lut_0_BaseAddress(XV_gamma_lut *InstancePtr);
u32 XV_gamma_lut_Get_HwReg_gamma_lut_0_HighAddress(XV_gamma_lut *InstancePtr);
u32 XV_gamma_lut_Get_HwReg_gamma_lut_0_TotalBytes(XV_gamma_lut *InstancePtr);
u32 XV_gamma_lut_Get_HwReg_gamma_lut_0_BitWidth(XV_gamma_lut *InstancePtr);
u32 XV_gamma_lut_Get_HwReg_gamma_lut_0_Depth(XV_gamma_lut *InstancePtr);
u32 XV_gamma_lut_Write_HwReg_gamma_lut_0_Words(XV_gamma_lut *InstancePtr, int offset, int *data, int length);
u32 XV_gamma_lut_Read_HwReg_gamma_lut_0_Words(XV_gamma_lut *InstancePtr, int offset, int *data, int length);
u32 XV_gamma_lut_Write_HwReg_gamma_lut_0_Bytes(XV_gamma_lut *InstancePtr, int offset, char *data, int length);
u32 XV_gamma_lut_Read_HwReg_gamma_lut_0_Bytes(XV_gamma_lut *InstancePtr, int offset, char *data, int length);
u32 XV_gamma_lut_Get_HwReg_gamma_lut_1_BaseAddress(XV_gamma_lut *InstancePtr);
u32 XV_gamma_lut_Get_HwReg_gamma_lut_1_HighAddress(XV_gamma_lut *InstancePtr);
u32 XV_gamma_lut_Get_HwReg_gamma_lut_1_TotalBytes(XV_gamma_lut *InstancePtr);
u32 XV_gamma_lut_Get_HwReg_gamma_lut_1_BitWidth(XV_gamma_lut *InstancePtr);
u32 XV_gamma_lut_Get_HwReg_gamma_lut_1_Depth(XV_gamma_lut *InstancePtr);
u32 XV_gamma_lut_Write_HwReg_gamma_lut_1_Words(XV_gamma_lut *InstancePtr, int offset, int *data, int length);
u32 XV_gamma_lut_Read_HwReg_gamma_lut_1_Words(XV_gamma_lut *InstancePtr, int offset, int *data, int length);
u32 XV_gamma_lut_Write_HwReg_gamma_lut_1_Bytes(XV_gamma_lut *InstancePtr, int offset, char *data, int length);
u32 XV_gamma_lut_Read_HwReg_gamma_lut_1_Bytes(XV_gamma_lut *InstancePtr, int offset, char *data, int length);
u32 XV_gamma_lut_Get_HwReg_gamma_lut_2_BaseAddress(XV_gamma_lut *InstancePtr);
u32 XV_gamma_lut_Get_HwReg_gamma_lut_2_HighAddress(XV_gamma_lut *InstancePtr);
u32 XV_gamma_lut_Get_HwReg_gamma_lut_2_TotalBytes(XV_gamma_lut *InstancePtr);
u32 XV_gamma_lut_Get_HwReg_gamma_lut_2_BitWidth(XV_gamma_lut *InstancePtr);
u32 XV_gamma_lut_Get_HwReg_gamma_lut_2_Depth(XV_gamma_lut *InstancePtr);
u32 XV_gamma_lut_Write_HwReg_gamma_lut_2_Words(XV_gamma_lut *InstancePtr, int offset, int *data, int length);
u32 XV_gamma_lut_Read_HwReg_gamma_lut_2_Words(XV_gamma_lut *InstancePtr, int offset, int *data, int length);
u32 XV_gamma_lut_Write_HwReg_gamma_lut_2_Bytes(XV_gamma_lut *InstancePtr, int offset, char *data, int length);
u32 XV_gamma_lut_Read_HwReg_gamma_lut_2_Bytes(XV_gamma_lut *InstancePtr, int offset, char *data, int length);

void XV_gamma_lut_InterruptGlobalEnable(XV_gamma_lut *InstancePtr);
void XV_gamma_lut_InterruptGlobalDisable(XV_gamma_lut *InstancePtr);
void XV_gamma_lut_InterruptEnable(XV_gamma_lut *InstancePtr, u32 Mask);
void XV_gamma_lut_InterruptDisable(XV_gamma_lut *InstancePtr, u32 Mask);
void XV_gamma_lut_InterruptClear(XV_gamma_lut *InstancePtr, u32 Mask);
u32 XV_gamma_lut_InterruptGetEnabled(XV_gamma_lut *InstancePtr);
u32 XV_gamma_lut_InterruptGetStatus(XV_gamma_lut *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
