// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Winsoft.Android.Usbser.pas' rev: 36.00 (Android)

#ifndef Winsoft_Android_UsbserHPP
#define Winsoft_Android_UsbserHPP

#pragma delphiheader begin
#pragma option push
#if defined(__BORLANDC__) && !defined(__clang__)
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#endif
#pragma pack(push,8)
#include <System.hpp>
#include <Sysinit.hpp>
#include <Androidapi.Jnibridge.hpp>
#include <Androidapi.Jni.Graphicscontentviewtext.hpp>
#include <Androidapi.Jni.Javatypes.hpp>
#include <Androidapi.Jni.Embarcadero.hpp>
#include <Androidapi.Jni.App.hpp>
#include <Winsoft.Android.Usb.hpp>
#include <System.Sysutils.hpp>
#include <Androidapi.Jni.hpp>
#include <System.Rtti.hpp>

//-- user supplied -----------------------------------------------------------

namespace Winsoft
{
namespace Android
{
namespace Usbser
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE JAbstractWorkerThreadClass;
typedef System::DelphiInterface<JAbstractWorkerThreadClass> _di_JAbstractWorkerThreadClass;
__interface DELPHIINTERFACE JAbstractWorkerThread;
typedef System::DelphiInterface<JAbstractWorkerThread> _di_JAbstractWorkerThread;
class DELPHICLASS TJAbstractWorkerThread;
__interface DELPHIINTERFACE JUsbSerialDeviceClass;
typedef System::DelphiInterface<JUsbSerialDeviceClass> _di_JUsbSerialDeviceClass;
__interface DELPHIINTERFACE JUsbSerialDevice;
typedef System::DelphiInterface<JUsbSerialDevice> _di_JUsbSerialDevice;
class DELPHICLASS TJUsbSerialDevice;
__interface DELPHIINTERFACE JBLED112SerialDeviceClass;
typedef System::DelphiInterface<JBLED112SerialDeviceClass> _di_JBLED112SerialDeviceClass;
__interface DELPHIINTERFACE JBLED112SerialDevice;
typedef System::DelphiInterface<JBLED112SerialDevice> _di_JBLED112SerialDevice;
class DELPHICLASS TJBLED112SerialDevice;
__interface DELPHIINTERFACE JBuildConfigClass;
typedef System::DelphiInterface<JBuildConfigClass> _di_JBuildConfigClass;
__interface DELPHIINTERFACE JBuildConfig;
typedef System::DelphiInterface<JBuildConfig> _di_JBuildConfig;
class DELPHICLASS TJBuildConfig;
__interface DELPHIINTERFACE JCDCSerialDeviceClass;
typedef System::DelphiInterface<JCDCSerialDeviceClass> _di_JCDCSerialDeviceClass;
__interface DELPHIINTERFACE JCDCSerialDevice;
typedef System::DelphiInterface<JCDCSerialDevice> _di_JCDCSerialDevice;
class DELPHICLASS TJCDCSerialDevice;
__interface DELPHIINTERFACE JCH34xIdsClass;
typedef System::DelphiInterface<JCH34xIdsClass> _di_JCH34xIdsClass;
__interface DELPHIINTERFACE JCH34xIds;
typedef System::DelphiInterface<JCH34xIds> _di_JCH34xIds;
class DELPHICLASS TJCH34xIds;
__interface DELPHIINTERFACE JCH34xSerialDeviceClass;
typedef System::DelphiInterface<JCH34xSerialDeviceClass> _di_JCH34xSerialDeviceClass;
__interface DELPHIINTERFACE JCH34xSerialDevice;
typedef System::DelphiInterface<JCH34xSerialDevice> _di_JCH34xSerialDevice;
class DELPHICLASS TJCH34xSerialDevice;
__interface DELPHIINTERFACE JCH34xSerialDevice_1Class;
typedef System::DelphiInterface<JCH34xSerialDevice_1Class> _di_JCH34xSerialDevice_1Class;
__interface DELPHIINTERFACE JCH34xSerialDevice_1;
typedef System::DelphiInterface<JCH34xSerialDevice_1> _di_JCH34xSerialDevice_1;
class DELPHICLASS TJCH34xSerialDevice_1;
__interface DELPHIINTERFACE JCH34xSerialDevice_FlowControlThreadClass;
typedef System::DelphiInterface<JCH34xSerialDevice_FlowControlThreadClass> _di_JCH34xSerialDevice_FlowControlThreadClass;
__interface DELPHIINTERFACE JCH34xSerialDevice_FlowControlThread;
typedef System::DelphiInterface<JCH34xSerialDevice_FlowControlThread> _di_JCH34xSerialDevice_FlowControlThread;
class DELPHICLASS TJCH34xSerialDevice_FlowControlThread;
__interface DELPHIINTERFACE JCP2102SerialDeviceClass;
typedef System::DelphiInterface<JCP2102SerialDeviceClass> _di_JCP2102SerialDeviceClass;
__interface DELPHIINTERFACE JCP2102SerialDevice;
typedef System::DelphiInterface<JCP2102SerialDevice> _di_JCP2102SerialDevice;
class DELPHICLASS TJCP2102SerialDevice;
__interface DELPHIINTERFACE JCP2102SerialDevice_1Class;
typedef System::DelphiInterface<JCP2102SerialDevice_1Class> _di_JCP2102SerialDevice_1Class;
__interface DELPHIINTERFACE JCP2102SerialDevice_1;
typedef System::DelphiInterface<JCP2102SerialDevice_1> _di_JCP2102SerialDevice_1;
class DELPHICLASS TJCP2102SerialDevice_1;
__interface DELPHIINTERFACE JCP2102SerialDevice_FlowControlThreadClass;
typedef System::DelphiInterface<JCP2102SerialDevice_FlowControlThreadClass> _di_JCP2102SerialDevice_FlowControlThreadClass;
__interface DELPHIINTERFACE JCP2102SerialDevice_FlowControlThread;
typedef System::DelphiInterface<JCP2102SerialDevice_FlowControlThread> _di_JCP2102SerialDevice_FlowControlThread;
class DELPHICLASS TJCP2102SerialDevice_FlowControlThread;
__interface DELPHIINTERFACE JCP210xIdsClass;
typedef System::DelphiInterface<JCP210xIdsClass> _di_JCP210xIdsClass;
__interface DELPHIINTERFACE JCP210xIds;
typedef System::DelphiInterface<JCP210xIds> _di_JCP210xIds;
class DELPHICLASS TJCP210xIds;
__interface DELPHIINTERFACE JCP2130IdsClass;
typedef System::DelphiInterface<JCP2130IdsClass> _di_JCP2130IdsClass;
__interface DELPHIINTERFACE JCP2130Ids;
typedef System::DelphiInterface<JCP2130Ids> _di_JCP2130Ids;
class DELPHICLASS TJCP2130Ids;
__interface DELPHIINTERFACE JUsbSpiDeviceClass;
typedef System::DelphiInterface<JUsbSpiDeviceClass> _di_JUsbSpiDeviceClass;
__interface DELPHIINTERFACE JUsbSpiDevice;
typedef System::DelphiInterface<JUsbSpiDevice> _di_JUsbSpiDevice;
class DELPHICLASS TJUsbSpiDevice;
__interface DELPHIINTERFACE JCP2130SpiDeviceClass;
typedef System::DelphiInterface<JCP2130SpiDeviceClass> _di_JCP2130SpiDeviceClass;
__interface DELPHIINTERFACE JCP2130SpiDevice;
typedef System::DelphiInterface<JCP2130SpiDevice> _di_JCP2130SpiDevice;
class DELPHICLASS TJCP2130SpiDevice;
__interface DELPHIINTERFACE JFTDISerialDeviceClass;
typedef System::DelphiInterface<JFTDISerialDeviceClass> _di_JFTDISerialDeviceClass;
__interface DELPHIINTERFACE JFTDISerialDevice;
typedef System::DelphiInterface<JFTDISerialDevice> _di_JFTDISerialDevice;
class DELPHICLASS TJFTDISerialDevice;
__interface DELPHIINTERFACE JFTDISerialDevice_FTDIUtilitiesClass;
typedef System::DelphiInterface<JFTDISerialDevice_FTDIUtilitiesClass> _di_JFTDISerialDevice_FTDIUtilitiesClass;
__interface DELPHIINTERFACE JFTDISerialDevice_FTDIUtilities;
typedef System::DelphiInterface<JFTDISerialDevice_FTDIUtilities> _di_JFTDISerialDevice_FTDIUtilities;
class DELPHICLASS TJFTDISerialDevice_FTDIUtilities;
__interface DELPHIINTERFACE JFTDISioIdsClass;
typedef System::DelphiInterface<JFTDISioIdsClass> _di_JFTDISioIdsClass;
__interface DELPHIINTERFACE JFTDISioIds;
typedef System::DelphiInterface<JFTDISioIds> _di_JFTDISioIds;
class DELPHICLASS TJFTDISioIds;
__interface DELPHIINTERFACE JHelpers1Class;
typedef System::DelphiInterface<JHelpers1Class> _di_JHelpers1Class;
__interface DELPHIINTERFACE JHelpers1;
typedef System::DelphiInterface<JHelpers1> _di_JHelpers1;
class DELPHICLASS TJHelpers1;
__interface DELPHIINTERFACE JHexDataClass;
typedef System::DelphiInterface<JHexDataClass> _di_JHexDataClass;
__interface DELPHIINTERFACE JHexData;
typedef System::DelphiInterface<JHexData> _di_JHexData;
class DELPHICLASS TJHexData;
__interface DELPHIINTERFACE JPL2303IdsClass;
typedef System::DelphiInterface<JPL2303IdsClass> _di_JPL2303IdsClass;
__interface DELPHIINTERFACE JPL2303Ids;
typedef System::DelphiInterface<JPL2303Ids> _di_JPL2303Ids;
class DELPHICLASS TJPL2303Ids;
__interface DELPHIINTERFACE JPL2303SerialDeviceClass;
typedef System::DelphiInterface<JPL2303SerialDeviceClass> _di_JPL2303SerialDeviceClass;
__interface DELPHIINTERFACE JPL2303SerialDevice;
typedef System::DelphiInterface<JPL2303SerialDevice> _di_JPL2303SerialDevice;
class DELPHICLASS TJPL2303SerialDevice;
__interface DELPHIINTERFACE JSafeUsbRequestClass;
typedef System::DelphiInterface<JSafeUsbRequestClass> _di_JSafeUsbRequestClass;
__interface DELPHIINTERFACE JSafeUsbRequest;
typedef System::DelphiInterface<JSafeUsbRequest> _di_JSafeUsbRequest;
class DELPHICLASS TJSafeUsbRequest;
__interface DELPHIINTERFACE JSerialBufferClass;
typedef System::DelphiInterface<JSerialBufferClass> _di_JSerialBufferClass;
__interface DELPHIINTERFACE JSerialBuffer;
typedef System::DelphiInterface<JSerialBuffer> _di_JSerialBuffer;
class DELPHICLASS TJSerialBuffer;
__interface DELPHIINTERFACE JSerialBuffer_SynchronizedBufferClass;
typedef System::DelphiInterface<JSerialBuffer_SynchronizedBufferClass> _di_JSerialBuffer_SynchronizedBufferClass;
__interface DELPHIINTERFACE JSerialBuffer_SynchronizedBuffer;
typedef System::DelphiInterface<JSerialBuffer_SynchronizedBuffer> _di_JSerialBuffer_SynchronizedBuffer;
class DELPHICLASS TJSerialBuffer_SynchronizedBuffer;
__interface DELPHIINTERFACE JSerialInputStreamClass;
typedef System::DelphiInterface<JSerialInputStreamClass> _di_JSerialInputStreamClass;
__interface DELPHIINTERFACE JSerialInputStream;
typedef System::DelphiInterface<JSerialInputStream> _di_JSerialInputStream;
class DELPHICLASS TJSerialInputStream;
__interface DELPHIINTERFACE JSerialOutputStreamClass;
typedef System::DelphiInterface<JSerialOutputStreamClass> _di_JSerialOutputStreamClass;
__interface DELPHIINTERFACE JSerialOutputStream;
typedef System::DelphiInterface<JSerialOutputStream> _di_JSerialOutputStream;
class DELPHICLASS TJSerialOutputStream;
__interface DELPHIINTERFACE JSerialPortBuilderClass;
typedef System::DelphiInterface<JSerialPortBuilderClass> _di_JSerialPortBuilderClass;
__interface DELPHIINTERFACE JSerialPortBuilder;
typedef System::DelphiInterface<JSerialPortBuilder> _di_JSerialPortBuilder;
class DELPHICLASS TJSerialPortBuilder;
__interface DELPHIINTERFACE JSerialPortBuilder_1Class;
typedef System::DelphiInterface<JSerialPortBuilder_1Class> _di_JSerialPortBuilder_1Class;
__interface DELPHIINTERFACE JSerialPortBuilder_1;
typedef System::DelphiInterface<JSerialPortBuilder_1> _di_JSerialPortBuilder_1;
class DELPHICLASS TJSerialPortBuilder_1;
__interface DELPHIINTERFACE JSerialPortBuilder_InitSerialPortThreadClass;
typedef System::DelphiInterface<JSerialPortBuilder_InitSerialPortThreadClass> _di_JSerialPortBuilder_InitSerialPortThreadClass;
__interface DELPHIINTERFACE JSerialPortBuilder_InitSerialPortThread;
typedef System::DelphiInterface<JSerialPortBuilder_InitSerialPortThread> _di_JSerialPortBuilder_InitSerialPortThread;
class DELPHICLASS TJSerialPortBuilder_InitSerialPortThread;
__interface DELPHIINTERFACE JSerialPortBuilder_PendingUsbPermissionClass;
typedef System::DelphiInterface<JSerialPortBuilder_PendingUsbPermissionClass> _di_JSerialPortBuilder_PendingUsbPermissionClass;
__interface DELPHIINTERFACE JSerialPortBuilder_PendingUsbPermission;
typedef System::DelphiInterface<JSerialPortBuilder_PendingUsbPermission> _di_JSerialPortBuilder_PendingUsbPermission;
class DELPHICLASS TJSerialPortBuilder_PendingUsbPermission;
__interface DELPHIINTERFACE JSerialPortBuilder_UsbDeviceStatusClass;
typedef System::DelphiInterface<JSerialPortBuilder_UsbDeviceStatusClass> _di_JSerialPortBuilder_UsbDeviceStatusClass;
__interface DELPHIINTERFACE JSerialPortBuilder_UsbDeviceStatus;
typedef System::DelphiInterface<JSerialPortBuilder_UsbDeviceStatus> _di_JSerialPortBuilder_UsbDeviceStatus;
class DELPHICLASS TJSerialPortBuilder_UsbDeviceStatus;
__interface DELPHIINTERFACE JSerialPortCallbackClass;
typedef System::DelphiInterface<JSerialPortCallbackClass> _di_JSerialPortCallbackClass;
__interface DELPHIINTERFACE JSerialPortCallback;
typedef System::DelphiInterface<JSerialPortCallback> _di_JSerialPortCallback;
class DELPHICLASS TJSerialPortCallback;
__interface DELPHIINTERFACE JUsbSerialDebuggerClass;
typedef System::DelphiInterface<JUsbSerialDebuggerClass> _di_JUsbSerialDebuggerClass;
__interface DELPHIINTERFACE JUsbSerialDebugger;
typedef System::DelphiInterface<JUsbSerialDebugger> _di_JUsbSerialDebugger;
class DELPHICLASS TJUsbSerialDebugger;
__interface DELPHIINTERFACE JUsbSerialDevice_1Class;
typedef System::DelphiInterface<JUsbSerialDevice_1Class> _di_JUsbSerialDevice_1Class;
__interface DELPHIINTERFACE JUsbSerialDevice_1;
typedef System::DelphiInterface<JUsbSerialDevice_1> _di_JUsbSerialDevice_1;
class DELPHICLASS TJUsbSerialDevice_1;
__interface DELPHIINTERFACE JUsbSerialDevice_ReadThreadClass;
typedef System::DelphiInterface<JUsbSerialDevice_ReadThreadClass> _di_JUsbSerialDevice_ReadThreadClass;
__interface DELPHIINTERFACE JUsbSerialDevice_ReadThread;
typedef System::DelphiInterface<JUsbSerialDevice_ReadThread> _di_JUsbSerialDevice_ReadThread;
class DELPHICLASS TJUsbSerialDevice_ReadThread;
__interface DELPHIINTERFACE JUsbSerialDevice_WorkerThreadClass;
typedef System::DelphiInterface<JUsbSerialDevice_WorkerThreadClass> _di_JUsbSerialDevice_WorkerThreadClass;
__interface DELPHIINTERFACE JUsbSerialDevice_WorkerThread;
typedef System::DelphiInterface<JUsbSerialDevice_WorkerThread> _di_JUsbSerialDevice_WorkerThread;
class DELPHICLASS TJUsbSerialDevice_WorkerThread;
__interface DELPHIINTERFACE JUsbSerialDevice_WriteThreadClass;
typedef System::DelphiInterface<JUsbSerialDevice_WriteThreadClass> _di_JUsbSerialDevice_WriteThreadClass;
__interface DELPHIINTERFACE JUsbSerialDevice_WriteThread;
typedef System::DelphiInterface<JUsbSerialDevice_WriteThread> _di_JUsbSerialDevice_WriteThread;
class DELPHICLASS TJUsbSerialDevice_WriteThread;
__interface DELPHIINTERFACE JUsbSerialInterfaceClass;
typedef System::DelphiInterface<JUsbSerialInterfaceClass> _di_JUsbSerialInterfaceClass;
__interface DELPHIINTERFACE JUsbSerialInterface;
typedef System::DelphiInterface<JUsbSerialInterface> _di_JUsbSerialInterface;
class DELPHICLASS TJUsbSerialInterface;
__interface DELPHIINTERFACE JUsbSerialInterface_UsbBreakCallbackClass;
typedef System::DelphiInterface<JUsbSerialInterface_UsbBreakCallbackClass> _di_JUsbSerialInterface_UsbBreakCallbackClass;
__interface DELPHIINTERFACE JUsbSerialInterface_UsbBreakCallback;
typedef System::DelphiInterface<JUsbSerialInterface_UsbBreakCallback> _di_JUsbSerialInterface_UsbBreakCallback;
class DELPHICLASS TJUsbSerialInterface_UsbBreakCallback;
__interface DELPHIINTERFACE JUsbSerialInterface_UsbCTSCallbackClass;
typedef System::DelphiInterface<JUsbSerialInterface_UsbCTSCallbackClass> _di_JUsbSerialInterface_UsbCTSCallbackClass;
__interface DELPHIINTERFACE JUsbSerialInterface_UsbCTSCallback;
typedef System::DelphiInterface<JUsbSerialInterface_UsbCTSCallback> _di_JUsbSerialInterface_UsbCTSCallback;
class DELPHICLASS TJUsbSerialInterface_UsbCTSCallback;
__interface DELPHIINTERFACE JUsbSerialInterface_UsbDSRCallbackClass;
typedef System::DelphiInterface<JUsbSerialInterface_UsbDSRCallbackClass> _di_JUsbSerialInterface_UsbDSRCallbackClass;
__interface DELPHIINTERFACE JUsbSerialInterface_UsbDSRCallback;
typedef System::DelphiInterface<JUsbSerialInterface_UsbDSRCallback> _di_JUsbSerialInterface_UsbDSRCallback;
class DELPHICLASS TJUsbSerialInterface_UsbDSRCallback;
__interface DELPHIINTERFACE JUsbSerialInterface_UsbFrameCallbackClass;
typedef System::DelphiInterface<JUsbSerialInterface_UsbFrameCallbackClass> _di_JUsbSerialInterface_UsbFrameCallbackClass;
__interface DELPHIINTERFACE JUsbSerialInterface_UsbFrameCallback;
typedef System::DelphiInterface<JUsbSerialInterface_UsbFrameCallback> _di_JUsbSerialInterface_UsbFrameCallback;
class DELPHICLASS TJUsbSerialInterface_UsbFrameCallback;
__interface DELPHIINTERFACE JUsbSerialInterface_UsbOverrunCallbackClass;
typedef System::DelphiInterface<JUsbSerialInterface_UsbOverrunCallbackClass> _di_JUsbSerialInterface_UsbOverrunCallbackClass;
__interface DELPHIINTERFACE JUsbSerialInterface_UsbOverrunCallback;
typedef System::DelphiInterface<JUsbSerialInterface_UsbOverrunCallback> _di_JUsbSerialInterface_UsbOverrunCallback;
class DELPHICLASS TJUsbSerialInterface_UsbOverrunCallback;
__interface DELPHIINTERFACE JUsbSerialInterface_UsbParityCallbackClass;
typedef System::DelphiInterface<JUsbSerialInterface_UsbParityCallbackClass> _di_JUsbSerialInterface_UsbParityCallbackClass;
__interface DELPHIINTERFACE JUsbSerialInterface_UsbParityCallback;
typedef System::DelphiInterface<JUsbSerialInterface_UsbParityCallback> _di_JUsbSerialInterface_UsbParityCallback;
class DELPHICLASS TJUsbSerialInterface_UsbParityCallback;
__interface DELPHIINTERFACE JUsbSerialInterface_UsbReadCallbackClass;
typedef System::DelphiInterface<JUsbSerialInterface_UsbReadCallbackClass> _di_JUsbSerialInterface_UsbReadCallbackClass;
__interface DELPHIINTERFACE JUsbSerialInterface_UsbReadCallback;
typedef System::DelphiInterface<JUsbSerialInterface_UsbReadCallback> _di_JUsbSerialInterface_UsbReadCallback;
class DELPHICLASS TJUsbSerialInterface_UsbReadCallback;
__interface DELPHIINTERFACE JUsbSpiDevice_ReadThreadClass;
typedef System::DelphiInterface<JUsbSpiDevice_ReadThreadClass> _di_JUsbSpiDevice_ReadThreadClass;
__interface DELPHIINTERFACE JUsbSpiDevice_ReadThread;
typedef System::DelphiInterface<JUsbSpiDevice_ReadThread> _di_JUsbSpiDevice_ReadThread;
class DELPHICLASS TJUsbSpiDevice_ReadThread;
__interface DELPHIINTERFACE JUsbSpiDevice_WriteThreadClass;
typedef System::DelphiInterface<JUsbSpiDevice_WriteThreadClass> _di_JUsbSpiDevice_WriteThreadClass;
__interface DELPHIINTERFACE JUsbSpiDevice_WriteThread;
typedef System::DelphiInterface<JUsbSpiDevice_WriteThread> _di_JUsbSpiDevice_WriteThread;
class DELPHICLASS TJUsbSpiDevice_WriteThread;
__interface DELPHIINTERFACE JUsbSpiInterfaceClass;
typedef System::DelphiInterface<JUsbSpiInterfaceClass> _di_JUsbSpiInterfaceClass;
__interface DELPHIINTERFACE JUsbSpiInterface;
typedef System::DelphiInterface<JUsbSpiInterface> _di_JUsbSpiInterface;
class DELPHICLASS TJUsbSpiInterface;
__interface DELPHIINTERFACE JUsbSpiInterface_UsbMISOCallbackClass;
typedef System::DelphiInterface<JUsbSpiInterface_UsbMISOCallbackClass> _di_JUsbSpiInterface_UsbMISOCallbackClass;
__interface DELPHIINTERFACE JUsbSpiInterface_UsbMISOCallback;
typedef System::DelphiInterface<JUsbSpiInterface_UsbMISOCallback> _di_JUsbSpiInterface_UsbMISOCallback;
class DELPHICLASS TJUsbSpiInterface_UsbMISOCallback;
__interface DELPHIINTERFACE JXdcVcpIdsClass;
typedef System::DelphiInterface<JXdcVcpIdsClass> _di_JXdcVcpIdsClass;
__interface DELPHIINTERFACE JXdcVcpIds;
typedef System::DelphiInterface<JXdcVcpIds> _di_JXdcVcpIds;
class DELPHICLASS TJXdcVcpIds;
__interface DELPHIINTERFACE JXdcVcpSerialDeviceClass;
typedef System::DelphiInterface<JXdcVcpSerialDeviceClass> _di_JXdcVcpSerialDeviceClass;
__interface DELPHIINTERFACE JXdcVcpSerialDevice;
typedef System::DelphiInterface<JXdcVcpSerialDevice> _di_JXdcVcpSerialDevice;
class DELPHICLASS TJXdcVcpSerialDevice;
class DELPHICLASS EUsbSerialError;
class DELPHICLASS TUsbBreakCallback;
class DELPHICLASS TUsbCtsCallback;
class DELPHICLASS TUsbDsrCallback;
class DELPHICLASS TUsbFrameCallback;
class DELPHICLASS TUsbOverrunCallback;
class DELPHICLASS TUsbParityCallback;
class DELPHICLASS TUsbReadCallback;
class DELPHICLASS TUsbBroadcastListener;
class DELPHICLASS TUsbSerial;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{9D24F8DE-889C-4DFA-843B-0DB5A9625CF6}") JAbstractWorkerThreadClass  : public Androidapi::Jni::Javatypes::JThreadClass 
{
	
};

__interface  INTERFACE_UUID("{FF712ADC-05C6-4288-B585-E0D55DEAA863}") JAbstractWorkerThread  : public Androidapi::Jni::Javatypes::JThread 
{
	HIDESBASE virtual void __cdecl run() = 0 ;
};

class PASCALIMPLEMENTATION TJAbstractWorkerThread : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAbstractWorkerThreadClass,_di_JAbstractWorkerThread>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAbstractWorkerThreadClass,_di_JAbstractWorkerThread> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJAbstractWorkerThread() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JAbstractWorkerThreadClass,_di_JAbstractWorkerThread>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJAbstractWorkerThread() { }
	
};


__interface  INTERFACE_UUID("{E9531CB0-49F0-4A56-BDD1-F19341F1A7EA}") JUsbSerialDeviceClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetCDC() = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetCH34x() = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetCP210x() = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetFTDI() = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetPL2303() = 0 ;
	HIDESBASE virtual _di_JUsbSerialDevice __cdecl init(Winsoft::Android::Usb::_di_JUsbDevice device, Winsoft::Android::Usb::_di_JUsbDeviceConnection connection) = 0 ;
	virtual _di_JUsbSerialDevice __cdecl createUsbSerialDevice(Winsoft::Android::Usb::_di_JUsbDevice device, Winsoft::Android::Usb::_di_JUsbDeviceConnection connection) = 0 /* overload */;
	virtual _di_JUsbSerialDevice __cdecl createUsbSerialDevice(Winsoft::Android::Usb::_di_JUsbDevice device, Winsoft::Android::Usb::_di_JUsbDeviceConnection connection, int iface) = 0 /* overload */;
	virtual _di_JUsbSerialDevice __cdecl createUsbSerialDevice(Androidapi::Jni::Javatypes::_di_JString type, Winsoft::Android::Usb::_di_JUsbDevice device, Winsoft::Android::Usb::_di_JUsbDeviceConnection connection, int iface) = 0 /* overload */;
	virtual bool __cdecl isCdcDevice(Winsoft::Android::Usb::_di_JUsbDevice device) = 0 ;
	virtual bool __cdecl isSupported(Winsoft::Android::Usb::_di_JUsbDevice device) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString CDC = {read=_GetCDC};
	__property Androidapi::Jni::Javatypes::_di_JString CH34x = {read=_GetCH34x};
	__property Androidapi::Jni::Javatypes::_di_JString CP210x = {read=_GetCP210x};
	__property Androidapi::Jni::Javatypes::_di_JString FTDI = {read=_GetFTDI};
	__property Androidapi::Jni::Javatypes::_di_JString PL2303 = {read=_GetPL2303};
};

