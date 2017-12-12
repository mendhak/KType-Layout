/* Copyright (C) 2014-2017 by Jacob Alexander
 *
 * This file is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This file is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this file.  If not, see <http://www.gnu.org/licenses/>.
 */

// This file was generated by the kll compiler, DO NOT EDIT.
// Generation Date:    2017-12-12
// KLL Emitter:        kiibohd
// KLL Version:        BETA 0.5c.c75044b4986d285966fa5c752324a716d000b3ef - 2017-12-04 18:39:06 -0800
// KLL Git Changes:    None
// Compiler arguments:
//      /srv/KiiConf/controller/kll/kll
//    --kiibohd-debug
//    --config
//      /srv/KiiConf/controller/Scan/Devices/ISSILed/capabilities.kll
//      /srv/KiiConf/controller/Scan/Devices/MatrixARMPeriodic/capabilities.kll
//      /srv/KiiConf/controller/Scan/Devices/PortSwap/capabilities.kll
//      /srv/KiiConf/controller/Scan/Devices/UARTConnect/capabilities.kll
//      /srv/KiiConf/controller/Macro/PartialMap/capabilities.kll
//      /srv/KiiConf/controller/Macro/PixelMap/capabilities.kll
//      /srv/KiiConf/controller/Output/HID-IO/capabilities.kll
//      /srv/KiiConf/controller/Output/pjrcUSB/capabilities.kll
//      /srv/KiiConf/controller/Debug/latency/capabilities.kll
//    --base
//      /srv/KiiConf/controller/Scan/K-Type/scancode_map.kll
//    --default
//      /srv/KiiConf/controller/kll/layouts/stdFuncMap.kll
//      KType-Standard-0.kll
//    --partial
//      /srv/KiiConf/controller/kll/layouts/stdFuncMap.kll
//      KType-Standard-1.kll
//    --emitter
//      kiibohd
//    --def-template
//      /srv/KiiConf/controller/kll/templates/kiibohdDefs.h
//    --map-template
//      /srv/KiiConf/controller/kll/templates/kiibohdKeymap.h
//    --pixel-template
//      /srv/KiiConf/controller/kll/templates/kiibohdPixelmap.c
//    --def-output
//      kll_defs.h
//    --map-output
//      generatedKeymap.h
//    --pixel-output
//      generatedPixelmap.c
//    --preprocessor-tmp-path
//      /srv/KiiConf/tmp/f627ddb40ba1551ef6e9892473a08fd215a3048c846f92/tmp_kll
//
// - Configuration File -
//    ISSILedCapabilities
//      /srv/KiiConf/tmp/f627ddb40ba1551ef6e9892473a08fd215a3048c846f92/tmp_kll/_srv_KiiConf_controller_Scan_Devices_ISSILed@['capabilities']_processed.kll
//    MatrixARMPeriodicCapabilities
//      /srv/KiiConf/tmp/f627ddb40ba1551ef6e9892473a08fd215a3048c846f92/tmp_kll/_srv_KiiConf_controller_Scan_Devices_MatrixARMPeriodic@['capabilities']_processed.kll
//    PortSwapCapabilities
//      /srv/KiiConf/tmp/f627ddb40ba1551ef6e9892473a08fd215a3048c846f92/tmp_kll/_srv_KiiConf_controller_Scan_Devices_PortSwap@['capabilities']_processed.kll
//    UARTConnectCapabilities
//      /srv/KiiConf/tmp/f627ddb40ba1551ef6e9892473a08fd215a3048c846f92/tmp_kll/_srv_KiiConf_controller_Scan_Devices_UARTConnect@['capabilities']_processed.kll
//    PartialMapCapabilities
//      /srv/KiiConf/tmp/f627ddb40ba1551ef6e9892473a08fd215a3048c846f92/tmp_kll/_srv_KiiConf_controller_Macro_PartialMap@['capabilities']_processed.kll
//    PixelMapCapabilities
//      /srv/KiiConf/tmp/f627ddb40ba1551ef6e9892473a08fd215a3048c846f92/tmp_kll/_srv_KiiConf_controller_Macro_PixelMap@['capabilities']_processed.kll
//    HID-IOCapabilities
//      /srv/KiiConf/tmp/f627ddb40ba1551ef6e9892473a08fd215a3048c846f92/tmp_kll/_srv_KiiConf_controller_Output_HID-IO@['capabilities']_processed.kll
//    pjrcUSBCapabilities
//      /srv/KiiConf/tmp/f627ddb40ba1551ef6e9892473a08fd215a3048c846f92/tmp_kll/_srv_KiiConf_controller_Output_pjrcUSB@['capabilities']_processed.kll
//    latency
//      /srv/KiiConf/tmp/f627ddb40ba1551ef6e9892473a08fd215a3048c846f92/tmp_kll/_srv_KiiConf_controller_Debug_latency@['capabilities']_processed.kll
// - Generic Files -
// - Base Layer -
//    K-Type
//      /srv/KiiConf/tmp/f627ddb40ba1551ef6e9892473a08fd215a3048c846f92/tmp_kll/_srv_KiiConf_controller_Scan_K-Type@['scancode_map']_processed.kll
// - Default Layer -
//    stdFuncMap
//      /srv/KiiConf/tmp/f627ddb40ba1551ef6e9892473a08fd215a3048c846f92/tmp_kll/_srv_KiiConf_controller_kll_layouts@['stdFuncMap']_processed.kll
//    KType
//      /srv/KiiConf/tmp/f627ddb40ba1551ef6e9892473a08fd215a3048c846f92/tmp_kll/@['KType-Standard-0']_processed.kll
// - Partial Layers -
//    Layer 1
//     stdFuncMap
//       /srv/KiiConf/tmp/f627ddb40ba1551ef6e9892473a08fd215a3048c846f92/tmp_kll/_srv_KiiConf_controller_kll_layouts@['stdFuncMap']_processed.kll
//     KType
//       /srv/KiiConf/tmp/f627ddb40ba1551ef6e9892473a08fd215a3048c846f92/tmp_kll/@['KType-Standard-1']_processed.kll