__interface  INTERFACE_UUID("{6A8B38A5-EF5E-45EE-9012-60772D5A6B51}") JUsbSerialDevice  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual void __cdecl close() = 0 ;
	virtual void __cdecl debug(bool value) = 0 ;
	virtual int __cdecl getDeviceId() = 0 ;
	virtual int __cdecl getInitialBaudRate() = 0 ;
	virtual _di_JSerialInputStream __cdecl getInputStream() = 0 ;
	virtual _di_JSerialOutputStream __cdecl getOutputStream() = 0 ;
	virtual int __cdecl getPid() = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getPortName() = 0 ;
	virtual int __cdecl getVid() = 0 ;
	virtual bool __cdecl isOpen() = 0 ;
	virtual bool __cdecl open() = 0 ;
	virtual int __cdecl read(_di_JUsbSerialInterface_UsbReadCallback mCallback) = 0 ;
	virtual void __cdecl setBaudRate(int param0) = 0 ;
	virtual void __cdecl setBreak(bool param0) = 0 ;
	virtual void __cdecl setDataBits(int param0) = 0 ;
	virtual void __cdecl setFlowControl(int param0) = 0 ;
	virtual void __cdecl setInitialBaudRate(int initialBaudRate) = 0 ;
	virtual void __cdecl setParity(int param0) = 0 ;
	virtual void __cdecl setPortName(Androidapi::Jni::Javatypes::_di_JString portName) = 0 ;
	virtual void __cdecl setStopBits(int param0) = 0 ;
	virtual void __cdecl syncClose() = 0 ;
	virtual bool __cdecl syncOpen() = 0 ;
	virtual int __cdecl syncRead(Androidapi::Jnibridge::TJavaArray__1<System::Byte>* buffer, int offset, int length, int timeout) = 0 /* overload */;
	virtual int __cdecl syncRead(Androidapi::Jnibridge::TJavaArray__1<System::Byte>* buffer, int timeout) = 0 /* overload */;
	virtual int __cdecl syncWrite(Androidapi::Jnibridge::TJavaArray__1<System::Byte>* buffer, int offset, int length, int timeout) = 0 /* overload */;
	virtual int __cdecl syncWrite(Androidapi::Jnibridge::TJavaArray__1<System::Byte>* buffer, int timeout) = 0 /* overload */;
	virtual void __cdecl write(Androidapi::Jnibridge::TJavaArray__1<System::Byte>* buffer) = 0 ;
};

class PASCALIMPLEMENTATION TJUsbSerialDevice : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSerialDeviceClass,_di_JUsbSerialDevice>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSerialDeviceClass,_di_JUsbSerialDevice> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJUsbSerialDevice() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSerialDeviceClass,_di_JUsbSerialDevice>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJUsbSerialDevice() { }
	
};


__interface  INTERFACE_UUID("{DF8DC4A6-42BF-4543-8F3A-0312D42E94C6}") JBLED112SerialDeviceClass  : public JUsbSerialDeviceClass 
{
	HIDESBASE virtual _di_JBLED112SerialDevice __cdecl init _DEPRECATED_ATTRIBUTE0 (Winsoft::Android::Usb::_di_JUsbDevice device, Winsoft::Android::Usb::_di_JUsbDeviceConnection connection) = 0 ;
};

__interface  INTERFACE_UUID("{67F74FEC-D8D2-4522-80E3-D1547D6B4D1F}") JBLED112SerialDevice  : public JUsbSerialDevice 
{
	HIDESBASE virtual void __cdecl close() = 0 ;
	virtual void __cdecl getBreak(_di_JUsbSerialInterface_UsbBreakCallback breakCallback) = 0 ;
	virtual void __cdecl getCTS(_di_JUsbSerialInterface_UsbCTSCallback ctsCallback) = 0 ;
	virtual void __cdecl getDSR(_di_JUsbSerialInterface_UsbDSRCallback dsrCallback) = 0 ;
	virtual void __cdecl getFrame(_di_JUsbSerialInterface_UsbFrameCallback frameCallback) = 0 ;
	virtual void __cdecl getOverrun(_di_JUsbSerialInterface_UsbOverrunCallback overrunCallback) = 0 ;
	virtual void __cdecl getParity(_di_JUsbSerialInterface_UsbParityCallback parityCallback) = 0 ;
	HIDESBASE virtual bool __cdecl open() = 0 ;
	HIDESBASE virtual void __cdecl setBaudRate(int baudRate) = 0 ;
	HIDESBASE virtual void __cdecl setBreak(bool state) = 0 ;
	HIDESBASE virtual void __cdecl setDataBits(int dataBits) = 0 ;
	virtual void __cdecl setDTR(bool state) = 0 ;
	HIDESBASE virtual void __cdecl setFlowControl(int flowControl) = 0 ;
	HIDESBASE virtual void __cdecl setParity(int parity) = 0 ;
	virtual void __cdecl setRTS(bool state) = 0 ;
	HIDESBASE virtual void __cdecl setStopBits(int stopBits) = 0 ;
	HIDESBASE virtual void __cdecl syncClose() = 0 ;
	HIDESBASE virtual bool __cdecl syncOpen() = 0 ;
};

class PASCALIMPLEMENTATION TJBLED112SerialDevice : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBLED112SerialDeviceClass,_di_JBLED112SerialDevice>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBLED112SerialDeviceClass,_di_JBLED112SerialDevice> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJBLED112SerialDevice() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBLED112SerialDeviceClass,_di_JBLED112SerialDevice>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJBLED112SerialDevice() { }
	
};


__interface  INTERFACE_UUID("{A2B94407-68C0-4B4B-98F8-500203D7D037}") JBuildConfigClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetAPPLICATION_ID() = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetBUILD_TYPE() = 0 ;
	virtual bool __fastcall _GetDEBUG() = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetFLAVOR() = 0 ;
	virtual int __fastcall _GetVERSION_CODE() = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetVERSION_NAME() = 0 ;
	HIDESBASE virtual _di_JBuildConfig __cdecl init() = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString APPLICATION_ID = {read=_GetAPPLICATION_ID};
	__property Androidapi::Jni::Javatypes::_di_JString BUILD_TYPE = {read=_GetBUILD_TYPE};
	__property bool DEBUG = {read=_GetDEBUG};
	__property Androidapi::Jni::Javatypes::_di_JString FLAVOR = {read=_GetFLAVOR};
	__property int VERSION_CODE = {read=_GetVERSION_CODE};
	__property Androidapi::Jni::Javatypes::_di_JString VERSION_NAME = {read=_GetVERSION_NAME};
};

__interface  INTERFACE_UUID("{2925C888-1328-4A38-886E-17C312383573}") JBuildConfig  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

class PASCALIMPLEMENTATION TJBuildConfig : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBuildConfigClass,_di_JBuildConfig>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBuildConfigClass,_di_JBuildConfig> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJBuildConfig() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JBuildConfigClass,_di_JBuildConfig>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJBuildConfig() { }
	
};


__interface  INTERFACE_UUID("{E5187A9F-4E1C-49F3-BF7C-04D1CEEA0EF6}") JCDCSerialDeviceClass  : public JUsbSerialDeviceClass 
{
	HIDESBASE virtual _di_JCDCSerialDevice __cdecl init(Winsoft::Android::Usb::_di_JUsbDevice device, Winsoft::Android::Usb::_di_JUsbDeviceConnection connection) = 0 /* overload */;
	HIDESBASE virtual _di_JCDCSerialDevice __cdecl init(Winsoft::Android::Usb::_di_JUsbDevice device, Winsoft::Android::Usb::_di_JUsbDeviceConnection connection, int iface) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{7B96B481-3F84-46F8-B2DF-D4AE4284B263}") JCDCSerialDevice  : public JUsbSerialDevice 
{
	HIDESBASE virtual void __cdecl close() = 0 ;
	virtual void __cdecl getBreak(_di_JUsbSerialInterface_UsbBreakCallback breakCallback) = 0 ;
	virtual void __cdecl getCTS(_di_JUsbSerialInterface_UsbCTSCallback ctsCallback) = 0 ;
	virtual void __cdecl getDSR(_di_JUsbSerialInterface_UsbDSRCallback dsrCallback) = 0 ;
	virtual void __cdecl getFrame(_di_JUsbSerialInterface_UsbFrameCallback frameCallback) = 0 ;
	HIDESBASE virtual int __cdecl getInitialBaudRate() = 0 ;
	virtual void __cdecl getOverrun(_di_JUsbSerialInterface_UsbOverrunCallback overrunCallback) = 0 ;
	virtual void __cdecl getParity(_di_JUsbSerialInterface_UsbParityCallback parityCallback) = 0 ;
	HIDESBASE virtual bool __cdecl open() = 0 ;
	HIDESBASE virtual void __cdecl setBaudRate(int baudRate) = 0 ;
	HIDESBASE virtual void __cdecl setBreak(bool state) = 0 ;
	HIDESBASE virtual void __cdecl setDataBits(int dataBits) = 0 ;
	virtual void __cdecl setDTR(bool state) = 0 ;
	HIDESBASE virtual void __cdecl setFlowControl(int flowControl) = 0 ;
	HIDESBASE virtual void __cdecl setInitialBaudRate(int initialBaudRate) = 0 ;
	HIDESBASE virtual void __cdecl setParity(int parity) = 0 ;
	virtual void __cdecl setRTS(bool state) = 0 ;
	HIDESBASE virtual void __cdecl setStopBits(int stopBits) = 0 ;
	HIDESBASE virtual void __cdecl syncClose() = 0 ;
	HIDESBASE virtual bool __cdecl syncOpen() = 0 ;
};

class PASCALIMPLEMENTATION TJCDCSerialDevice : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCDCSerialDeviceClass,_di_JCDCSerialDevice>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCDCSerialDeviceClass,_di_JCDCSerialDevice> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJCDCSerialDevice() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCDCSerialDeviceClass,_di_JCDCSerialDevice>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJCDCSerialDevice() { }
	
};


__interface  INTERFACE_UUID("{C8D9A8C0-9611-4DA1-AA15-16F4938254FF}") JCH34xIdsClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual bool __cdecl isDeviceSupported(int vendorId, int productId) = 0 ;
};

__interface  INTERFACE_UUID("{F541FDB1-3620-488A-90FF-82DF857B2841}") JCH34xIds  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

class PASCALIMPLEMENTATION TJCH34xIds : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCH34xIdsClass,_di_JCH34xIds>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCH34xIdsClass,_di_JCH34xIds> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJCH34xIds() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCH34xIdsClass,_di_JCH34xIds>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJCH34xIds() { }
	
};


__interface  INTERFACE_UUID("{2CDB26E0-B270-4FAC-88AF-45850BCDC71B}") JCH34xSerialDeviceClass  : public JUsbSerialDeviceClass 
{
	HIDESBASE virtual _di_JCH34xSerialDevice __cdecl init(Winsoft::Android::Usb::_di_JUsbDevice device, Winsoft::Android::Usb::_di_JUsbDeviceConnection connection) = 0 /* overload */;
	HIDESBASE virtual _di_JCH34xSerialDevice __cdecl init(Winsoft::Android::Usb::_di_JUsbDevice device, Winsoft::Android::Usb::_di_JUsbDeviceConnection connection, int iface) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{FF260E6A-99B6-40B4-B9B6-842489DB09F3}") JCH34xSerialDevice  : public JUsbSerialDevice 
{
	HIDESBASE virtual void __cdecl close() = 0 ;
	virtual void __cdecl getBreak(_di_JUsbSerialInterface_UsbBreakCallback breakCallback) = 0 ;
	virtual void __cdecl getCTS(_di_JUsbSerialInterface_UsbCTSCallback ctsCallback) = 0 ;
	virtual void __cdecl getDSR(_di_JUsbSerialInterface_UsbDSRCallback dsrCallback) = 0 ;
	virtual void __cdecl getFrame(_di_JUsbSerialInterface_UsbFrameCallback frameCallback) = 0 ;
	virtual void __cdecl getOverrun(_di_JUsbSerialInterface_UsbOverrunCallback overrunCallback) = 0 ;
	virtual void __cdecl getParity(_di_JUsbSerialInterface_UsbParityCallback parityCallback) = 0 ;
	HIDESBASE virtual bool __cdecl open() = 0 ;
	HIDESBASE virtual void __cdecl setBaudRate(int baudRate) = 0 ;
	HIDESBASE virtual void __cdecl setBreak(bool state) = 0 ;
	HIDESBASE virtual void __cdecl setDataBits(int dataBits) = 0 ;
	virtual void __cdecl setDTR(bool state) = 0 ;
	HIDESBASE virtual void __cdecl setFlowControl(int flowControl) = 0 ;
	HIDESBASE virtual void __cdecl setParity(int parity) = 0 ;
	virtual void __cdecl setRTS(bool state) = 0 ;
	HIDESBASE virtual void __cdecl setStopBits(int stopBits) = 0 ;
	HIDESBASE virtual void __cdecl syncClose() = 0 ;
	HIDESBASE virtual bool __cdecl syncOpen() = 0 ;
};

class PASCALIMPLEMENTATION TJCH34xSerialDevice : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCH34xSerialDeviceClass,_di_JCH34xSerialDevice>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCH34xSerialDeviceClass,_di_JCH34xSerialDevice> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJCH34xSerialDevice() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCH34xSerialDeviceClass,_di_JCH34xSerialDevice>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJCH34xSerialDevice() { }
	
};


__interface  INTERFACE_UUID("{A61BC53A-F159-4F59-AE16-9197BF9D4323}") JCH34xSerialDevice_1Class  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	
};

__interface  INTERFACE_UUID("{9C2225B6-E865-4B3F-AE6F-4E6372B6E03A}") JCH34xSerialDevice_1  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

class PASCALIMPLEMENTATION TJCH34xSerialDevice_1 : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCH34xSerialDevice_1Class,_di_JCH34xSerialDevice_1>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCH34xSerialDevice_1Class,_di_JCH34xSerialDevice_1> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJCH34xSerialDevice_1() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCH34xSerialDevice_1Class,_di_JCH34xSerialDevice_1>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJCH34xSerialDevice_1() { }
	
};


__interface  INTERFACE_UUID("{34A0608A-A38D-43EC-9C9E-44F0B53763EB}") JCH34xSerialDevice_FlowControlThreadClass  : public JAbstractWorkerThreadClass 
{
	
};

__interface  INTERFACE_UUID("{D66A6450-92F0-4870-9255-77075F03EC55}") JCH34xSerialDevice_FlowControlThread  : public JAbstractWorkerThread 
{
	virtual void __cdecl doRun() = 0 ;
	virtual bool __cdecl pollForCTS() = 0 ;
	virtual bool __cdecl pollForDSR() = 0 ;
};

class PASCALIMPLEMENTATION TJCH34xSerialDevice_FlowControlThread : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCH34xSerialDevice_FlowControlThreadClass,_di_JCH34xSerialDevice_FlowControlThread>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCH34xSerialDevice_FlowControlThreadClass,_di_JCH34xSerialDevice_FlowControlThread> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJCH34xSerialDevice_FlowControlThread() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCH34xSerialDevice_FlowControlThreadClass,_di_JCH34xSerialDevice_FlowControlThread>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJCH34xSerialDevice_FlowControlThread() { }
	
};


__interface  INTERFACE_UUID("{B6ED48CD-4440-48A0-928B-9A9C35348864}") JCP2102SerialDeviceClass  : public JUsbSerialDeviceClass 
{
	HIDESBASE virtual _di_JCP2102SerialDevice __cdecl init(Winsoft::Android::Usb::_di_JUsbDevice device, Winsoft::Android::Usb::_di_JUsbDeviceConnection connection) = 0 /* overload */;
	HIDESBASE virtual _di_JCP2102SerialDevice __cdecl init(Winsoft::Android::Usb::_di_JUsbDevice device, Winsoft::Android::Usb::_di_JUsbDeviceConnection connection, int iface) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{C6134F1C-3F64-4C1C-8A95-254A410D3275}") JCP2102SerialDevice  : public JUsbSerialDevice 
{
	HIDESBASE virtual void __cdecl close() = 0 ;
	virtual void __cdecl getBreak(_di_JUsbSerialInterface_UsbBreakCallback breakCallback) = 0 ;
	virtual void __cdecl getCTS(_di_JUsbSerialInterface_UsbCTSCallback ctsCallback) = 0 ;
	virtual void __cdecl getDSR(_di_JUsbSerialInterface_UsbDSRCallback dsrCallback) = 0 ;
	virtual void __cdecl getFrame(_di_JUsbSerialInterface_UsbFrameCallback frameCallback) = 0 ;
	virtual void __cdecl getOverrun(_di_JUsbSerialInterface_UsbOverrunCallback overrunCallback) = 0 ;
	virtual void __cdecl getParity(_di_JUsbSerialInterface_UsbParityCallback parityCallback) = 0 ;
	HIDESBASE virtual bool __cdecl open() = 0 ;
	HIDESBASE virtual void __cdecl setBaudRate(int baudRate) = 0 ;
	HIDESBASE virtual void __cdecl setBreak(bool state) = 0 ;
	HIDESBASE virtual void __cdecl setDataBits(int dataBits) = 0 ;
	virtual void __cdecl setDTR(bool state) = 0 ;
	HIDESBASE virtual void __cdecl setFlowControl(int flowControl) = 0 ;
	HIDESBASE virtual void __cdecl setParity(int parity) = 0 ;
	virtual void __cdecl setRTS(bool state) = 0 ;
	HIDESBASE virtual void __cdecl setStopBits(int stopBits) = 0 ;
	HIDESBASE virtual void __cdecl syncClose() = 0 ;
	HIDESBASE virtual bool __cdecl syncOpen() = 0 ;
};

class PASCALIMPLEMENTATION TJCP2102SerialDevice : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCP2102SerialDeviceClass,_di_JCP2102SerialDevice>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCP2102SerialDeviceClass,_di_JCP2102SerialDevice> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJCP2102SerialDevice() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCP2102SerialDeviceClass,_di_JCP2102SerialDevice>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJCP2102SerialDevice() { }
	
};


__interface  INTERFACE_UUID("{7C64E60D-353F-4C0B-9054-1BA2B3FF7768}") JCP2102SerialDevice_1Class  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	
};

__interface  INTERFACE_UUID("{AF104C4C-21A2-4925-B85E-A325179690D1}") JCP2102SerialDevice_1  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

class PASCALIMPLEMENTATION TJCP2102SerialDevice_1 : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCP2102SerialDevice_1Class,_di_JCP2102SerialDevice_1>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCP2102SerialDevice_1Class,_di_JCP2102SerialDevice_1> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJCP2102SerialDevice_1() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCP2102SerialDevice_1Class,_di_JCP2102SerialDevice_1>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJCP2102SerialDevice_1() { }
	
};


__interface  INTERFACE_UUID("{792CC572-4A4C-43E0-8509-57B7E061295A}") JCP2102SerialDevice_FlowControlThreadClass  : public JAbstractWorkerThreadClass 
{
	
};

__interface  INTERFACE_UUID("{698979EC-5B36-48EF-A449-5D92B8C8EBE9}") JCP2102SerialDevice_FlowControlThread  : public JAbstractWorkerThread 
{
	virtual void __cdecl doRun() = 0 ;
};

class PASCALIMPLEMENTATION TJCP2102SerialDevice_FlowControlThread : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCP2102SerialDevice_FlowControlThreadClass,_di_JCP2102SerialDevice_FlowControlThread>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCP2102SerialDevice_FlowControlThreadClass,_di_JCP2102SerialDevice_FlowControlThread> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJCP2102SerialDevice_FlowControlThread() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCP2102SerialDevice_FlowControlThreadClass,_di_JCP2102SerialDevice_FlowControlThread>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJCP2102SerialDevice_FlowControlThread() { }
	
};


__interface  INTERFACE_UUID("{40F7F107-5557-4BC4-825E-4D7E447673F6}") JCP210xIdsClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JCP210xIds __cdecl init() = 0 ;
	virtual bool __cdecl isDeviceSupported(int vendorId, int productId) = 0 ;
};

__interface  INTERFACE_UUID("{6FD0DF06-A8EF-49F7-8D47-0BCB2D60AF22}") JCP210xIds  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

class PASCALIMPLEMENTATION TJCP210xIds : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCP210xIdsClass,_di_JCP210xIds>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCP210xIdsClass,_di_JCP210xIds> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJCP210xIds() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCP210xIdsClass,_di_JCP210xIds>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJCP210xIds() { }
	
};


__interface  INTERFACE_UUID("{B17F0F5B-72BA-4A6D-B098-F9E376A6C397}") JCP2130IdsClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JCP2130Ids __cdecl init() = 0 ;
	virtual bool __cdecl isDeviceSupported(int vendorId, int productId) = 0 ;
};

__interface  INTERFACE_UUID("{157B9FF3-3E51-4107-8958-C3AC576DE39A}") JCP2130Ids  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

class PASCALIMPLEMENTATION TJCP2130Ids : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCP2130IdsClass,_di_JCP2130Ids>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCP2130IdsClass,_di_JCP2130Ids> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJCP2130Ids() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCP2130IdsClass,_di_JCP2130Ids>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJCP2130Ids() { }
	
};


__interface  INTERFACE_UUID("{85A1299C-6781-432E-BA50-062D616DCC6C}") JUsbSpiDeviceClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JUsbSpiDevice __cdecl init(Winsoft::Android::Usb::_di_JUsbDevice device, Winsoft::Android::Usb::_di_JUsbDeviceConnection connection) = 0 ;
	virtual _di_JUsbSpiDevice __cdecl createUsbSerialDevice(Winsoft::Android::Usb::_di_JUsbDevice device, Winsoft::Android::Usb::_di_JUsbDeviceConnection connection) = 0 /* overload */;
	virtual _di_JUsbSpiDevice __cdecl createUsbSerialDevice(Winsoft::Android::Usb::_di_JUsbDevice device, Winsoft::Android::Usb::_di_JUsbDeviceConnection connection, int iface) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{AA92CF25-143C-47BE-967F-0A736F823386}") JUsbSpiDevice  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual void __cdecl closeSPI() = 0 ;
	virtual bool __cdecl connectSPI() = 0 ;
	virtual int __cdecl getClockDivider() = 0 ;
	virtual int __cdecl getSelectedSlave() = 0 ;
	virtual void __cdecl readMISO(int param0) = 0 ;
	virtual void __cdecl selectSlave(int param0) = 0 ;
	virtual void __cdecl setClock(int param0) = 0 ;
	virtual void __cdecl setMISOCallback(_di_JUsbSpiInterface_UsbMISOCallback misoCallback) = 0 ;
	virtual void __cdecl writeMOSI(Androidapi::Jnibridge::TJavaArray__1<System::Byte>* param0) = 0 ;
	virtual void __cdecl writeRead(Androidapi::Jnibridge::TJavaArray__1<System::Byte>* param0, int param1) = 0 ;
};

class PASCALIMPLEMENTATION TJUsbSpiDevice : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSpiDeviceClass,_di_JUsbSpiDevice>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSpiDeviceClass,_di_JUsbSpiDevice> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJUsbSpiDevice() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSpiDeviceClass,_di_JUsbSpiDevice>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJUsbSpiDevice() { }
	
};