#pragma once

// ----- Enums -----

// Capability Indices
typedef enum CapabilityIndex {
	LED_control_capability_index,
	Macro_layerLatch_capability_index,
	Macro_layerLock_capability_index,
	Macro_layerRotate_capability_index,
	Macro_layerShift_capability_index,
	Macro_layerState_capability_index,
	Output_consCtrlSend_capability_index,
	Output_flashMode_capability_index,
	Output_kbdProtocolBoot_capability_index,
	Output_kbdProtocolNKRO_capability_index,
	Output_noneSend_capability_index,
	Output_sysCtrlSend_capability_index,
	Output_toggleKbdProtocol_capability_index,
	Output_usbCodeSend_capability_index,
	Output_usbMouse_capability_index,
	Pixel_AnimationControl_capability_index,
	Pixel_AnimationIndex_capability_index,
	Pixel_Animation_capability_index,
	Pixel_Pixel_capability_index,
	Port_cross_capability_index,
	Port_uart_capability_index,
	Port_usb_capability_index,
} CapabilityIndex;



// ----- Defines -----

// -- Interconnect Node Maximum --
#define InterconnectNodeMax 0x2


// -- Capability / KLL Defines --

#define ConnectEnabled_define 1
#define ResultCapabilityStackSize_define 10
#define ISSILedMask1_define  \
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, /* CS1 -> CS16 (SW1  -> SW4)  */ \
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, /* CS1 -> CS16 (SW5  -> SW8)  */ \
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, /* CS1 -> CS16 (SW9  -> SW12) */ \

#define ISSILedMask2_define  \
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, /* CS1 -> CS16 (SW1  -> SW4)  */ \
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, /* CS1 -> CS16 (SW5  -> SW8)  */ \
	0xFF, 0xFF, 0x7F, 0x00, 0x7F, 0x00, 0x7F, 0x00, /* CS1 -> CS16 (SW9  -> SW12) */ \