__interface  INTERFACE_UUID("{E54C6AD1-FF50-4034-A7F2-0DC1D7F4CBFF}") JCP2130SpiDeviceClass  : public JUsbSpiDeviceClass 
{
	virtual int __fastcall _GetCLOCK_12MHz() = 0 ;
	virtual int __fastcall _GetCLOCK_187_5KHz() = 0 ;
	virtual int __fastcall _GetCLOCK_1_5MHz() = 0 ;
	virtual int __fastcall _GetCLOCK_375KHz() = 0 ;
	virtual int __fastcall _GetCLOCK_3MHz() = 0 ;
	virtual int __fastcall _GetCLOCK_6MHz() = 0 ;
	virtual int __fastcall _GetCLOCK_750KHz() = 0 ;
	virtual int __fastcall _GetCLOCK_93_75KHz() = 0 ;
	HIDESBASE virtual _di_JCP2130SpiDevice __cdecl init(Winsoft::Android::Usb::_di_JUsbDevice device, Winsoft::Android::Usb::_di_JUsbDeviceConnection connection) = 0 /* overload */;
	HIDESBASE virtual _di_JCP2130SpiDevice __cdecl init(Winsoft::Android::Usb::_di_JUsbDevice device, Winsoft::Android::Usb::_di_JUsbDeviceConnection connection, int iface) = 0 /* overload */;
	__property int CLOCK_12MHz = {read=_GetCLOCK_12MHz};
	__property int CLOCK_187_5KHz = {read=_GetCLOCK_187_5KHz};
	__property int CLOCK_1_5MHz = {read=_GetCLOCK_1_5MHz};
	__property int CLOCK_375KHz = {read=_GetCLOCK_375KHz};
	__property int CLOCK_3MHz = {read=_GetCLOCK_3MHz};
	__property int CLOCK_6MHz = {read=_GetCLOCK_6MHz};
	__property int CLOCK_750KHz = {read=_GetCLOCK_750KHz};
	__property int CLOCK_93_75KHz = {read=_GetCLOCK_93_75KHz};
};

__interface  INTERFACE_UUID("{64F3F67C-114B-440E-8523-021B26B785D5}") JCP2130SpiDevice  : public JUsbSpiDevice 
{
	HIDESBASE virtual void __cdecl closeSPI() = 0 ;
	HIDESBASE virtual bool __cdecl connectSPI() = 0 ;
	HIDESBASE virtual int __cdecl getClockDivider() = 0 ;
	HIDESBASE virtual int __cdecl getSelectedSlave() = 0 ;
	HIDESBASE virtual void __cdecl readMISO(int lengthBuffer) = 0 ;
	HIDESBASE virtual void __cdecl selectSlave(int nSlave) = 0 ;
	HIDESBASE virtual void __cdecl setClock(int clockDivider) = 0 ;
	HIDESBASE virtual void __cdecl writeMOSI(Androidapi::Jnibridge::TJavaArray__1<System::Byte>* buffer) = 0 ;
	HIDESBASE virtual void __cdecl writeRead(Androidapi::Jnibridge::TJavaArray__1<System::Byte>* buffer, int lengthRead) = 0 ;
};

class PASCALIMPLEMENTATION TJCP2130SpiDevice : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCP2130SpiDeviceClass,_di_JCP2130SpiDevice>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCP2130SpiDeviceClass,_di_JCP2130SpiDevice> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJCP2130SpiDevice() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JCP2130SpiDeviceClass,_di_JCP2130SpiDevice>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJCP2130SpiDevice() { }
	
};


__interface  INTERFACE_UUID("{4648BEA7-7C17-4032-A3BD-1F55DE73AA6B}") JFTDISerialDeviceClass  : public JUsbSerialDeviceClass 
{
	virtual int __fastcall _GetFTDI_BAUDRATE_115200() = 0 ;
	virtual int __fastcall _GetFTDI_BAUDRATE_1200() = 0 ;
	virtual int __fastcall _GetFTDI_BAUDRATE_19200() = 0 ;
	virtual int __fastcall _GetFTDI_BAUDRATE_230400() = 0 ;
	virtual int __fastcall _GetFTDI_BAUDRATE_2400() = 0 ;
	virtual int __fastcall _GetFTDI_BAUDRATE_300() = 0 ;
	virtual int __fastcall _GetFTDI_BAUDRATE_38400() = 0 ;
	virtual int __fastcall _GetFTDI_BAUDRATE_460800() = 0 ;
	virtual int __fastcall _GetFTDI_BAUDRATE_4800() = 0 ;
	virtual int __fastcall _GetFTDI_BAUDRATE_57600() = 0 ;
	virtual int __fastcall _GetFTDI_BAUDRATE_600() = 0 ;
	virtual int __fastcall _GetFTDI_BAUDRATE_921600() = 0 ;
	virtual int __fastcall _GetFTDI_BAUDRATE_9600() = 0 ;
	HIDESBASE virtual _di_JFTDISerialDevice __cdecl init(Winsoft::Android::Usb::_di_JUsbDevice device, Winsoft::Android::Usb::_di_JUsbDeviceConnection connection) = 0 /* overload */;
	HIDESBASE virtual _di_JFTDISerialDevice __cdecl init(Winsoft::Android::Usb::_di_JUsbDevice device, Winsoft::Android::Usb::_di_JUsbDeviceConnection connection, int iface) = 0 /* overload */;
	__property int FTDI_BAUDRATE_115200 = {read=_GetFTDI_BAUDRATE_115200};
	__property int FTDI_BAUDRATE_1200 = {read=_GetFTDI_BAUDRATE_1200};
	__property int FTDI_BAUDRATE_19200 = {read=_GetFTDI_BAUDRATE_19200};
	__property int FTDI_BAUDRATE_230400 = {read=_GetFTDI_BAUDRATE_230400};
	__property int FTDI_BAUDRATE_2400 = {read=_GetFTDI_BAUDRATE_2400};
	__property int FTDI_BAUDRATE_300 = {read=_GetFTDI_BAUDRATE_300};
	__property int FTDI_BAUDRATE_38400 = {read=_GetFTDI_BAUDRATE_38400};
	__property int FTDI_BAUDRATE_460800 = {read=_GetFTDI_BAUDRATE_460800};
	__property int FTDI_BAUDRATE_4800 = {read=_GetFTDI_BAUDRATE_4800};
	__property int FTDI_BAUDRATE_57600 = {read=_GetFTDI_BAUDRATE_57600};
	__property int FTDI_BAUDRATE_600 = {read=_GetFTDI_BAUDRATE_600};
	__property int FTDI_BAUDRATE_921600 = {read=_GetFTDI_BAUDRATE_921600};
	__property int FTDI_BAUDRATE_9600 = {read=_GetFTDI_BAUDRATE_9600};
};

__interface  INTERFACE_UUID("{66111A55-778A-4205-91D0-41669ACCD3EC}") JFTDISerialDevice  : public JUsbSerialDevice 
{
	virtual _di_JFTDISerialDevice_FTDIUtilities __fastcall _GetftdiUtilities() = 0 ;
	virtual void __fastcall _SetftdiUtilities(_di_JFTDISerialDevice_FTDIUtilities Value) = 0 ;
	HIDESBASE virtual void __cdecl close() = 0 ;
	virtual void __cdecl getBreak(_di_JUsbSerialInterface_UsbBreakCallback breakCallback) = 0 ;
	virtual void __cdecl getCTS(_di_JUsbSerialInterface_UsbCTSCallback ctsCallback) = 0 ;
	virtual void __cdecl getDSR(_di_JUsbSerialInterface_UsbDSRCallback dsrCallback) = 0 ;
	virtual void __cdecl getFrame(_di_JUsbSerialInterface_UsbFrameCallback frameCallback) = 0 ;
	virtual void __cdecl getOverrun(_di_JUsbSerialInterface_UsbOverrunCallback overrunCallback) = 0 ;
	virtual void __cdecl getParity(_di_JUsbSerialInterface_UsbParityCallback parityCallback) = 0 ;
	HIDESBASE virtual bool __cdecl open() = 0 ;
	HIDESBASE virtual void __cdecl setBaudRate(int baudRate) = 0 ;
	HIDESBASE virtual void __cdecl setBreak(bool state) = 0 ;
	HIDESBASE virtual void __cdecl setDataBits(int dataBits) = 0 ;
	virtual void __cdecl setDTR(bool state) = 0 ;
	HIDESBASE virtual void __cdecl setFlowControl(int flowControl) = 0 ;
	HIDESBASE virtual void __cdecl setParity(int parity) = 0 ;
	virtual void __cdecl setRTS(bool state) = 0 ;
	HIDESBASE virtual void __cdecl setStopBits(int stopBits) = 0 ;
	HIDESBASE virtual void __cdecl syncClose() = 0 ;
	HIDESBASE virtual bool __cdecl syncOpen() = 0 ;
	HIDESBASE virtual int __cdecl syncRead(Androidapi::Jnibridge::TJavaArray__1<System::Byte>* buffer, int timeout) = 0 /* overload */;
	HIDESBASE virtual int __cdecl syncRead(Androidapi::Jnibridge::TJavaArray__1<System::Byte>* buffer, int offset, int length, int timeout) = 0 /* overload */;
	__property _di_JFTDISerialDevice_FTDIUtilities ftdiUtilities = {read=_GetftdiUtilities, write=_SetftdiUtilities};
};

class PASCALIMPLEMENTATION TJFTDISerialDevice : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JFTDISerialDeviceClass,_di_JFTDISerialDevice>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JFTDISerialDeviceClass,_di_JFTDISerialDevice> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJFTDISerialDevice() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JFTDISerialDeviceClass,_di_JFTDISerialDevice>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJFTDISerialDevice() { }
	
};


__interface  INTERFACE_UUID("{453D4805-72E6-4AFD-B93A-7D4535F797AB}") JFTDISerialDevice_FTDIUtilitiesClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JFTDISerialDevice_FTDIUtilities __cdecl init(_di_JFTDISerialDevice this_0) = 0 ;
};

__interface  INTERFACE_UUID("{0B40C5B0-C4FF-4B5F-941F-4EEB20625381}") JFTDISerialDevice_FTDIUtilities  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte>* __cdecl adaptArray(Androidapi::Jnibridge::TJavaArray__1<System::Byte>* ftdiData) = 0 ;
	virtual void __cdecl checkModemStatus(Androidapi::Jnibridge::TJavaArray__1<System::Byte>* data) = 0 ;
};

class PASCALIMPLEMENTATION TJFTDISerialDevice_FTDIUtilities : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JFTDISerialDevice_FTDIUtilitiesClass,_di_JFTDISerialDevice_FTDIUtilities>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JFTDISerialDevice_FTDIUtilitiesClass,_di_JFTDISerialDevice_FTDIUtilities> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJFTDISerialDevice_FTDIUtilities() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JFTDISerialDevice_FTDIUtilitiesClass,_di_JFTDISerialDevice_FTDIUtilities>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJFTDISerialDevice_FTDIUtilities() { }
	
};


__interface  INTERFACE_UUID("{BBEECE68-D111-4AE7-82AF-CAE6E80EA9BB}") JFTDISioIdsClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual bool __cdecl isDeviceSupported(Winsoft::Android::Usb::_di_JUsbDevice dev) = 0 ;
};

__interface  INTERFACE_UUID("{4F3E56E4-A5A5-4E82-BC13-A879E9AEF030}") JFTDISioIds  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

class PASCALIMPLEMENTATION TJFTDISioIds : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JFTDISioIdsClass,_di_JFTDISioIds>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JFTDISioIdsClass,_di_JFTDISioIds> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJFTDISioIds() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JFTDISioIdsClass,_di_JFTDISioIds>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJFTDISioIds() { }
	
};


__interface  INTERFACE_UUID("{D29B4F4C-66FE-4DDB-BAE2-8629B6CA18FD}") JHelpers1Class  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	
};

__interface  INTERFACE_UUID("{DA0DAFEB-E5B4-4D65-8A99-03B64AB41BCC}") JHelpers1  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

class PASCALIMPLEMENTATION TJHelpers1 : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHelpers1Class,_di_JHelpers1>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHelpers1Class,_di_JHelpers1> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJHelpers1() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHelpers1Class,_di_JHelpers1>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJHelpers1() { }
	
};


__interface  INTERFACE_UUID("{E59D41C7-624F-457B-91DA-03D8C373A4AA}") JHexDataClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl hex4digits(Androidapi::Jni::Javatypes::_di_JString id) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl hexToString(Androidapi::Jnibridge::TJavaArray__1<System::Byte>* data) = 0 ;
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte>* __cdecl stringTobytes(Androidapi::Jni::Javatypes::_di_JString hexString) = 0 ;
};

__interface  INTERFACE_UUID("{5C3AC3DA-BBC8-4E47-94A6-964B4F45D6E4}") JHexData  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

class PASCALIMPLEMENTATION TJHexData : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHexDataClass,_di_JHexData>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHexDataClass,_di_JHexData> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJHexData() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JHexDataClass,_di_JHexData>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJHexData() { }
	
};


__interface  INTERFACE_UUID("{3C1ACD76-32D4-4A64-B9D6-CB595D55F6C1}") JPL2303IdsClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual bool __cdecl isDeviceSupported(int vendorId, int productId) = 0 ;
};

__interface  INTERFACE_UUID("{DEFA3719-E7E0-42C4-8FF1-506B19F5C7DA}") JPL2303Ids  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

class PASCALIMPLEMENTATION TJPL2303Ids : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JPL2303IdsClass,_di_JPL2303Ids>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JPL2303IdsClass,_di_JPL2303Ids> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJPL2303Ids() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JPL2303IdsClass,_di_JPL2303Ids>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJPL2303Ids() { }
	
};


__interface  INTERFACE_UUID("{F11BB563-6ED3-4361-A714-AD747782E8CE}") JPL2303SerialDeviceClass  : public JUsbSerialDeviceClass 
{
	HIDESBASE virtual _di_JPL2303SerialDevice __cdecl init(Winsoft::Android::Usb::_di_JUsbDevice device, Winsoft::Android::Usb::_di_JUsbDeviceConnection connection) = 0 /* overload */;
	HIDESBASE virtual _di_JPL2303SerialDevice __cdecl init(Winsoft::Android::Usb::_di_JUsbDevice device, Winsoft::Android::Usb::_di_JUsbDeviceConnection connection, int iface) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{DB59DE79-6477-4FDA-9ED7-D875982BDF2F}") JPL2303SerialDevice  : public JUsbSerialDevice 
{
	HIDESBASE virtual void __cdecl close() = 0 ;
	virtual void __cdecl getBreak(_di_JUsbSerialInterface_UsbBreakCallback breakCallback) = 0 ;
	virtual void __cdecl getCTS(_di_JUsbSerialInterface_UsbCTSCallback ctsCallback) = 0 ;
	virtual void __cdecl getDSR(_di_JUsbSerialInterface_UsbDSRCallback dsrCallback) = 0 ;
	virtual void __cdecl getFrame(_di_JUsbSerialInterface_UsbFrameCallback frameCallback) = 0 ;
	virtual void __cdecl getOverrun(_di_JUsbSerialInterface_UsbOverrunCallback overrunCallback) = 0 ;
	virtual void __cdecl getParity(_di_JUsbSerialInterface_UsbParityCallback parityCallback) = 0 ;
	HIDESBASE virtual bool __cdecl open() = 0 ;
	HIDESBASE virtual void __cdecl setBaudRate(int baudRate) = 0 ;
	HIDESBASE virtual void __cdecl setBreak(bool state) = 0 ;
	HIDESBASE virtual void __cdecl setDataBits(int dataBits) = 0 ;
	virtual void __cdecl setDTR(bool state) = 0 ;
	HIDESBASE virtual void __cdecl setFlowControl(int flowControl) = 0 ;
	HIDESBASE virtual void __cdecl setParity(int parity) = 0 ;
	virtual void __cdecl setRTS(bool state) = 0 ;
	HIDESBASE virtual void __cdecl setStopBits(int stopBits) = 0 ;
	HIDESBASE virtual void __cdecl syncClose() = 0 ;
	HIDESBASE virtual bool __cdecl syncOpen() = 0 ;
};

class PASCALIMPLEMENTATION TJPL2303SerialDevice : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JPL2303SerialDeviceClass,_di_JPL2303SerialDevice>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JPL2303SerialDeviceClass,_di_JPL2303SerialDevice> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJPL2303SerialDevice() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JPL2303SerialDeviceClass,_di_JPL2303SerialDevice>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJPL2303SerialDevice() { }
	
};


__interface  INTERFACE_UUID("{F9BF3CAD-1EE1-4AE2-A907-24C8C7D9AF4D}") JSafeUsbRequestClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JSafeUsbRequest __cdecl init() = 0 ;
};

__interface  INTERFACE_UUID("{73CF6D8D-2B92-46D1-A9A2-DB7731015669}") JSafeUsbRequest  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual bool __cdecl queue(Androidapi::Jni::Javatypes::_di_JByteBuffer buffer, int length) = 0 ;
};

class PASCALIMPLEMENTATION TJSafeUsbRequest : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSafeUsbRequestClass,_di_JSafeUsbRequest>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSafeUsbRequestClass,_di_JSafeUsbRequest> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJSafeUsbRequest() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSafeUsbRequestClass,_di_JSafeUsbRequest>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJSafeUsbRequest() { }
	
};


__interface  INTERFACE_UUID("{A836CAC3-E581-4F0C-9FF3-9E8094772AFF}") JSerialBufferClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual int __fastcall _GetDEFAULT_READ_BUFFER_SIZE() = 0 ;
	virtual int __fastcall _GetDEFAULT_WRITE_BUFFER_SIZE() = 0 ;
	HIDESBASE virtual _di_JSerialBuffer __cdecl init(bool version) = 0 ;
	__property int DEFAULT_READ_BUFFER_SIZE = {read=_GetDEFAULT_READ_BUFFER_SIZE};
	__property int DEFAULT_WRITE_BUFFER_SIZE = {read=_GetDEFAULT_WRITE_BUFFER_SIZE};
};

__interface  INTERFACE_UUID("{9D4B0281-383D-4E0D-993E-4383FAC837DA}") JSerialBuffer  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual void __cdecl clearReadBuffer() = 0 ;
	virtual void __cdecl debug(bool value) = 0 ;
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte>* __cdecl getBufferCompatible() = 0 ;
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte>* __cdecl getDataReceived() = 0 ;
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte>* __cdecl getDataReceivedCompatible(int numberBytes) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JByteBuffer __cdecl getReadBuffer() = 0 ;
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte>* __cdecl getWriteBuffer() = 0 ;
	virtual void __cdecl putReadBuffer(Androidapi::Jni::Javatypes::_di_JByteBuffer data) = 0 ;
	virtual void __cdecl putWriteBuffer(Androidapi::Jnibridge::TJavaArray__1<System::Byte>* data) = 0 ;
	virtual void __cdecl resetWriteBuffer() = 0 ;
};

class PASCALIMPLEMENTATION TJSerialBuffer : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSerialBufferClass,_di_JSerialBuffer>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSerialBufferClass,_di_JSerialBuffer> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJSerialBuffer() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSerialBufferClass,_di_JSerialBuffer>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJSerialBuffer() { }
	
};


__interface  INTERFACE_UUID("{DE8E1D6C-9490-4D7B-9CEE-91F0C8A113F9}") JSerialBuffer_SynchronizedBufferClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JSerialBuffer_SynchronizedBuffer __cdecl init(_di_JSerialBuffer param0) = 0 ;
};

__interface  INTERFACE_UUID("{34B286C8-B77D-437D-A0A6-87C8C16714BB}") JSerialBuffer_SynchronizedBuffer  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte>* __cdecl get() = 0 ;
	virtual void __cdecl put(Androidapi::Jnibridge::TJavaArray__1<System::Byte>* src) = 0 ;
	virtual void __cdecl reset() = 0 ;
};

class PASCALIMPLEMENTATION TJSerialBuffer_SynchronizedBuffer : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSerialBuffer_SynchronizedBufferClass,_di_JSerialBuffer_SynchronizedBuffer>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSerialBuffer_SynchronizedBufferClass,_di_JSerialBuffer_SynchronizedBuffer> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJSerialBuffer_SynchronizedBuffer() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSerialBuffer_SynchronizedBufferClass,_di_JSerialBuffer_SynchronizedBuffer>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJSerialBuffer_SynchronizedBuffer() { }
	
};


__interface  INTERFACE_UUID("{F4BEA54B-BAFA-4F98-8A29-C008B6ACCE45}") JSerialInputStreamClass  : public Androidapi::Jni::Javatypes::JInputStreamClass 
{
	HIDESBASE virtual _di_JSerialInputStream __cdecl init(_di_JUsbSerialInterface device) = 0 /* overload */;
	HIDESBASE virtual _di_JSerialInputStream __cdecl init(_di_JUsbSerialInterface device, int maxBufferSize) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{76AFAFE6-17D3-42CF-9456-C7C4EDC043B5}") JSerialInputStream  : public Androidapi::Jni::Javatypes::JInputStream 
{
	HIDESBASE virtual int __cdecl available() = 0 ;
	HIDESBASE virtual int __cdecl read(Androidapi::Jnibridge::TJavaArray__1<System::Byte>* b) = 0 /* overload */;
	HIDESBASE virtual int __cdecl read(Androidapi::Jnibridge::TJavaArray__1<System::Byte>* b, int off, int len) = 0 /* overload */;
	HIDESBASE virtual int __cdecl read() = 0 /* overload */;
	virtual void __cdecl setTimeout(int timeout) = 0 ;
};

class PASCALIMPLEMENTATION TJSerialInputStream : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSerialInputStreamClass,_di_JSerialInputStream>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSerialInputStreamClass,_di_JSerialInputStream> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJSerialInputStream() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSerialInputStreamClass,_di_JSerialInputStream>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJSerialInputStream() { }
	
};


__interface  INTERFACE_UUID("{E8E6A3E1-5A12-462C-A401-3423D8D05E43}") JSerialOutputStreamClass  : public Androidapi::Jni::Javatypes::JOutputStreamClass 
{
	HIDESBASE virtual _di_JSerialOutputStream __cdecl init(_di_JUsbSerialInterface device) = 0 ;
};

__interface  INTERFACE_UUID("{F426A5B0-E4CC-4E78-9A29-A6A7A580141D}") JSerialOutputStream  : public Androidapi::Jni::Javatypes::JOutputStream 
{
	virtual void __cdecl setTimeout(int timeout) = 0 ;
	HIDESBASE virtual void __cdecl write(Androidapi::Jnibridge::TJavaArray__1<System::Byte>* b) = 0 /* overload */;
	HIDESBASE virtual void __cdecl write(Androidapi::Jnibridge::TJavaArray__1<System::Byte>* b, int off, int len) = 0 /* overload */;
	HIDESBASE virtual void __cdecl write(int b) = 0 /* overload */;
};

class PASCALIMPLEMENTATION TJSerialOutputStream : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSerialOutputStreamClass,_di_JSerialOutputStream>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSerialOutputStreamClass,_di_JSerialOutputStream> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJSerialOutputStream() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSerialOutputStreamClass,_di_JSerialOutputStream>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJSerialOutputStream() { }
	
};


__interface  INTERFACE_UUID("{FFB8A7E6-F7CE-4A97-A59B-FBFE3B963F56}") JSerialPortBuilderClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual _di_JSerialPortBuilder __cdecl createSerialPortBuilder(_di_JSerialPortCallback serialPortCallback) = 0 ;
};

__interface  INTERFACE_UUID("{25AE9F39-728D-4815-BD32-E2AE477938BE}") JSerialPortBuilder  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual bool __cdecl disconnectDevice(_di_JUsbSerialDevice usbSerialDevice) = 0 /* overload */;
	virtual bool __cdecl disconnectDevice(Winsoft::Android::Usb::_di_JUsbDevice usbDevice) = 0 /* overload */;
	virtual Androidapi::Jni::Javatypes::_di_JList __cdecl getPossibleSerialPorts(Androidapi::Jni::Graphicscontentviewtext::_di_JContext context) = 0 ;
	virtual bool __cdecl getSerialPorts(Androidapi::Jni::Graphicscontentviewtext::_di_JContext context) = 0 ;
	virtual bool __cdecl openSerialPorts(Androidapi::Jni::Graphicscontentviewtext::_di_JContext context, int baudRate, int dataBits, int stopBits, int parity, int flowControl) = 0 ;
	virtual void __cdecl unregisterListeners(Androidapi::Jni::Graphicscontentviewtext::_di_JContext context) = 0 ;
};

class PASCALIMPLEMENTATION TJSerialPortBuilder : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSerialPortBuilderClass,_di_JSerialPortBuilder>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSerialPortBuilderClass,_di_JSerialPortBuilder> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJSerialPortBuilder() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSerialPortBuilderClass,_di_JSerialPortBuilder>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJSerialPortBuilder() { }
	
};


__interface  INTERFACE_UUID("{38D6A977-1D2D-4D50-80EE-5972E7B891E4}") JSerialPortBuilder_1Class  : public Androidapi::Jni::Graphicscontentviewtext::JBroadcastReceiverClass 
{
	
};

__interface  INTERFACE_UUID("{7D4DBEB7-1C0F-474E-8D93-995789081465}") JSerialPortBuilder_1  : public Androidapi::Jni::Graphicscontentviewtext::JBroadcastReceiver 
{
	HIDESBASE virtual void __cdecl onReceive(Androidapi::Jni::Graphicscontentviewtext::_di_JContext context, Androidapi::Jni::Graphicscontentviewtext::_di_JIntent intent) = 0 ;
};

class PASCALIMPLEMENTATION TJSerialPortBuilder_1 : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSerialPortBuilder_1Class,_di_JSerialPortBuilder_1>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSerialPortBuilder_1Class,_di_JSerialPortBuilder_1> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJSerialPortBuilder_1() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSerialPortBuilder_1Class,_di_JSerialPortBuilder_1>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJSerialPortBuilder_1() { }
	
};


__interface  INTERFACE_UUID("{946DAEE1-D715-49CB-9499-3C50C9D114CD}") JSerialPortBuilder_InitSerialPortThreadClass  : public Androidapi::Jni::Javatypes::JThreadClass 
{
	HIDESBASE virtual _di_JSerialPortBuilder_InitSerialPortThread __cdecl init(_di_JSerialPortBuilder param0, Androidapi::Jni::Javatypes::_di_JList usbSerialDevices) = 0 ;
};

__interface  INTERFACE_UUID("{E85806A4-5AC7-46E6-98DC-D7FEEC402F34}") JSerialPortBuilder_InitSerialPortThread  : public Androidapi::Jni::Javatypes::JThread 
{
	HIDESBASE virtual void __cdecl run() = 0 ;
};

class PASCALIMPLEMENTATION TJSerialPortBuilder_InitSerialPortThread : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSerialPortBuilder_InitSerialPortThreadClass,_di_JSerialPortBuilder_InitSerialPortThread>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSerialPortBuilder_InitSerialPortThreadClass,_di_JSerialPortBuilder_InitSerialPortThread> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJSerialPortBuilder_InitSerialPortThread() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSerialPortBuilder_InitSerialPortThreadClass,_di_JSerialPortBuilder_InitSerialPortThread>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJSerialPortBuilder_InitSerialPortThread() { }
	
};


__interface  INTERFACE_UUID("{2331AEAB-3BDC-495E-8A58-3F9D797B05EF}") JSerialPortBuilder_PendingUsbPermissionClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	
};

__interface  INTERFACE_UUID("{91056204-08E2-4B78-AF43-7C38C013A286}") JSerialPortBuilder_PendingUsbPermission  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual Androidapi::Jni::App::_di_JPendingIntent __fastcall _GetpendingIntent() = 0 ;
	virtual void __fastcall _SetpendingIntent(Androidapi::Jni::App::_di_JPendingIntent Value) = 0 ;
	virtual _di_JSerialPortBuilder_UsbDeviceStatus __fastcall _GetusbDeviceStatus() = 0 ;
	virtual void __fastcall _SetusbDeviceStatus(_di_JSerialPortBuilder_UsbDeviceStatus Value) = 0 ;
	__property Androidapi::Jni::App::_di_JPendingIntent pendingIntent = {read=_GetpendingIntent, write=_SetpendingIntent};
	__property _di_JSerialPortBuilder_UsbDeviceStatus usbDeviceStatus = {read=_GetusbDeviceStatus, write=_SetusbDeviceStatus};
};

class PASCALIMPLEMENTATION TJSerialPortBuilder_PendingUsbPermission : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSerialPortBuilder_PendingUsbPermissionClass,_di_JSerialPortBuilder_PendingUsbPermission>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSerialPortBuilder_PendingUsbPermissionClass,_di_JSerialPortBuilder_PendingUsbPermission> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJSerialPortBuilder_PendingUsbPermission() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSerialPortBuilder_PendingUsbPermissionClass,_di_JSerialPortBuilder_PendingUsbPermission>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJSerialPortBuilder_PendingUsbPermission() { }
	
};


__interface  INTERFACE_UUID("{19D47DB5-5937-4BB1-A14C-2C02888DFDC9}") JSerialPortBuilder_UsbDeviceStatusClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JSerialPortBuilder_UsbDeviceStatus __cdecl init(_di_JSerialPortBuilder param0, Winsoft::Android::Usb::_di_JUsbDevice usbDevice) = 0 ;
};

__interface  INTERFACE_UUID("{A19A5872-85C2-4D6E-8AE8-634C3E99D4E3}") JSerialPortBuilder_UsbDeviceStatus  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual bool __fastcall _Getopen() = 0 ;
	virtual void __fastcall _Setopen(bool Value) = 0 ;
	virtual Winsoft::Android::Usb::_di_JUsbDevice __fastcall _GetusbDevice() = 0 ;
	virtual void __fastcall _SetusbDevice(Winsoft::Android::Usb::_di_JUsbDevice Value) = 0 ;
	virtual Winsoft::Android::Usb::_di_JUsbDeviceConnection __fastcall _GetusbDeviceConnection() = 0 ;
	virtual void __fastcall _SetusbDeviceConnection(Winsoft::Android::Usb::_di_JUsbDeviceConnection Value) = 0 ;
	HIDESBASE virtual bool __cdecl equals(Androidapi::Jni::Javatypes::_di_JObject obj) = 0 ;
	__property bool open = {read=_Getopen, write=_Setopen};
	__property Winsoft::Android::Usb::_di_JUsbDevice usbDevice = {read=_GetusbDevice, write=_SetusbDevice};
	__property Winsoft::Android::Usb::_di_JUsbDeviceConnection usbDeviceConnection = {read=_GetusbDeviceConnection, write=_SetusbDeviceConnection};
};

class PASCALIMPLEMENTATION TJSerialPortBuilder_UsbDeviceStatus : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSerialPortBuilder_UsbDeviceStatusClass,_di_JSerialPortBuilder_UsbDeviceStatus>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSerialPortBuilder_UsbDeviceStatusClass,_di_JSerialPortBuilder_UsbDeviceStatus> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJSerialPortBuilder_UsbDeviceStatus() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSerialPortBuilder_UsbDeviceStatusClass,_di_JSerialPortBuilder_UsbDeviceStatus>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJSerialPortBuilder_UsbDeviceStatus() { }
	
};


__interface  INTERFACE_UUID("{2CD280F8-63C5-4BE5-8AE1-45427EB50025}") JSerialPortCallbackClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{697277CE-6335-4B13-B427-42F3B3A3C622}") JSerialPortCallback  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual void __cdecl onSerialPortsDetected(Androidapi::Jni::Javatypes::_di_JList param0) = 0 ;
};

class PASCALIMPLEMENTATION TJSerialPortCallback : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSerialPortCallbackClass,_di_JSerialPortCallback>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSerialPortCallbackClass,_di_JSerialPortCallback> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJSerialPortCallback() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JSerialPortCallbackClass,_di_JSerialPortCallback>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJSerialPortCallback() { }
	
};


__interface  INTERFACE_UUID("{B4B29881-0ABC-44D5-815D-DB64599520CF}") JUsbSerialDebuggerClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetENCODING() = 0 ;
	virtual void __cdecl printLogGet(Androidapi::Jnibridge::TJavaArray__1<System::Byte>* src, bool verbose) = 0 ;
	virtual void __cdecl printLogPut(Androidapi::Jnibridge::TJavaArray__1<System::Byte>* src, bool verbose) = 0 ;
	virtual void __cdecl printReadLogGet(Androidapi::Jnibridge::TJavaArray__1<System::Byte>* src, bool verbose) = 0 ;
	virtual void __cdecl printReadLogPut(Androidapi::Jnibridge::TJavaArray__1<System::Byte>* src, bool verbose) = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString ENCODING = {read=_GetENCODING};
};

__interface  INTERFACE_UUID("{5719C772-49FC-49F7-B58B-4AB463C58A1A}") JUsbSerialDebugger  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

class PASCALIMPLEMENTATION TJUsbSerialDebugger : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSerialDebuggerClass,_di_JUsbSerialDebugger>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSerialDebuggerClass,_di_JUsbSerialDebugger> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJUsbSerialDebugger() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSerialDebuggerClass,_di_JUsbSerialDebugger>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJUsbSerialDebugger() { }
	
};


__interface  INTERFACE_UUID("{920E2E14-2925-4DC8-B1E6-137B33E3006F}") JUsbSerialDevice_1Class  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	
};

__interface  INTERFACE_UUID("{FCBE3B9F-E816-44FC-909E-210C91A0B1DB}") JUsbSerialDevice_1  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

class PASCALIMPLEMENTATION TJUsbSerialDevice_1 : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSerialDevice_1Class,_di_JUsbSerialDevice_1>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSerialDevice_1Class,_di_JUsbSerialDevice_1> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJUsbSerialDevice_1() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSerialDevice_1Class,_di_JUsbSerialDevice_1>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJUsbSerialDevice_1() { }
	
};