#define ISSILedMask3_define  \
	0xFF, 0xFF, /* C1-1 -> C1-16 */ \
	0xFF, 0xFF, /* C2-1 -> C2-16 */ \
	0xFF, 0xFF, /* C3-1 -> C3-16 */ \
	0xFF, 0xFF, /* C4-1 -> C4-16 */ \
	0xFF, 0xFF, /* C5-1 -> C5-16 */ \
	0xFF, 0xFF, /* C6-1 -> C6-16 */ \
	0xFF, 0xFF, /* C7-1 -> C7-16 */ \
	0xFF, 0xFF, /* C8-1 -> C8-16 */ \
	0xFF, 0xFF, /* C9-1 -> C9-16 */ \

#define ISSILedMask4_define  \
	0xFF, 0xFF, /* C1-1 -> C1-16 */ \
	0xFF, 0xFF, /* C2-1 -> C2-16 */ \
	0xFF, 0xFF, /* C3-1 -> C3-16 */ \
	0xFF, 0xFF, /* C4-1 -> C4-16 */ \
	0xFF, 0xFF, /* C5-1 -> C5-16 */ \
	0xFF, 0xFF, /* C6-1 -> C6-16 */ \
	0xFF, 0xFF, /* C7-1 -> C7-16 */ \
	0xFF, 0xFF, /* C8-1 -> C8-16 */ \
	0xFF, 0xFF, /* C9-1 -> C9-16 */ \

#define ISSI_Chip_31FL3731_define 0
#define ISSI_Chip_31FL3732_define 0
#define ISSI_Chip_31FL3733_define 1
#define ISSI_Chips_define 2
#define ISSI_Enable_define 1
#define ISSI_FrameRate_ms_define 10
#define ISSI_Global_Brightness_define 128
#define ISSI_I2C_Buses_define 2
#define LED_MapCh1_Addr_define ISSI_Ch1
#define LED_MapCh1_Bus_define 0
#define LED_MapCh2_Addr_define ISSI_Ch1
#define LED_MapCh2_Bus_define 1
#define LED_MapCh3_Addr_define ISSI_Ch3
#define LED_MapCh3_Bus_define 0
#define LED_MapCh4_Addr_define ISSI_Ch4
#define LED_MapCh4_Bus_define 0
#define MinDebounceTime_define 5
#define PeriodicCycles_define 1000
#define Pixel_HardCode_ChanWidth_define 8
#define Pixel_HardCode_Channels_define 3
#define Pixel_MapEnabled_define 1
#define Pixel_Test_Mode_define PixelTest_Off
#define PressReleaseCache_define 1
#define StrobeDelay_define 0
#define UARTConnectBaud_define 1
#define UARTConnectBaudFine_define 0
#define UARTConnectBufSize_define 128
#define UARTConnectCableCheckLength_define 2
#define enableDeviceRestartOnUSBTimeout_define 0
#define enableJoystick_define 0
#define enableKeyboard_define 1
#define enableMouse_define 1
#define enableRawIO_define 1
#define enableUSBLowPowerNegotiation_define 0
#define enableUSBResume_define 1
#define enableUSBSuspend_define 1
#define enableVirtualSerialPort_define 1
#define flashModeEnabled_define 0
#define IndexWordSize_define 16
#define KeyboardLocale_define 0
#define LatencyMeasurementCount_define 10
#define SecureBootloader_define 0
#define StateWordSize_define 8
#define USBIdle_define 0
#define USBIdle_force_define 1
#define USBProtocol_define 1

// -- Animation Defines --

#define Animation__christmas 0
#define Animation__custom_wave 1
#define Animation__fingerprints_two_tone 2
#define Animation__miami_wave 3

// -- Built-in Defines --
#define CapabilitiesNum_KLL 22
#define LayerNum_KLL 2
#define ResultMacroNum_KLL 104
#define TriggerMacroNum_KLL 122
#define MaxScanCode_KLL 95
#define Pixel_BuffersLen_KLL 2
#define Pixel_TotalChannels_KLL 192 + 192
#define Pixel_TotalPixels_KLL 119
#define Pixel_DisplayMapping_Cols_KLL 38
#define Pixel_DisplayMapping_Rows_KLL 8
#define Pixel_AnimationSettingsNum_KLL 13