__interface  INTERFACE_UUID("{B005FCAE-4EC1-43EE-A9EB-EAAB4E0CAEF8}") JUsbSerialDevice_ReadThreadClass  : public JAbstractWorkerThreadClass 
{
	HIDESBASE virtual _di_JUsbSerialDevice_ReadThread __cdecl init(_di_JUsbSerialDevice this_0, _di_JUsbSerialDevice usbSerialDevice) = 0 ;
};

__interface  INTERFACE_UUID("{B46E2090-CE2B-4A96-A739-013D6DD8E8CC}") JUsbSerialDevice_ReadThread  : public JAbstractWorkerThread 
{
	virtual void __cdecl doRun() = 0 ;
	virtual void __cdecl setCallback(_di_JUsbSerialInterface_UsbReadCallback callback) = 0 ;
	virtual void __cdecl setUsbEndpoint(Winsoft::Android::Usb::_di_JUsbEndpoint inEndpoint) = 0 ;
};

class PASCALIMPLEMENTATION TJUsbSerialDevice_ReadThread : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSerialDevice_ReadThreadClass,_di_JUsbSerialDevice_ReadThread>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSerialDevice_ReadThreadClass,_di_JUsbSerialDevice_ReadThread> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJUsbSerialDevice_ReadThread() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSerialDevice_ReadThreadClass,_di_JUsbSerialDevice_ReadThread>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJUsbSerialDevice_ReadThread() { }
	
};


__interface  INTERFACE_UUID("{A1E3E793-3CB8-4A13-863F-3EF5EA409741}") JUsbSerialDevice_WorkerThreadClass  : public JAbstractWorkerThreadClass 
{
	HIDESBASE virtual _di_JUsbSerialDevice_WorkerThread __cdecl init(_di_JUsbSerialDevice this_0, _di_JUsbSerialDevice usbSerialDevice) = 0 ;
};

__interface  INTERFACE_UUID("{11E31A43-6FDC-4D4E-90D5-92B3877EE973}") JUsbSerialDevice_WorkerThread  : public JAbstractWorkerThread 
{
	virtual void __cdecl doRun() = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl getUsbRequest() = 0 ;
	virtual void __cdecl setCallback(_di_JUsbSerialInterface_UsbReadCallback callback) = 0 ;
	virtual void __cdecl setUsbRequest(Androidapi::Jni::Javatypes::_di_JObject request) = 0 ;
};

class PASCALIMPLEMENTATION TJUsbSerialDevice_WorkerThread : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSerialDevice_WorkerThreadClass,_di_JUsbSerialDevice_WorkerThread>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSerialDevice_WorkerThreadClass,_di_JUsbSerialDevice_WorkerThread> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJUsbSerialDevice_WorkerThread() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSerialDevice_WorkerThreadClass,_di_JUsbSerialDevice_WorkerThread>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJUsbSerialDevice_WorkerThread() { }
	
};


__interface  INTERFACE_UUID("{B484F44E-78C1-4A2D-9357-1DBA79D3E814}") JUsbSerialDevice_WriteThreadClass  : public JAbstractWorkerThreadClass 
{
	
};

__interface  INTERFACE_UUID("{71B7CF4B-66D4-4504-A64C-947B29436C14}") JUsbSerialDevice_WriteThread  : public JAbstractWorkerThread 
{
	virtual void __cdecl doRun() = 0 ;
	virtual void __cdecl setUsbEndpoint(Winsoft::Android::Usb::_di_JUsbEndpoint outEndpoint) = 0 ;
};

class PASCALIMPLEMENTATION TJUsbSerialDevice_WriteThread : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSerialDevice_WriteThreadClass,_di_JUsbSerialDevice_WriteThread>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSerialDevice_WriteThreadClass,_di_JUsbSerialDevice_WriteThread> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJUsbSerialDevice_WriteThread() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSerialDevice_WriteThreadClass,_di_JUsbSerialDevice_WriteThread>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJUsbSerialDevice_WriteThread() { }
	
};


__interface  INTERFACE_UUID("{7BCE68E1-0086-4ABD-BCB4-BC037CEFC691}") JUsbSerialInterfaceClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual int __fastcall _GetDATA_BITS_5() = 0 ;
	virtual int __fastcall _GetDATA_BITS_6() = 0 ;
	virtual int __fastcall _GetDATA_BITS_7() = 0 ;
	virtual int __fastcall _GetDATA_BITS_8() = 0 ;
	virtual int __fastcall _GetFLOW_CONTROL_DSR_DTR() = 0 ;
	virtual int __fastcall _GetFLOW_CONTROL_OFF() = 0 ;
	virtual int __fastcall _GetFLOW_CONTROL_RTS_CTS() = 0 ;
	virtual int __fastcall _GetFLOW_CONTROL_XON_XOFF() = 0 ;
	virtual int __fastcall _GetPARITY_EVEN() = 0 ;
	virtual int __fastcall _GetPARITY_MARK() = 0 ;
	virtual int __fastcall _GetPARITY_NONE() = 0 ;
	virtual int __fastcall _GetPARITY_ODD() = 0 ;
	virtual int __fastcall _GetPARITY_SPACE() = 0 ;
	virtual int __fastcall _GetSTOP_BITS_1() = 0 ;
	virtual int __fastcall _GetSTOP_BITS_15() = 0 ;
	virtual int __fastcall _GetSTOP_BITS_2() = 0 ;
	__property int DATA_BITS_5 = {read=_GetDATA_BITS_5};
	__property int DATA_BITS_6 = {read=_GetDATA_BITS_6};
	__property int DATA_BITS_7 = {read=_GetDATA_BITS_7};
	__property int DATA_BITS_8 = {read=_GetDATA_BITS_8};
	__property int FLOW_CONTROL_DSR_DTR = {read=_GetFLOW_CONTROL_DSR_DTR};
	__property int FLOW_CONTROL_OFF = {read=_GetFLOW_CONTROL_OFF};
	__property int FLOW_CONTROL_RTS_CTS = {read=_GetFLOW_CONTROL_RTS_CTS};
	__property int FLOW_CONTROL_XON_XOFF = {read=_GetFLOW_CONTROL_XON_XOFF};
	__property int PARITY_EVEN = {read=_GetPARITY_EVEN};
	__property int PARITY_MARK = {read=_GetPARITY_MARK};
	__property int PARITY_NONE = {read=_GetPARITY_NONE};
	__property int PARITY_ODD = {read=_GetPARITY_ODD};
	__property int PARITY_SPACE = {read=_GetPARITY_SPACE};
	__property int STOP_BITS_1 = {read=_GetSTOP_BITS_1};
	__property int STOP_BITS_15 = {read=_GetSTOP_BITS_15};
	__property int STOP_BITS_2 = {read=_GetSTOP_BITS_2};
};

__interface  INTERFACE_UUID("{EFC8CCAA-B2C0-4138-919A-1B7754504D09}") JUsbSerialInterface  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual void __cdecl close() = 0 ;
	virtual void __cdecl getBreak(_di_JUsbSerialInterface_UsbBreakCallback param0) = 0 ;
	virtual void __cdecl getCTS(_di_JUsbSerialInterface_UsbCTSCallback param0) = 0 ;
	virtual void __cdecl getDSR(_di_JUsbSerialInterface_UsbDSRCallback param0) = 0 ;
	virtual void __cdecl getFrame(_di_JUsbSerialInterface_UsbFrameCallback param0) = 0 ;
	virtual void __cdecl getOverrun(_di_JUsbSerialInterface_UsbOverrunCallback param0) = 0 ;
	virtual void __cdecl getParity(_di_JUsbSerialInterface_UsbParityCallback param0) = 0 ;
	virtual bool __cdecl open() = 0 ;
	virtual int __cdecl read(_di_JUsbSerialInterface_UsbReadCallback param0) = 0 ;
	virtual void __cdecl setBaudRate(int param0) = 0 ;
	virtual void __cdecl setBreak(bool param0) = 0 ;
	virtual void __cdecl setDataBits(int param0) = 0 ;
	virtual void __cdecl setDTR(bool param0) = 0 ;
	virtual void __cdecl setFlowControl(int param0) = 0 ;
	virtual void __cdecl setParity(int param0) = 0 ;
	virtual void __cdecl setRTS(bool param0) = 0 ;
	virtual void __cdecl setStopBits(int param0) = 0 ;
	virtual void __cdecl syncClose() = 0 ;
	virtual bool __cdecl syncOpen() = 0 ;
	virtual int __cdecl syncRead(Androidapi::Jnibridge::TJavaArray__1<System::Byte>* param0, int param1, int param2, int param3) = 0 /* overload */;
	virtual int __cdecl syncRead(Androidapi::Jnibridge::TJavaArray__1<System::Byte>* param0, int param1) = 0 /* overload */;
	virtual int __cdecl syncWrite(Androidapi::Jnibridge::TJavaArray__1<System::Byte>* param0, int param1, int param2, int param3) = 0 /* overload */;
	virtual int __cdecl syncWrite(Androidapi::Jnibridge::TJavaArray__1<System::Byte>* param0, int param1) = 0 /* overload */;
	virtual void __cdecl write(Androidapi::Jnibridge::TJavaArray__1<System::Byte>* param0) = 0 ;
};

class PASCALIMPLEMENTATION TJUsbSerialInterface : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSerialInterfaceClass,_di_JUsbSerialInterface>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSerialInterfaceClass,_di_JUsbSerialInterface> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJUsbSerialInterface() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSerialInterfaceClass,_di_JUsbSerialInterface>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJUsbSerialInterface() { }
	
};


__interface  INTERFACE_UUID("{3C761DAD-5CE2-43A5-9D96-F91E290CEC75}") JUsbSerialInterface_UsbBreakCallbackClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{80A01738-BA47-4B9E-97E2-977EFC6E5573}") JUsbSerialInterface_UsbBreakCallback  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual void __cdecl onBreakInterrupt() = 0 ;
};

class PASCALIMPLEMENTATION TJUsbSerialInterface_UsbBreakCallback : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSerialInterface_UsbBreakCallbackClass,_di_JUsbSerialInterface_UsbBreakCallback>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSerialInterface_UsbBreakCallbackClass,_di_JUsbSerialInterface_UsbBreakCallback> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJUsbSerialInterface_UsbBreakCallback() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSerialInterface_UsbBreakCallbackClass,_di_JUsbSerialInterface_UsbBreakCallback>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJUsbSerialInterface_UsbBreakCallback() { }
	
};


__interface  INTERFACE_UUID("{41771AEB-5DFE-4E34-BEDC-E0211A34FEC6}") JUsbSerialInterface_UsbCTSCallbackClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{58409379-725A-463D-A2BB-787F119DA494}") JUsbSerialInterface_UsbCTSCallback  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual void __cdecl onCTSChanged(bool param0) = 0 ;
};

class PASCALIMPLEMENTATION TJUsbSerialInterface_UsbCTSCallback : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSerialInterface_UsbCTSCallbackClass,_di_JUsbSerialInterface_UsbCTSCallback>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSerialInterface_UsbCTSCallbackClass,_di_JUsbSerialInterface_UsbCTSCallback> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJUsbSerialInterface_UsbCTSCallback() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSerialInterface_UsbCTSCallbackClass,_di_JUsbSerialInterface_UsbCTSCallback>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJUsbSerialInterface_UsbCTSCallback() { }
	
};


__interface  INTERFACE_UUID("{248A7669-C04A-41F7-BCBB-D6F489B58485}") JUsbSerialInterface_UsbDSRCallbackClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{526C0103-342C-44D2-8DB7-976E77620765}") JUsbSerialInterface_UsbDSRCallback  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual void __cdecl onDSRChanged(bool param0) = 0 ;
};

class PASCALIMPLEMENTATION TJUsbSerialInterface_UsbDSRCallback : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSerialInterface_UsbDSRCallbackClass,_di_JUsbSerialInterface_UsbDSRCallback>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSerialInterface_UsbDSRCallbackClass,_di_JUsbSerialInterface_UsbDSRCallback> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJUsbSerialInterface_UsbDSRCallback() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSerialInterface_UsbDSRCallbackClass,_di_JUsbSerialInterface_UsbDSRCallback>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJUsbSerialInterface_UsbDSRCallback() { }
	
};


__interface  INTERFACE_UUID("{13983176-3AAF-4BFD-B753-CF9E6ECFD15F}") JUsbSerialInterface_UsbFrameCallbackClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{B1E39FD2-6153-4240-ABEB-B8EAA0384AA7}") JUsbSerialInterface_UsbFrameCallback  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual void __cdecl onFramingError() = 0 ;
};

class PASCALIMPLEMENTATION TJUsbSerialInterface_UsbFrameCallback : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSerialInterface_UsbFrameCallbackClass,_di_JUsbSerialInterface_UsbFrameCallback>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSerialInterface_UsbFrameCallbackClass,_di_JUsbSerialInterface_UsbFrameCallback> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJUsbSerialInterface_UsbFrameCallback() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSerialInterface_UsbFrameCallbackClass,_di_JUsbSerialInterface_UsbFrameCallback>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJUsbSerialInterface_UsbFrameCallback() { }
	
};


__interface  INTERFACE_UUID("{0CCCC1A1-C25C-47E4-946B-3D7220C66D1B}") JUsbSerialInterface_UsbOverrunCallbackClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{FDDE4823-4420-4F42-A0A0-0BF523C7E46C}") JUsbSerialInterface_UsbOverrunCallback  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual void __cdecl onOverrunError() = 0 ;
};

class PASCALIMPLEMENTATION TJUsbSerialInterface_UsbOverrunCallback : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSerialInterface_UsbOverrunCallbackClass,_di_JUsbSerialInterface_UsbOverrunCallback>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSerialInterface_UsbOverrunCallbackClass,_di_JUsbSerialInterface_UsbOverrunCallback> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJUsbSerialInterface_UsbOverrunCallback() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSerialInterface_UsbOverrunCallbackClass,_di_JUsbSerialInterface_UsbOverrunCallback>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJUsbSerialInterface_UsbOverrunCallback() { }
	
};


__interface  INTERFACE_UUID("{EAAC2BF0-7887-4F09-8BD9-E1725BBDCF12}") JUsbSerialInterface_UsbParityCallbackClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{58F3D7B5-B040-4519-A262-2D97632D8E8E}") JUsbSerialInterface_UsbParityCallback  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual void __cdecl onParityError() = 0 ;
};

class PASCALIMPLEMENTATION TJUsbSerialInterface_UsbParityCallback : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSerialInterface_UsbParityCallbackClass,_di_JUsbSerialInterface_UsbParityCallback>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSerialInterface_UsbParityCallbackClass,_di_JUsbSerialInterface_UsbParityCallback> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJUsbSerialInterface_UsbParityCallback() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSerialInterface_UsbParityCallbackClass,_di_JUsbSerialInterface_UsbParityCallback>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJUsbSerialInterface_UsbParityCallback() { }
	
};


__interface  INTERFACE_UUID("{BD1332FA-C5A4-4A62-BEF2-BB83135475FF}") JUsbSerialInterface_UsbReadCallbackClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{12C863F5-3613-452B-B5DB-D36A8E603B45}") JUsbSerialInterface_UsbReadCallback  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual void __cdecl onReceivedData(Androidapi::Jnibridge::TJavaArray__1<System::Byte>* param0) = 0 ;
};

class PASCALIMPLEMENTATION TJUsbSerialInterface_UsbReadCallback : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSerialInterface_UsbReadCallbackClass,_di_JUsbSerialInterface_UsbReadCallback>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSerialInterface_UsbReadCallbackClass,_di_JUsbSerialInterface_UsbReadCallback> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJUsbSerialInterface_UsbReadCallback() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSerialInterface_UsbReadCallbackClass,_di_JUsbSerialInterface_UsbReadCallback>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJUsbSerialInterface_UsbReadCallback() { }
	
};


__interface  INTERFACE_UUID("{64D18A0C-9351-4E0B-9203-660D10DB0ADE}") JUsbSpiDevice_ReadThreadClass  : public JAbstractWorkerThreadClass 
{
	
};

__interface  INTERFACE_UUID("{B7BA61FC-3F88-4B28-887C-97A66D99B6B7}") JUsbSpiDevice_ReadThread  : public JAbstractWorkerThread 
{
	virtual void __cdecl doRun() = 0 ;
	virtual void __cdecl setCallback(_di_JUsbSpiInterface_UsbMISOCallback misoCallback) = 0 ;
	virtual void __cdecl setUsbEndpoint(Winsoft::Android::Usb::_di_JUsbEndpoint inEndpoint) = 0 ;
};

class PASCALIMPLEMENTATION TJUsbSpiDevice_ReadThread : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSpiDevice_ReadThreadClass,_di_JUsbSpiDevice_ReadThread>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSpiDevice_ReadThreadClass,_di_JUsbSpiDevice_ReadThread> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJUsbSpiDevice_ReadThread() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSpiDevice_ReadThreadClass,_di_JUsbSpiDevice_ReadThread>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJUsbSpiDevice_ReadThread() { }
	
};


__interface  INTERFACE_UUID("{443E6EE1-0FC9-42F0-82B0-7F84DEB9E3AE}") JUsbSpiDevice_WriteThreadClass  : public JAbstractWorkerThreadClass 
{
	
};

__interface  INTERFACE_UUID("{7D3DF2FC-DEB7-4EAF-B6F6-4C6BC6802D2D}") JUsbSpiDevice_WriteThread  : public JAbstractWorkerThread 
{
	virtual void __cdecl doRun() = 0 ;
	virtual void __cdecl setUsbEndpoint(Winsoft::Android::Usb::_di_JUsbEndpoint outEndpoint) = 0 ;
};

class PASCALIMPLEMENTATION TJUsbSpiDevice_WriteThread : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSpiDevice_WriteThreadClass,_di_JUsbSpiDevice_WriteThread>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSpiDevice_WriteThreadClass,_di_JUsbSpiDevice_WriteThread> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJUsbSpiDevice_WriteThread() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSpiDevice_WriteThreadClass,_di_JUsbSpiDevice_WriteThread>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJUsbSpiDevice_WriteThread() { }
	
};


__interface  INTERFACE_UUID("{170A470A-ED13-409F-8D37-A4C788CFF8DE}") JUsbSpiInterfaceClass  : public Androidapi::Jnibridge::IJavaClass 
{
	virtual int __fastcall _GetDIVIDER_128() = 0 ;
	virtual int __fastcall _GetDIVIDER_16() = 0 ;
	virtual int __fastcall _GetDIVIDER_2() = 0 ;
	virtual int __fastcall _GetDIVIDER_32() = 0 ;
	virtual int __fastcall _GetDIVIDER_4() = 0 ;
	virtual int __fastcall _GetDIVIDER_64() = 0 ;
	virtual int __fastcall _GetDIVIDER_8() = 0 ;
	__property int DIVIDER_128 = {read=_GetDIVIDER_128};
	__property int DIVIDER_16 = {read=_GetDIVIDER_16};
	__property int DIVIDER_2 = {read=_GetDIVIDER_2};
	__property int DIVIDER_32 = {read=_GetDIVIDER_32};
	__property int DIVIDER_4 = {read=_GetDIVIDER_4};
	__property int DIVIDER_64 = {read=_GetDIVIDER_64};
	__property int DIVIDER_8 = {read=_GetDIVIDER_8};
};

__interface  INTERFACE_UUID("{2DA8425E-A864-4076-B7BB-236605E02D73}") JUsbSpiInterface  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual void __cdecl closeSPI() = 0 ;
	virtual bool __cdecl connectSPI() = 0 ;
	virtual int __cdecl getClockDivider() = 0 ;
	virtual int __cdecl getSelectedSlave() = 0 ;
	virtual void __cdecl readMISO(int param0) = 0 ;
	virtual void __cdecl selectSlave(int param0) = 0 ;
	virtual void __cdecl setClock(int param0) = 0 ;
	virtual void __cdecl setMISOCallback(_di_JUsbSpiInterface_UsbMISOCallback param0) = 0 ;
	virtual void __cdecl writeMOSI(Androidapi::Jnibridge::TJavaArray__1<System::Byte>* param0) = 0 ;
	virtual void __cdecl writeRead(Androidapi::Jnibridge::TJavaArray__1<System::Byte>* param0, int param1) = 0 ;
};

class PASCALIMPLEMENTATION TJUsbSpiInterface : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSpiInterfaceClass,_di_JUsbSpiInterface>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSpiInterfaceClass,_di_JUsbSpiInterface> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJUsbSpiInterface() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSpiInterfaceClass,_di_JUsbSpiInterface>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJUsbSpiInterface() { }
	
};


__interface  INTERFACE_UUID("{F8D7DA77-E0A8-4327-95E8-4EF0674BE55F}") JUsbSpiInterface_UsbMISOCallbackClass  : public Androidapi::Jnibridge::IJavaClass 
{
	
};

__interface  INTERFACE_UUID("{B845C794-AE0C-48EF-80BE-067E5186557F}") JUsbSpiInterface_UsbMISOCallback  : public Androidapi::Jnibridge::IJavaInstance 
{
	virtual int __cdecl onReceivedData(Androidapi::Jnibridge::TJavaArray__1<System::Byte>* param0) = 0 ;
};

class PASCALIMPLEMENTATION TJUsbSpiInterface_UsbMISOCallback : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSpiInterface_UsbMISOCallbackClass,_di_JUsbSpiInterface_UsbMISOCallback>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSpiInterface_UsbMISOCallbackClass,_di_JUsbSpiInterface_UsbMISOCallback> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJUsbSpiInterface_UsbMISOCallback() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbSpiInterface_UsbMISOCallbackClass,_di_JUsbSpiInterface_UsbMISOCallback>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJUsbSpiInterface_UsbMISOCallback() { }
	
};


__interface  INTERFACE_UUID("{241E9C7E-3196-4CB9-BC43-2650BFB7B478}") JXdcVcpIdsClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JXdcVcpIds __cdecl init() = 0 ;
	virtual bool __cdecl isDeviceSupported(int vendorId, int productId) = 0 ;
};

__interface  INTERFACE_UUID("{90D52615-1E13-44FA-9355-A900129477A4}") JXdcVcpIds  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

class PASCALIMPLEMENTATION TJXdcVcpIds : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JXdcVcpIdsClass,_di_JXdcVcpIds>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JXdcVcpIdsClass,_di_JXdcVcpIds> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJXdcVcpIds() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JXdcVcpIdsClass,_di_JXdcVcpIds>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJXdcVcpIds() { }
	
};


__interface  INTERFACE_UUID("{194B333E-E223-40D8-BE1F-A6B5AD4412A8}") JXdcVcpSerialDeviceClass  : public JUsbSerialDeviceClass 
{
	HIDESBASE virtual _di_JXdcVcpSerialDevice __cdecl init(Winsoft::Android::Usb::_di_JUsbDevice device, Winsoft::Android::Usb::_di_JUsbDeviceConnection connection) = 0 /* overload */;
	HIDESBASE virtual _di_JXdcVcpSerialDevice __cdecl init(Winsoft::Android::Usb::_di_JUsbDevice device, Winsoft::Android::Usb::_di_JUsbDeviceConnection connection, int iface) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{FE040DA2-BCB3-4C9C-B61F-DC11E4C02DEE}") JXdcVcpSerialDevice  : public JUsbSerialDevice 
{
	HIDESBASE virtual void __cdecl close() = 0 ;
	virtual void __cdecl getBreak(_di_JUsbSerialInterface_UsbBreakCallback breakCallback) = 0 ;
	virtual void __cdecl getCTS(_di_JUsbSerialInterface_UsbCTSCallback ctsCallback) = 0 ;
	virtual void __cdecl getDSR(_di_JUsbSerialInterface_UsbDSRCallback dsrCallback) = 0 ;
	virtual void __cdecl getFrame(_di_JUsbSerialInterface_UsbFrameCallback frameCallback) = 0 ;
	virtual void __cdecl getOverrun(_di_JUsbSerialInterface_UsbOverrunCallback overrunCallback) = 0 ;
	virtual void __cdecl getParity(_di_JUsbSerialInterface_UsbParityCallback parityCallback) = 0 ;
	HIDESBASE virtual bool __cdecl open() = 0 ;
	HIDESBASE virtual void __cdecl setBaudRate(int baudRate) = 0 ;
	HIDESBASE virtual void __cdecl setBreak(bool state) = 0 ;
	HIDESBASE virtual void __cdecl setDataBits(int dataBits) = 0 ;
	virtual void __cdecl setDTR(bool state) = 0 ;
	HIDESBASE virtual void __cdecl setFlowControl(int flowControl) = 0 ;
	HIDESBASE virtual void __cdecl setParity(int parity) = 0 ;
	virtual void __cdecl setRTS(bool state) = 0 ;
	HIDESBASE virtual void __cdecl setStopBits(int stopBits) = 0 ;
	HIDESBASE virtual void __cdecl syncClose() = 0 ;
	HIDESBASE virtual bool __cdecl syncOpen() = 0 ;
};

class PASCALIMPLEMENTATION TJXdcVcpSerialDevice : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JXdcVcpSerialDeviceClass,_di_JXdcVcpSerialDevice>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JXdcVcpSerialDeviceClass,_di_JXdcVcpSerialDevice> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJXdcVcpSerialDevice() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JXdcVcpSerialDeviceClass,_di_JXdcVcpSerialDevice>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJXdcVcpSerialDevice() { }
	
};


enum class DECLSPEC_DENUM TDataBits : unsigned char { _5, _6, _7, _8 };

enum class DECLSPEC_DENUM TStopBits : unsigned char { _1, _15, _2 };

enum class DECLSPEC_DENUM TParity : unsigned char { None, Odd, Even, Mark, Space };

enum class DECLSPEC_DENUM TFlowControl : unsigned char { Off, RtsCts, DsrDtr, XonXoff };

typedef void __fastcall (__closure *TOnBreakInterrupt)();

typedef void __fastcall (__closure *TOnCtsChanged)(bool State);

typedef void __fastcall (__closure *TOnDeviceAttached)(Winsoft::Android::Usb::_di_JUsbDevice Device);

typedef void __fastcall (__closure *TOnDeviceDetached)(Winsoft::Android::Usb::_di_JUsbDevice Device);

typedef void __fastcall (__closure *TOnDsrChanged)(bool State);

typedef void __fastcall (__closure *TOnFramingError)();

typedef void __fastcall (__closure *TOnOverrunError)();

typedef void __fastcall (__closure *TOnParityError)();

typedef void __fastcall (__closure *TOnPermission)(Winsoft::Android::Usb::_di_JUsbDevice Device, bool Granted);

typedef void __fastcall (__closure *TOnReceivedData)(Androidapi::Jnibridge::TJavaArray__1<System::Byte>* Data);

class PASCALIMPLEMENTATION EUsbSerialError : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EUsbSerialError(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EUsbSerialError(const System::UnicodeString Msg, const System::TVarRec *Args, const System::NativeInt Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EUsbSerialError(System::NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EUsbSerialError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EUsbSerialError(System::NativeUInt Ident, const System::TVarRec *Args, const System::NativeInt Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EUsbSerialError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const System::NativeInt Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EUsbSerialError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EUsbSerialError(const System::UnicodeString Msg, const System::TVarRec *Args, const System::NativeInt Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EUsbSerialError(System::NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EUsbSerialError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EUsbSerialError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const System::NativeInt Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EUsbSerialError(System::NativeUInt Ident, const System::TVarRec *Args, const System::NativeInt Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EUsbSerialError() { }
	
};


class PASCALIMPLEMENTATION TUsbBreakCallback : public Androidapi::Jnibridge::TJavaLocal
{
	typedef Androidapi::Jnibridge::TJavaLocal inherited;
	
private:
	TUsbSerial* FUsbSerial;
	
public:
	__fastcall TUsbBreakCallback(TUsbSerial* UsbSerial);
	void __cdecl onBreakInterrupt();
public:
	/* TJavaLocal.Destroy */ inline __fastcall virtual ~TUsbBreakCallback() { }
	
private:
	void *__JUsbSerialInterface_UsbBreakCallback;	// JUsbSerialInterface_UsbBreakCallback 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {80A01738-BA47-4B9E-97E2-977EFC6E5573}
	operator _di_JUsbSerialInterface_UsbBreakCallback()
	{
		_di_JUsbSerialInterface_UsbBreakCallback intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator JUsbSerialInterface_UsbBreakCallback*(void) { return (JUsbSerialInterface_UsbBreakCallback*)&__JUsbSerialInterface_UsbBreakCallback; }
	#endif
	
};


class PASCALIMPLEMENTATION TUsbCtsCallback : public Androidapi::Jnibridge::TJavaLocal
{
	typedef Androidapi::Jnibridge::TJavaLocal inherited;
	
private:
	TUsbSerial* FUsbSerial;
	
public:
	__fastcall TUsbCtsCallback(TUsbSerial* UsbSerial);
	void __cdecl onCTSChanged(bool state);
public:
	/* TJavaLocal.Destroy */ inline __fastcall virtual ~TUsbCtsCallback() { }
	
private:
	void *__JUsbSerialInterface_UsbCTSCallback;	// JUsbSerialInterface_UsbCTSCallback 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {58409379-725A-463D-A2BB-787F119DA494}
	operator _di_JUsbSerialInterface_UsbCTSCallback()
	{
		_di_JUsbSerialInterface_UsbCTSCallback intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator JUsbSerialInterface_UsbCTSCallback*(void) { return (JUsbSerialInterface_UsbCTSCallback*)&__JUsbSerialInterface_UsbCTSCallback; }
	#endif
	
};


class PASCALIMPLEMENTATION TUsbDsrCallback : public Androidapi::Jnibridge::TJavaLocal
{
	typedef Androidapi::Jnibridge::TJavaLocal inherited;
	
private:
	TUsbSerial* FUsbSerial;
	
public:
	__fastcall TUsbDsrCallback(TUsbSerial* UsbSerial);
	void __cdecl onDSRChanged(bool state);
public:
	/* TJavaLocal.Destroy */ inline __fastcall virtual ~TUsbDsrCallback() { }
	
private:
	void *__JUsbSerialInterface_UsbDSRCallback;	// JUsbSerialInterface_UsbDSRCallback 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {526C0103-342C-44D2-8DB7-976E77620765}
	operator _di_JUsbSerialInterface_UsbDSRCallback()
	{
		_di_JUsbSerialInterface_UsbDSRCallback intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator JUsbSerialInterface_UsbDSRCallback*(void) { return (JUsbSerialInterface_UsbDSRCallback*)&__JUsbSerialInterface_UsbDSRCallback; }
	#endif
	
};


class PASCALIMPLEMENTATION TUsbFrameCallback : public Androidapi::Jnibridge::TJavaLocal
{
	typedef Androidapi::Jnibridge::TJavaLocal inherited;
	
private:
	TUsbSerial* FUsbSerial;
	
public:
	__fastcall TUsbFrameCallback(TUsbSerial* UsbSerial);
	void __cdecl onFramingError();
public:
	/* TJavaLocal.Destroy */ inline __fastcall virtual ~TUsbFrameCallback() { }
	
private:
	void *__JUsbSerialInterface_UsbFrameCallback;	// JUsbSerialInterface_UsbFrameCallback 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B1E39FD2-6153-4240-ABEB-B8EAA0384AA7}
	operator _di_JUsbSerialInterface_UsbFrameCallback()
	{
		_di_JUsbSerialInterface_UsbFrameCallback intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator JUsbSerialInterface_UsbFrameCallback*(void) { return (JUsbSerialInterface_UsbFrameCallback*)&__JUsbSerialInterface_UsbFrameCallback; }
	#endif
	
};


class PASCALIMPLEMENTATION TUsbOverrunCallback : public Androidapi::Jnibridge::TJavaLocal
{
	typedef Androidapi::Jnibridge::TJavaLocal inherited;
	
private:
	TUsbSerial* FUsbSerial;
	
public:
	__fastcall TUsbOverrunCallback(TUsbSerial* UsbSerial);
	void __cdecl onOverrunError();
public:
	/* TJavaLocal.Destroy */ inline __fastcall virtual ~TUsbOverrunCallback() { }
	
private:
	void *__JUsbSerialInterface_UsbOverrunCallback;	// JUsbSerialInterface_UsbOverrunCallback 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {FDDE4823-4420-4F42-A0A0-0BF523C7E46C}
	operator _di_JUsbSerialInterface_UsbOverrunCallback()
	{
		_di_JUsbSerialInterface_UsbOverrunCallback intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator JUsbSerialInterface_UsbOverrunCallback*(void) { return (JUsbSerialInterface_UsbOverrunCallback*)&__JUsbSerialInterface_UsbOverrunCallback; }
	#endif
	
};


class PASCALIMPLEMENTATION TUsbParityCallback : public Androidapi::Jnibridge::TJavaLocal
{
	typedef Androidapi::Jnibridge::TJavaLocal inherited;
	
private:
	TUsbSerial* FUsbSerial;
	
public:
	__fastcall TUsbParityCallback(TUsbSerial* UsbSerial);
	void __cdecl onParityError();
public:
	/* TJavaLocal.Destroy */ inline __fastcall virtual ~TUsbParityCallback() { }
	
private:
	void *__JUsbSerialInterface_UsbParityCallback;	// JUsbSerialInterface_UsbParityCallback 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {58F3D7B5-B040-4519-A262-2D97632D8E8E}
	operator _di_JUsbSerialInterface_UsbParityCallback()
	{
		_di_JUsbSerialInterface_UsbParityCallback intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator JUsbSerialInterface_UsbParityCallback*(void) { return (JUsbSerialInterface_UsbParityCallback*)&__JUsbSerialInterface_UsbParityCallback; }
	#endif
	
};


class PASCALIMPLEMENTATION TUsbReadCallback : public Androidapi::Jnibridge::TJavaLocal
{
	typedef Androidapi::Jnibridge::TJavaLocal inherited;
	
private:
	TUsbSerial* FUsbSerial;
	
public:
	__fastcall TUsbReadCallback(TUsbSerial* UsbSerial);
	void __cdecl onReceivedData(Androidapi::Jnibridge::TJavaArray__1<System::Byte>* data);
public:
	/* TJavaLocal.Destroy */ inline __fastcall virtual ~TUsbReadCallback() { }
	
private:
	void *__JUsbSerialInterface_UsbReadCallback;	// JUsbSerialInterface_UsbReadCallback 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {12C863F5-3613-452B-B5DB-D36A8E603B45}
	operator _di_JUsbSerialInterface_UsbReadCallback()
	{
		_di_JUsbSerialInterface_UsbReadCallback intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator JUsbSerialInterface_UsbReadCallback*(void) { return (JUsbSerialInterface_UsbReadCallback*)&__JUsbSerialInterface_UsbReadCallback; }
	#endif
	
};


class PASCALIMPLEMENTATION TUsbBroadcastListener : public Androidapi::Jnibridge::TJavaLocal
{
	typedef Androidapi::Jnibridge::TJavaLocal inherited;
	
private:
	TUsbSerial* FUsbSerial;
	
public:
	__fastcall TUsbBroadcastListener(TUsbSerial* const UsbSerial);
	void __cdecl onReceive(Androidapi::Jni::Graphicscontentviewtext::_di_JContext context, Androidapi::Jni::Graphicscontentviewtext::_di_JIntent intent);
public:
	/* TJavaLocal.Destroy */ inline __fastcall virtual ~TUsbBroadcastListener() { }
	
private:
	void *__JFMXBroadcastReceiverListener;	// Androidapi::Jni::Embarcadero::JFMXBroadcastReceiverListener 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {8D356FEB-9F54-40C6-8E01-94603B4AB486}
	operator Androidapi::Jni::Embarcadero::_di_JFMXBroadcastReceiverListener()
	{
		Androidapi::Jni::Embarcadero::_di_JFMXBroadcastReceiverListener intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Androidapi::Jni::Embarcadero::JFMXBroadcastReceiverListener*(void) { return (Androidapi::Jni::Embarcadero::JFMXBroadcastReceiverListener*)&__JFMXBroadcastReceiverListener; }
	#endif
	
};


class PASCALIMPLEMENTATION TUsbSerial : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int FBaudRate;
	TUsbBroadcastListener* FBroadcastListener;
	Androidapi::Jni::Embarcadero::_di_JFMXBroadcastReceiver FBroadcastReceiver;
	TDataBits FDataBits;
	TFlowControl FFlowControl;
	Androidapi::Jni::Graphicscontentviewtext::_di_JIntentFilter FIntentFilter;
	TOnBreakInterrupt FOnBreakInterrupt;
	TOnCtsChanged FOnCtsChanged;
	TOnDeviceAttached FOnDeviceAttached;
	TOnDeviceDetached FOnDeviceDetached;
	TOnDsrChanged FOnDsrChanged;
	TOnFramingError FOnFramingError;
	TOnOverrunError FOnOverrunError;
	TOnParityError FOnParityError;
	TOnPermission FOnPermission;
	TOnReceivedData FOnReceivedData;
	bool FOpened;
	TParity FParity;
	Androidapi::Jni::App::_di_JPendingIntent FPermissionIntent;
	Androidapi::Jnibridge::TJavaArray__1<System::Byte>* FReadBuffer;
	TStopBits FStopBits;
	bool FSynchronous;
	TUsbBreakCallback* FUsbBreakCallback;
	TUsbCtsCallback* FUsbCtsCallback;
	Winsoft::Android::Usb::_di_JUsbDevice FUsbDevice;
	Winsoft::Android::Usb::_di_JUsbDeviceConnection FUsbDeviceConnection;
	TUsbDsrCallback* FUsbDsrCallback;
	TUsbFrameCallback* FUsbFrameCallback;
	Winsoft::Android::Usb::_di_JUsbManager FUsbManager;
	TUsbOverrunCallback* FUsbOverrunCallback;
	TUsbParityCallback* FUsbParityCallback;
	TUsbReadCallback* FUsbReadCallback;
	_di_JUsbSerialInterface FUsbSerialInterface;
	Androidapi::Jnibridge::TJavaArray__1<System::Byte>* FWriteBuffer;
	void __fastcall BroadcastReceived(Androidapi::Jni::Graphicscontentviewtext::_di_JContext Context, Androidapi::Jni::Graphicscontentviewtext::_di_JIntent Intent);
	void __fastcall CheckConnected();
	void __fastcall CheckOpened();
	void __fastcall CheckClosed();
	bool __fastcall GetConnected();
	Winsoft::Android::Usb::_di_JUsbManager __fastcall GetUsbManager();
	System::DynamicArray<Winsoft::Android::Usb::_di_JUsbDevice> __fastcall GetUsbDevices();
	_di_JUsbSerialInterface __fastcall GetUsbSerialInterface();
	void __fastcall RegisterReceiver();
	void __fastcall SetBaudRate(int Value);
	void __fastcall SetDataBits(TDataBits Value);
	void __fastcall SetFlowControl(TFlowControl Value);
	void __fastcall SetOnBreakInterrupt(TOnBreakInterrupt Value);
	void __fastcall SetOnCtsChanged(TOnCtsChanged Value);
	void __fastcall SetOnDeviceAttached(TOnDeviceAttached Value);
	void __fastcall SetOnDeviceDetached(TOnDeviceDetached Value);
	void __fastcall SetOnDsrChanged(TOnDsrChanged Value);
	void __fastcall SetOnFramingError(TOnFramingError Value);
	void __fastcall SetOnOverrunError(TOnOverrunError Value);
	void __fastcall SetOnParityError(TOnParityError Value);
	void __fastcall SetOnPermission(TOnPermission Value);
	void __fastcall SetOnReceivedData(TOnReceivedData Value);
	void __fastcall SetParity(TParity Value);
	void __fastcall SetStopBits(TStopBits Value);
	
public:
	__fastcall TUsbSerial();
	__fastcall virtual ~TUsbSerial();
	bool __fastcall IsSupported(Winsoft::Android::Usb::_di_JUsbDevice UsbDevice);
	bool __fastcall HasPermission(Winsoft::Android::Usb::_di_JUsbDevice UsbDevice);
	void __fastcall RequestPermission(Winsoft::Android::Usb::_di_JUsbDevice UsbDevice);
	void __fastcall Connect(Winsoft::Android::Usb::_di_JUsbDevice UsbDevice);
	void __fastcall Disconnect();
	void __fastcall Open(bool Synchronous = false);
	void __fastcall Close();
	int __fastcall Read(Androidapi::Jnibridge::TJavaArray__1<System::Byte>* Buffer, int Timeout = 0x0)/* overload */;
	int __fastcall Read(System::DynamicArray<System::Byte> Buffer, int Timeout = 0x0)/* overload */;
	int __fastcall Read(System::Byte &Data, int Timeout = 0x0)/* overload */;
	int __fastcall Write(Androidapi::Jnibridge::TJavaArray__1<System::Byte>* Buffer, int Timeout = 0x0)/* overload */;
	int __fastcall Write(System::DynamicArray<System::Byte> Buffer, int Timeout = 0x0)/* overload */;
	int __fastcall Write(System::Byte Data, int Timeout = 0x0)/* overload */;
	void __fastcall ClearBreak();
	void __fastcall SetBreak();
	void __fastcall ClearDtr();
	void __fastcall SetDtr();
	void __fastcall ClearRts();
	void __fastcall SetRts();
	__property int BaudRate = {read=FBaudRate, write=SetBaudRate, nodefault};
	__property bool Connected = {read=GetConnected, nodefault};
	__property TDataBits DataBits = {read=FDataBits, write=SetDataBits, nodefault};
	__property TFlowControl FlowControl = {read=FFlowControl, write=SetFlowControl, nodefault};
	__property bool Opened = {read=FOpened, nodefault};
	__property TParity Parity = {read=FParity, write=SetParity, nodefault};
	__property TStopBits StopBits = {read=FStopBits, write=SetStopBits, nodefault};
	__property bool Synchronous = {read=FSynchronous, nodefault};
	__property Winsoft::Android::Usb::_di_JUsbDevice UsbDevice = {read=FUsbDevice};
	__property Winsoft::Android::Usb::_di_JUsbDeviceConnection UsbDeviceConnection = {read=FUsbDeviceConnection};
	__property System::DynamicArray<Winsoft::Android::Usb::_di_JUsbDevice> UsbDevices = {read=GetUsbDevices};
	__property Winsoft::Android::Usb::_di_JUsbManager UsbManager = {read=GetUsbManager};
	__property _di_JUsbSerialInterface UsbSerialInterface = {read=GetUsbSerialInterface};
	__property TOnBreakInterrupt OnBreakInterrupt = {read=FOnBreakInterrupt, write=SetOnBreakInterrupt};
	__property TOnCtsChanged OnCtsChanged = {read=FOnCtsChanged, write=SetOnCtsChanged};
	__property TOnDeviceAttached OnDeviceAttached = {read=FOnDeviceAttached, write=SetOnDeviceAttached};
	__property TOnDeviceDetached OnDeviceDetached = {read=FOnDeviceDetached, write=SetOnDeviceDetached};
	__property TOnDsrChanged OnDsrChanged = {read=FOnDsrChanged, write=SetOnDsrChanged};
	__property TOnFramingError OnFramingError = {read=FOnFramingError, write=SetOnFramingError};
	__property TOnOverrunError OnOverrunError = {read=FOnOverrunError, write=SetOnOverrunError};
	__property TOnParityError OnParityError = {read=FOnParityError, write=SetOnParityError};
	__property TOnPermission OnPermission = {read=FOnPermission, write=SetOnPermission};
	__property TOnReceivedData OnReceivedData = {read=FOnReceivedData, write=SetOnReceivedData};
};


//-- var, const, procedure ---------------------------------------------------
#define TJBuildConfig_APPLICATION_ID u"com.felhr.usbserial"
#define TJBuildConfig_BUILD_TYPE u"release"
static _DELPHI_CONST System::Int8 TJBuildConfig_DEBUG = System::Int8(0x0);
#define TJBuildConfig_FLAVOR u""
static _DELPHI_CONST System::Int8 TJBuildConfig_VERSION_CODE = System::Int8(-1);
#define TJBuildConfig_VERSION_NAME u""
static _DELPHI_CONST System::Int8 TJCP2130SpiDevice_CLOCK_12MHz = System::Int8(0x0);
static _DELPHI_CONST System::Int8 TJCP2130SpiDevice_CLOCK_187_5KHz = System::Int8(0x6);
static _DELPHI_CONST System::Int8 TJCP2130SpiDevice_CLOCK_1_5MHz = System::Int8(0x3);
static _DELPHI_CONST System::Int8 TJCP2130SpiDevice_CLOCK_375KHz = System::Int8(0x5);
static _DELPHI_CONST System::Int8 TJCP2130SpiDevice_CLOCK_3MHz = System::Int8(0x2);
static _DELPHI_CONST System::Int8 TJCP2130SpiDevice_CLOCK_6MHz = System::Int8(0x1);
static _DELPHI_CONST System::Int8 TJCP2130SpiDevice_CLOCK_750KHz = System::Int8(0x4);
static _DELPHI_CONST System::Int8 TJCP2130SpiDevice_CLOCK_93_75KHz = System::Int8(0x7);
static _DELPHI_CONST System::Int8 TJFTDISerialDevice_FTDI_BAUDRATE_115200 = System::Int8(0x1a);
static _DELPHI_CONST System::Word TJFTDISerialDevice_FTDI_BAUDRATE_1200 = System::Word(0x9c4);
static _DELPHI_CONST System::Word TJFTDISerialDevice_FTDI_BAUDRATE_19200 = System::Word(0x809c);
static _DELPHI_CONST System::Int8 TJFTDISerialDevice_FTDI_BAUDRATE_230400 = System::Int8(0xd);
static _DELPHI_CONST System::Word TJFTDISerialDevice_FTDI_BAUDRATE_2400 = System::Word(0x4e2);
static _DELPHI_CONST System::Word TJFTDISerialDevice_FTDI_BAUDRATE_300 = System::Word(0x2710);
static _DELPHI_CONST System::Word TJFTDISerialDevice_FTDI_BAUDRATE_38400 = System::Word(0xc04e);
static _DELPHI_CONST System::Word TJFTDISerialDevice_FTDI_BAUDRATE_460800 = System::Word(0x4006);
static _DELPHI_CONST System::Word TJFTDISerialDevice_FTDI_BAUDRATE_4800 = System::Word(0x271);
static _DELPHI_CONST System::Int8 TJFTDISerialDevice_FTDI_BAUDRATE_57600 = System::Int8(0x34);
static _DELPHI_CONST System::Word TJFTDISerialDevice_FTDI_BAUDRATE_600 = System::Word(0x1388);
static _DELPHI_CONST System::Word TJFTDISerialDevice_FTDI_BAUDRATE_921600 = System::Word(0x8003);
static _DELPHI_CONST System::Word TJFTDISerialDevice_FTDI_BAUDRATE_9600 = System::Word(0x4138);
static _DELPHI_CONST System::Word TJSerialBuffer_DEFAULT_READ_BUFFER_SIZE = System::Word(0x4000);
static _DELPHI_CONST System::Word TJSerialBuffer_DEFAULT_WRITE_BUFFER_SIZE = System::Word(0x4000);
#define TJUsbSerialDebugger_ENCODING u"UTF-8"
#define TJUsbSerialDevice_CDC u"cdc"
#define TJUsbSerialDevice_CH34x u"ch34x"
#define TJUsbSerialDevice_CP210x u"cp210x"
#define TJUsbSerialDevice_FTDI u"ftdi"
#define TJUsbSerialDevice_PL2303 u"pl2303"
static _DELPHI_CONST System::Int8 TJUsbSerialInterface_DATA_BITS_5 = System::Int8(0x5);
static _DELPHI_CONST System::Int8 TJUsbSerialInterface_DATA_BITS_6 = System::Int8(0x6);
static _DELPHI_CONST System::Int8 TJUsbSerialInterface_DATA_BITS_7 = System::Int8(0x7);
static _DELPHI_CONST System::Int8 TJUsbSerialInterface_DATA_BITS_8 = System::Int8(0x8);
static _DELPHI_CONST System::Int8 TJUsbSerialInterface_FLOW_CONTROL_DSR_DTR = System::Int8(0x2);
static _DELPHI_CONST System::Int8 TJUsbSerialInterface_FLOW_CONTROL_OFF = System::Int8(0x0);
static _DELPHI_CONST System::Int8 TJUsbSerialInterface_FLOW_CONTROL_RTS_CTS = System::Int8(0x1);
static _DELPHI_CONST System::Int8 TJUsbSerialInterface_FLOW_CONTROL_XON_XOFF = System::Int8(0x3);
static _DELPHI_CONST System::Int8 TJUsbSerialInterface_PARITY_EVEN = System::Int8(0x2);
static _DELPHI_CONST System::Int8 TJUsbSerialInterface_PARITY_MARK = System::Int8(0x3);
static _DELPHI_CONST System::Int8 TJUsbSerialInterface_PARITY_NONE = System::Int8(0x0);
static _DELPHI_CONST System::Int8 TJUsbSerialInterface_PARITY_ODD = System::Int8(0x1);
static _DELPHI_CONST System::Int8 TJUsbSerialInterface_PARITY_SPACE = System::Int8(0x4);
static _DELPHI_CONST System::Int8 TJUsbSerialInterface_STOP_BITS_1 = System::Int8(0x1);
static _DELPHI_CONST System::Int8 TJUsbSerialInterface_STOP_BITS_15 = System::Int8(0x3);
static _DELPHI_CONST System::Int8 TJUsbSerialInterface_STOP_BITS_2 = System::Int8(0x2);
static _DELPHI_CONST System::Byte TJUsbSpiInterface_DIVIDER_128 = System::Byte(0x80);
static _DELPHI_CONST System::Int8 TJUsbSpiInterface_DIVIDER_16 = System::Int8(0x10);
static _DELPHI_CONST System::Int8 TJUsbSpiInterface_DIVIDER_2 = System::Int8(0x2);
static _DELPHI_CONST System::Int8 TJUsbSpiInterface_DIVIDER_32 = System::Int8(0x20);
static _DELPHI_CONST System::Int8 TJUsbSpiInterface_DIVIDER_4 = System::Int8(0x4);
static _DELPHI_CONST System::Int8 TJUsbSpiInterface_DIVIDER_64 = System::Int8(0x40);
static _DELPHI_CONST System::Int8 TJUsbSpiInterface_DIVIDER_8 = System::Int8(0x8);
}	/* namespace Usbser */
}	/* namespace Android */
}	/* namespace Winsoft */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WINSOFT_ANDROID_USBSER)
using namespace Winsoft::Android::Usbser;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WINSOFT_ANDROID)
using namespace Winsoft::Android;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WINSOFT)
using namespace Winsoft;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Winsoft_Android_UsbserHPP
