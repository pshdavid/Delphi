// CodeGear C++Builder
// Copyright (c) 1995, 2024 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Winsoft.Android.Usb.pas' rev: 36.00 (Android)

#ifndef Winsoft_Android_UsbHPP
#define Winsoft_Android_UsbHPP

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
#include <Androidapi.Jni.App.hpp>
#include <Androidapi.Jni.Graphicscontentviewtext.hpp>
#include <Androidapi.Jni.Javatypes.hpp>
#include <Androidapi.Jni.Os.hpp>
#include <Androidapi.Jni.hpp>
#include <System.Rtti.hpp>

//-- user supplied -----------------------------------------------------------

namespace Winsoft
{
namespace Android
{
namespace Usb
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE JUsbAccessoryClass;
typedef System::DelphiInterface<JUsbAccessoryClass> _di_JUsbAccessoryClass;
__interface DELPHIINTERFACE JUsbAccessory;
typedef System::DelphiInterface<JUsbAccessory> _di_JUsbAccessory;
class DELPHICLASS TJUsbAccessory;
__interface DELPHIINTERFACE JUsbConfigurationClass;
typedef System::DelphiInterface<JUsbConfigurationClass> _di_JUsbConfigurationClass;
__interface DELPHIINTERFACE JUsbConfiguration;
typedef System::DelphiInterface<JUsbConfiguration> _di_JUsbConfiguration;
class DELPHICLASS TJUsbConfiguration;
__interface DELPHIINTERFACE JUsbConstantsClass;
typedef System::DelphiInterface<JUsbConstantsClass> _di_JUsbConstantsClass;
__interface DELPHIINTERFACE JUsbConstants;
typedef System::DelphiInterface<JUsbConstants> _di_JUsbConstants;
class DELPHICLASS TJUsbConstants;
__interface DELPHIINTERFACE JUsbDeviceClass;
typedef System::DelphiInterface<JUsbDeviceClass> _di_JUsbDeviceClass;
__interface DELPHIINTERFACE JUsbDevice;
typedef System::DelphiInterface<JUsbDevice> _di_JUsbDevice;
class DELPHICLASS TJUsbDevice;
__interface DELPHIINTERFACE JUsbDeviceConnectionClass;
typedef System::DelphiInterface<JUsbDeviceConnectionClass> _di_JUsbDeviceConnectionClass;
__interface DELPHIINTERFACE JUsbDeviceConnection;
typedef System::DelphiInterface<JUsbDeviceConnection> _di_JUsbDeviceConnection;
class DELPHICLASS TJUsbDeviceConnection;
__interface DELPHIINTERFACE JUsbEndpointClass;
typedef System::DelphiInterface<JUsbEndpointClass> _di_JUsbEndpointClass;
__interface DELPHIINTERFACE JUsbEndpoint;
typedef System::DelphiInterface<JUsbEndpoint> _di_JUsbEndpoint;
class DELPHICLASS TJUsbEndpoint;
__interface DELPHIINTERFACE JUsbInterfaceClass;
typedef System::DelphiInterface<JUsbInterfaceClass> _di_JUsbInterfaceClass;
__interface DELPHIINTERFACE JUsbInterface;
typedef System::DelphiInterface<JUsbInterface> _di_JUsbInterface;
class DELPHICLASS TJUsbInterface;
__interface DELPHIINTERFACE JUsbManagerClass;
typedef System::DelphiInterface<JUsbManagerClass> _di_JUsbManagerClass;
__interface DELPHIINTERFACE JUsbManager;
typedef System::DelphiInterface<JUsbManager> _di_JUsbManager;
class DELPHICLASS TJUsbManager;
__interface DELPHIINTERFACE JUsbRequestClass;
typedef System::DelphiInterface<JUsbRequestClass> _di_JUsbRequestClass;
__interface DELPHIINTERFACE JUsbRequest;
typedef System::DelphiInterface<JUsbRequest> _di_JUsbRequest;
class DELPHICLASS TJUsbRequest;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{41026DD2-7F6D-4340-B3AE-71A7FFC6946D}") JUsbAccessoryClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Os::_di_JParcelable_Creator __fastcall _GetCREATOR() = 0 ;
	virtual void __fastcall _SetCREATOR(Androidapi::Jni::Os::_di_JParcelable_Creator Value) = 0 ;
	__property Androidapi::Jni::Os::_di_JParcelable_Creator CREATOR = {read=_GetCREATOR, write=_SetCREATOR};
};

__interface  INTERFACE_UUID("{6BDDD952-F140-4E5E-94B8-977570AF6774}") JUsbAccessory  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual int __cdecl describeContents() = 0 ;
	HIDESBASE virtual bool __cdecl equals(Androidapi::Jni::Javatypes::_di_JObject obj) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getDescription() = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getManufacturer() = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getModel() = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getSerial() = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getUri() = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getVersion() = 0 ;
	HIDESBASE virtual int __cdecl hashCode() = 0 ;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JString __cdecl toString() = 0 ;
	virtual void __cdecl writeToParcel(Androidapi::Jni::Os::_di_JParcel parcel, int flags) = 0 ;
};

class PASCALIMPLEMENTATION TJUsbAccessory : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbAccessoryClass,_di_JUsbAccessory>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbAccessoryClass,_di_JUsbAccessory> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJUsbAccessory() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbAccessoryClass,_di_JUsbAccessory>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJUsbAccessory() { }
	
};


__interface  INTERFACE_UUID("{3A14D202-D06A-4EDA-999B-5E061492A271}") JUsbConfigurationClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Os::_di_JParcelable_Creator __fastcall _GetCREATOR() = 0 ;
	virtual void __fastcall _SetCREATOR(Androidapi::Jni::Os::_di_JParcelable_Creator Value) = 0 ;
	__property Androidapi::Jni::Os::_di_JParcelable_Creator CREATOR = {read=_GetCREATOR, write=_SetCREATOR};
};

__interface  INTERFACE_UUID("{2EE81492-51FA-4201-A376-11056480DAB0}") JUsbConfiguration  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual int __cdecl describeContents() = 0 ;
	virtual int __cdecl getId() = 0 ;
	virtual _di_JUsbInterface __cdecl getInterface(int index) = 0 ;
	virtual int __cdecl getInterfaceCount() = 0 ;
	virtual int __cdecl getMaxPower() = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getName() = 0 ;
	virtual bool __cdecl isRemoteWakeup() = 0 ;
	virtual bool __cdecl isSelfPowered() = 0 ;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JString __cdecl toString() = 0 ;
	virtual void __cdecl writeToParcel(Androidapi::Jni::Os::_di_JParcel parcel, int flags) = 0 ;
};

class PASCALIMPLEMENTATION TJUsbConfiguration : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbConfigurationClass,_di_JUsbConfiguration>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbConfigurationClass,_di_JUsbConfiguration> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJUsbConfiguration() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbConfigurationClass,_di_JUsbConfiguration>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJUsbConfiguration() { }
	
};


__interface  INTERFACE_UUID("{64918D4F-C5E5-4FE2-AACD-62CC33661BC3}") JUsbConstantsClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual int __fastcall _GetUSB_CLASS_APP_SPEC() = 0 ;
	virtual int __fastcall _GetUSB_CLASS_AUDIO() = 0 ;
	virtual int __fastcall _GetUSB_CLASS_CDC_DATA() = 0 ;
	virtual int __fastcall _GetUSB_CLASS_COMM() = 0 ;
	virtual int __fastcall _GetUSB_CLASS_CONTENT_SEC() = 0 ;
	virtual int __fastcall _GetUSB_CLASS_CSCID() = 0 ;
	virtual int __fastcall _GetUSB_CLASS_HID() = 0 ;
	virtual int __fastcall _GetUSB_CLASS_HUB() = 0 ;
	virtual int __fastcall _GetUSB_CLASS_MASS_STORAGE() = 0 ;
	virtual int __fastcall _GetUSB_CLASS_MISC() = 0 ;
	virtual int __fastcall _GetUSB_CLASS_PER_INTERFACE() = 0 ;
	virtual int __fastcall _GetUSB_CLASS_PHYSICA() = 0 ;
	virtual int __fastcall _GetUSB_CLASS_PRINTER() = 0 ;
	virtual int __fastcall _GetUSB_CLASS_STILL_IMAGE() = 0 ;
	virtual int __fastcall _GetUSB_CLASS_VENDOR_SPEC() = 0 ;
	virtual int __fastcall _GetUSB_CLASS_VIDEO() = 0 ;
	virtual int __fastcall _GetUSB_CLASS_WIRELESS_CONTROLLER() = 0 ;
	virtual int __fastcall _GetUSB_DIR_IN() = 0 ;
	virtual int __fastcall _GetUSB_DIR_OUT() = 0 ;
	virtual int __fastcall _GetUSB_ENDPOINT_DIR_MASK() = 0 ;
	virtual int __fastcall _GetUSB_ENDPOINT_NUMBER_MASK() = 0 ;
	virtual int __fastcall _GetUSB_ENDPOINT_XFERTYPE_MASK() = 0 ;
	virtual int __fastcall _GetUSB_ENDPOINT_XFER_BULK() = 0 ;
	virtual int __fastcall _GetUSB_ENDPOINT_XFER_CONTROL() = 0 ;
	virtual int __fastcall _GetUSB_ENDPOINT_XFER_INT() = 0 ;
	virtual int __fastcall _GetUSB_ENDPOINT_XFER_ISOC() = 0 ;
	virtual int __fastcall _GetUSB_INTERFACE_SUBCLASS_BOOT() = 0 ;
	virtual int __fastcall _GetUSB_SUBCLASS_VENDOR_SPEC() = 0 ;
	virtual int __fastcall _GetUSB_TYPE_CLASS() = 0 ;
	virtual int __fastcall _GetUSB_TYPE_MASK() = 0 ;
	virtual int __fastcall _GetUSB_TYPE_RESERVED() = 0 ;
	virtual int __fastcall _GetUSB_TYPE_STANDARD() = 0 ;
	virtual int __fastcall _GetUSB_TYPE_VENDOR() = 0 ;
	HIDESBASE virtual _di_JUsbConstants __cdecl init() = 0 ;
	__property int USB_CLASS_APP_SPEC = {read=_GetUSB_CLASS_APP_SPEC};
	__property int USB_CLASS_AUDIO = {read=_GetUSB_CLASS_AUDIO};
	__property int USB_CLASS_CDC_DATA = {read=_GetUSB_CLASS_CDC_DATA};
	__property int USB_CLASS_COMM = {read=_GetUSB_CLASS_COMM};
	__property int USB_CLASS_CONTENT_SEC = {read=_GetUSB_CLASS_CONTENT_SEC};
	__property int USB_CLASS_CSCID = {read=_GetUSB_CLASS_CSCID};
	__property int USB_CLASS_HID = {read=_GetUSB_CLASS_HID};
	__property int USB_CLASS_HUB = {read=_GetUSB_CLASS_HUB};
	__property int USB_CLASS_MASS_STORAGE = {read=_GetUSB_CLASS_MASS_STORAGE};
	__property int USB_CLASS_MISC = {read=_GetUSB_CLASS_MISC};
	__property int USB_CLASS_PER_INTERFACE = {read=_GetUSB_CLASS_PER_INTERFACE};
	__property int USB_CLASS_PHYSICA = {read=_GetUSB_CLASS_PHYSICA};
	__property int USB_CLASS_PRINTER = {read=_GetUSB_CLASS_PRINTER};
	__property int USB_CLASS_STILL_IMAGE = {read=_GetUSB_CLASS_STILL_IMAGE};
	__property int USB_CLASS_VENDOR_SPEC = {read=_GetUSB_CLASS_VENDOR_SPEC};
	__property int USB_CLASS_VIDEO = {read=_GetUSB_CLASS_VIDEO};
	__property int USB_CLASS_WIRELESS_CONTROLLER = {read=_GetUSB_CLASS_WIRELESS_CONTROLLER};
	__property int USB_DIR_IN = {read=_GetUSB_DIR_IN};
	__property int USB_DIR_OUT = {read=_GetUSB_DIR_OUT};
	__property int USB_ENDPOINT_DIR_MASK = {read=_GetUSB_ENDPOINT_DIR_MASK};
	__property int USB_ENDPOINT_NUMBER_MASK = {read=_GetUSB_ENDPOINT_NUMBER_MASK};
	__property int USB_ENDPOINT_XFERTYPE_MASK = {read=_GetUSB_ENDPOINT_XFERTYPE_MASK};
	__property int USB_ENDPOINT_XFER_BULK = {read=_GetUSB_ENDPOINT_XFER_BULK};
	__property int USB_ENDPOINT_XFER_CONTROL = {read=_GetUSB_ENDPOINT_XFER_CONTROL};
	__property int USB_ENDPOINT_XFER_INT = {read=_GetUSB_ENDPOINT_XFER_INT};
	__property int USB_ENDPOINT_XFER_ISOC = {read=_GetUSB_ENDPOINT_XFER_ISOC};
	__property int USB_INTERFACE_SUBCLASS_BOOT = {read=_GetUSB_INTERFACE_SUBCLASS_BOOT};
	__property int USB_SUBCLASS_VENDOR_SPEC = {read=_GetUSB_SUBCLASS_VENDOR_SPEC};
	__property int USB_TYPE_CLASS = {read=_GetUSB_TYPE_CLASS};
	__property int USB_TYPE_MASK = {read=_GetUSB_TYPE_MASK};
	__property int USB_TYPE_RESERVED = {read=_GetUSB_TYPE_RESERVED};
	__property int USB_TYPE_STANDARD = {read=_GetUSB_TYPE_STANDARD};
	__property int USB_TYPE_VENDOR = {read=_GetUSB_TYPE_VENDOR};
};

__interface  INTERFACE_UUID("{AAEE26FD-823E-4BE9-98C4-83F85A18F636}") JUsbConstants  : public Androidapi::Jni::Javatypes::JObject 
{
	
};

class PASCALIMPLEMENTATION TJUsbConstants : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbConstantsClass,_di_JUsbConstants>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbConstantsClass,_di_JUsbConstants> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJUsbConstants() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbConstantsClass,_di_JUsbConstants>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJUsbConstants() { }
	
};


__interface  INTERFACE_UUID("{F15C59C8-9C54-444D-8205-EFEF1A78223E}") JUsbDeviceClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Os::_di_JParcelable_Creator __fastcall _GetCREATOR() = 0 ;
	virtual void __fastcall _SetCREATOR(Androidapi::Jni::Os::_di_JParcelable_Creator Value) = 0 ;
	virtual int __cdecl getDeviceId(Androidapi::Jni::Javatypes::_di_JString name) = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getDeviceName(int id) = 0 ;
	__property Androidapi::Jni::Os::_di_JParcelable_Creator CREATOR = {read=_GetCREATOR, write=_SetCREATOR};
};

__interface  INTERFACE_UUID("{F80F0C53-349A-4E94-9F61-3DDB051A4955}") JUsbDevice  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual int __cdecl describeContents() = 0 ;
	HIDESBASE virtual bool __cdecl equals(Androidapi::Jni::Javatypes::_di_JObject o) = 0 ;
	virtual _di_JUsbConfiguration __cdecl getConfiguration(int index) = 0 ;
	virtual int __cdecl getConfigurationCount() = 0 ;
	virtual int __cdecl getDeviceClass() = 0 ;
	virtual int __cdecl getDeviceId() = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getDeviceName() = 0 ;
	virtual int __cdecl getDeviceProtocol() = 0 ;
	virtual int __cdecl getDeviceSubclass() = 0 ;
	virtual _di_JUsbInterface __cdecl getInterface(int index) = 0 ;
	virtual int __cdecl getInterfaceCount() = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getManufacturerName() = 0 ;
	virtual int __cdecl getProductId() = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getProductName() = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getSerialNumber() = 0 ;
	virtual int __cdecl getVendorId() = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getVersion() = 0 ;
	HIDESBASE virtual int __cdecl hashCode() = 0 ;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JString __cdecl toString() = 0 ;
	virtual void __cdecl writeToParcel(Androidapi::Jni::Os::_di_JParcel parcel, int flags) = 0 ;
};

class PASCALIMPLEMENTATION TJUsbDevice : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbDeviceClass,_di_JUsbDevice>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbDeviceClass,_di_JUsbDevice> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJUsbDevice() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbDeviceClass,_di_JUsbDevice>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJUsbDevice() { }
	
};


__interface  INTERFACE_UUID("{E623140B-634D-4035-A260-3382B97C1166}") JUsbDeviceConnectionClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	
};

__interface  INTERFACE_UUID("{9D0955E1-4CB4-477E-9EA9-EA7DA30C73E6}") JUsbDeviceConnection  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual int __cdecl bulkTransfer(_di_JUsbEndpoint endpoint, Androidapi::Jnibridge::TJavaArray__1<System::Byte>* buffer, int length, int timeout) = 0 /* overload */;
	virtual int __cdecl bulkTransfer(_di_JUsbEndpoint endpoint, Androidapi::Jnibridge::TJavaArray__1<System::Byte>* buffer, int offset, int length, int timeout) = 0 /* overload */;
	virtual bool __cdecl claimInterface(_di_JUsbInterface intf, bool force) = 0 ;
	virtual void __cdecl close() = 0 ;
	virtual int __cdecl controlTransfer(int requestType, int request, int value, int index, Androidapi::Jnibridge::TJavaArray__1<System::Byte>* buffer, int length, int timeout) = 0 /* overload */;
	virtual int __cdecl controlTransfer(int requestType, int request, int value, int index, Androidapi::Jnibridge::TJavaArray__1<System::Byte>* buffer, int offset, int length, int timeout) = 0 /* overload */;
	virtual int __cdecl getFileDescriptor() = 0 ;
	virtual Androidapi::Jnibridge::TJavaArray__1<System::Byte>* __cdecl getRawDescriptors() = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getSerial() = 0 ;
	virtual bool __cdecl releaseInterface(_di_JUsbInterface intf) = 0 ;
	virtual _di_JUsbRequest __cdecl requestWait() = 0 /* overload */;
	virtual _di_JUsbRequest __cdecl requestWait(__int64 timeout) = 0 /* overload */;
	virtual bool __cdecl setConfiguration(_di_JUsbConfiguration configuration) = 0 ;
	virtual bool __cdecl setInterface(_di_JUsbInterface intf) = 0 ;
};

class PASCALIMPLEMENTATION TJUsbDeviceConnection : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbDeviceConnectionClass,_di_JUsbDeviceConnection>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbDeviceConnectionClass,_di_JUsbDeviceConnection> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJUsbDeviceConnection() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbDeviceConnectionClass,_di_JUsbDeviceConnection>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJUsbDeviceConnection() { }
	
};


__interface  INTERFACE_UUID("{04F540D0-FE12-469C-B60B-C138E9A0DC15}") JUsbEndpointClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Os::_di_JParcelable_Creator __fastcall _GetCREATOR() = 0 ;
	virtual void __fastcall _SetCREATOR(Androidapi::Jni::Os::_di_JParcelable_Creator Value) = 0 ;
	__property Androidapi::Jni::Os::_di_JParcelable_Creator CREATOR = {read=_GetCREATOR, write=_SetCREATOR};
};

__interface  INTERFACE_UUID("{FA0E741F-B366-495E-ADB8-0E123F671156}") JUsbEndpoint  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual int __cdecl describeContents() = 0 ;
	virtual int __cdecl getAddress() = 0 ;
	virtual int __cdecl getAttributes() = 0 ;
	virtual int __cdecl getDirection() = 0 ;
	virtual int __cdecl getEndpointNumber() = 0 ;
	virtual int __cdecl getInterval() = 0 ;
	virtual int __cdecl getMaxPacketSize() = 0 ;
	virtual int __cdecl getType() = 0 ;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JString __cdecl toString() = 0 ;
	virtual void __cdecl writeToParcel(Androidapi::Jni::Os::_di_JParcel parcel, int flags) = 0 ;
};

class PASCALIMPLEMENTATION TJUsbEndpoint : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbEndpointClass,_di_JUsbEndpoint>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbEndpointClass,_di_JUsbEndpoint> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJUsbEndpoint() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbEndpointClass,_di_JUsbEndpoint>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJUsbEndpoint() { }
	
};


__interface  INTERFACE_UUID("{BE86F03B-8597-4BCA-8954-F59EF065E666}") JUsbInterfaceClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Os::_di_JParcelable_Creator __fastcall _GetCREATOR() = 0 ;
	virtual void __fastcall _SetCREATOR(Androidapi::Jni::Os::_di_JParcelable_Creator Value) = 0 ;
	__property Androidapi::Jni::Os::_di_JParcelable_Creator CREATOR = {read=_GetCREATOR, write=_SetCREATOR};
};

__interface  INTERFACE_UUID("{1E6D2E78-3A68-4DB7-9283-9EA05BCA9151}") JUsbInterface  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual int __cdecl describeContents() = 0 ;
	virtual int __cdecl getAlternateSetting() = 0 ;
	virtual _di_JUsbEndpoint __cdecl getEndpoint(int index) = 0 ;
	virtual int __cdecl getEndpointCount() = 0 ;
	virtual int __cdecl getId() = 0 ;
	virtual int __cdecl getInterfaceClass() = 0 ;
	virtual int __cdecl getInterfaceProtocol() = 0 ;
	virtual int __cdecl getInterfaceSubclass() = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __cdecl getName() = 0 ;
	HIDESBASE virtual Androidapi::Jni::Javatypes::_di_JString __cdecl toString() = 0 ;
	virtual void __cdecl writeToParcel(Androidapi::Jni::Os::_di_JParcel parcel, int flags) = 0 ;
};

class PASCALIMPLEMENTATION TJUsbInterface : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbInterfaceClass,_di_JUsbInterface>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbInterfaceClass,_di_JUsbInterface> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJUsbInterface() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbInterfaceClass,_di_JUsbInterface>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJUsbInterface() { }
	
};


__interface  INTERFACE_UUID("{601C584D-F23F-430B-90CC-B626EE9E0632}") JUsbManagerClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetACTION_USB_ACCESSORY_ATTACHED() = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetACTION_USB_ACCESSORY_DETACHED() = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetACTION_USB_DEVICE_ATTACHED() = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetACTION_USB_DEVICE_DETACHED() = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetEXTRA_ACCESSORY() = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetEXTRA_DEVICE() = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JString __fastcall _GetEXTRA_PERMISSION_GRANTED() = 0 ;
	__property Androidapi::Jni::Javatypes::_di_JString ACTION_USB_ACCESSORY_ATTACHED = {read=_GetACTION_USB_ACCESSORY_ATTACHED};
	__property Androidapi::Jni::Javatypes::_di_JString ACTION_USB_ACCESSORY_DETACHED = {read=_GetACTION_USB_ACCESSORY_DETACHED};
	__property Androidapi::Jni::Javatypes::_di_JString ACTION_USB_DEVICE_ATTACHED = {read=_GetACTION_USB_DEVICE_ATTACHED};
	__property Androidapi::Jni::Javatypes::_di_JString ACTION_USB_DEVICE_DETACHED = {read=_GetACTION_USB_DEVICE_DETACHED};
	__property Androidapi::Jni::Javatypes::_di_JString EXTRA_ACCESSORY = {read=_GetEXTRA_ACCESSORY};
	__property Androidapi::Jni::Javatypes::_di_JString EXTRA_DEVICE = {read=_GetEXTRA_DEVICE};
	__property Androidapi::Jni::Javatypes::_di_JString EXTRA_PERMISSION_GRANTED = {read=_GetEXTRA_PERMISSION_GRANTED};
};

__interface  INTERFACE_UUID("{46D7C03C-0934-4BBA-858C-979329B1CAA3}") JUsbManager  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual Androidapi::Jnibridge::TJavaObjectArray__1<_di_JUsbAccessory>* __cdecl getAccessoryList() = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JHashMap __cdecl getDeviceList() = 0 ;
	virtual bool __cdecl hasPermission(_di_JUsbDevice device) = 0 /* overload */;
	virtual bool __cdecl hasPermission(_di_JUsbAccessory accessory) = 0 /* overload */;
	virtual Androidapi::Jni::Os::_di_JParcelFileDescriptor __cdecl openAccessory(_di_JUsbAccessory accessory) = 0 ;
	virtual _di_JUsbDeviceConnection __cdecl openDevice(_di_JUsbDevice device) = 0 ;
	virtual void __cdecl requestPermission(_di_JUsbDevice device, Androidapi::Jni::App::_di_JPendingIntent pi) = 0 /* overload */;
	virtual void __cdecl requestPermission(_di_JUsbAccessory accessory, Androidapi::Jni::App::_di_JPendingIntent pi) = 0 /* overload */;
};

class PASCALIMPLEMENTATION TJUsbManager : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbManagerClass,_di_JUsbManager>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbManagerClass,_di_JUsbManager> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJUsbManager() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbManagerClass,_di_JUsbManager>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJUsbManager() { }
	
};


__interface  INTERFACE_UUID("{B96BF7BD-51E8-4A64-BFBD-81DB2C4CCA12}") JUsbRequestClass  : public Androidapi::Jni::Javatypes::JObjectClass 
{
	HIDESBASE virtual _di_JUsbRequest __cdecl init() = 0 ;
};

__interface  INTERFACE_UUID("{D7212EC4-3E4A-427E-BBBD-94F5129ABA82}") JUsbRequest  : public Androidapi::Jni::Javatypes::JObject 
{
	virtual bool __cdecl cancel() = 0 ;
	virtual void __cdecl close() = 0 ;
	virtual Androidapi::Jni::Javatypes::_di_JObject __cdecl getClientData() = 0 ;
	virtual _di_JUsbEndpoint __cdecl getEndpoint() = 0 ;
	virtual bool __cdecl initialize(_di_JUsbDeviceConnection connection, _di_JUsbEndpoint endpoint) = 0 ;
	virtual bool __cdecl queue _DEPRECATED_ATTRIBUTE0 (Androidapi::Jni::Javatypes::_di_JByteBuffer buffer, int length) = 0 /* overload */;
	virtual bool __cdecl queue(Androidapi::Jni::Javatypes::_di_JByteBuffer buffer) = 0 /* overload */;
	virtual void __cdecl setClientData(Androidapi::Jni::Javatypes::_di_JObject data) = 0 ;
};

class PASCALIMPLEMENTATION TJUsbRequest : public Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbRequestClass,_di_JUsbRequest>
{
	typedef Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbRequestClass,_di_JUsbRequest> inherited;
	
public:
	/* TObject.Create */ inline __fastcall TJUsbRequest() : Androidapi::Jnibridge::TJavaGenericImport__2<_di_JUsbRequestClass,_di_JUsbRequest>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJUsbRequest() { }
	
};


//-- var, const, procedure ---------------------------------------------------
static _DELPHI_CONST System::Byte TJUsbConstants_USB_CLASS_APP_SPEC = System::Byte(0xfe);
static _DELPHI_CONST System::Int8 TJUsbConstants_USB_CLASS_AUDIO = System::Int8(0x1);
static _DELPHI_CONST System::Int8 TJUsbConstants_USB_CLASS_CDC_DATA = System::Int8(0xa);
static _DELPHI_CONST System::Int8 TJUsbConstants_USB_CLASS_COMM = System::Int8(0x2);
static _DELPHI_CONST System::Int8 TJUsbConstants_USB_CLASS_CONTENT_SEC = System::Int8(0xd);
static _DELPHI_CONST System::Int8 TJUsbConstants_USB_CLASS_CSCID = System::Int8(0xb);
static _DELPHI_CONST System::Int8 TJUsbConstants_USB_CLASS_HID = System::Int8(0x3);
static _DELPHI_CONST System::Int8 TJUsbConstants_USB_CLASS_HUB = System::Int8(0x9);
static _DELPHI_CONST System::Int8 TJUsbConstants_USB_CLASS_MASS_STORAGE = System::Int8(0x8);
static _DELPHI_CONST System::Byte TJUsbConstants_USB_CLASS_MISC = System::Byte(0xef);
static _DELPHI_CONST System::Int8 TJUsbConstants_USB_CLASS_PER_INTERFACE = System::Int8(0x0);
static _DELPHI_CONST System::Int8 TJUsbConstants_USB_CLASS_PHYSICA = System::Int8(0x5);
static _DELPHI_CONST System::Int8 TJUsbConstants_USB_CLASS_PRINTER = System::Int8(0x7);
static _DELPHI_CONST System::Int8 TJUsbConstants_USB_CLASS_STILL_IMAGE = System::Int8(0x6);
static _DELPHI_CONST System::Byte TJUsbConstants_USB_CLASS_VENDOR_SPEC = System::Byte(0xff);
static _DELPHI_CONST System::Int8 TJUsbConstants_USB_CLASS_VIDEO = System::Int8(0xe);
static _DELPHI_CONST System::Byte TJUsbConstants_USB_CLASS_WIRELESS_CONTROLLER = System::Byte(0xe0);
static _DELPHI_CONST System::Byte TJUsbConstants_USB_DIR_IN = System::Byte(0x80);
static _DELPHI_CONST System::Int8 TJUsbConstants_USB_DIR_OUT = System::Int8(0x0);
static _DELPHI_CONST System::Byte TJUsbConstants_USB_ENDPOINT_DIR_MASK = System::Byte(0x80);
static _DELPHI_CONST System::Int8 TJUsbConstants_USB_ENDPOINT_NUMBER_MASK = System::Int8(0xf);
static _DELPHI_CONST System::Int8 TJUsbConstants_USB_ENDPOINT_XFERTYPE_MASK = System::Int8(0x3);
static _DELPHI_CONST System::Int8 TJUsbConstants_USB_ENDPOINT_XFER_BULK = System::Int8(0x2);
static _DELPHI_CONST System::Int8 TJUsbConstants_USB_ENDPOINT_XFER_CONTROL = System::Int8(0x0);
static _DELPHI_CONST System::Int8 TJUsbConstants_USB_ENDPOINT_XFER_INT = System::Int8(0x3);
static _DELPHI_CONST System::Int8 TJUsbConstants_USB_ENDPOINT_XFER_ISOC = System::Int8(0x1);
static _DELPHI_CONST System::Int8 TJUsbConstants_USB_INTERFACE_SUBCLASS_BOOT = System::Int8(0x1);
static _DELPHI_CONST System::Byte TJUsbConstants_USB_SUBCLASS_VENDOR_SPEC = System::Byte(0xff);
static _DELPHI_CONST System::Int8 TJUsbConstants_USB_TYPE_CLASS = System::Int8(0x20);
static _DELPHI_CONST System::Int8 TJUsbConstants_USB_TYPE_MASK = System::Int8(0x60);
static _DELPHI_CONST System::Int8 TJUsbConstants_USB_TYPE_RESERVED = System::Int8(0x60);
static _DELPHI_CONST System::Int8 TJUsbConstants_USB_TYPE_STANDARD = System::Int8(0x0);
static _DELPHI_CONST System::Int8 TJUsbConstants_USB_TYPE_VENDOR = System::Int8(0x40);
#define TJUsbManager_ACTION_USB_ACCESSORY_ATTACHED u"android.hardware.usb.action.USB_ACCESSORY_ATTACHED"
#define TJUsbManager_ACTION_USB_ACCESSORY_DETACHED u"android.hardware.usb.action.USB_ACCESSORY_DETACHED"
#define TJUsbManager_ACTION_USB_DEVICE_ATTACHED u"android.hardware.usb.action.USB_DEVICE_ATTACHED"
#define TJUsbManager_ACTION_USB_DEVICE_DETACHED u"android.hardware.usb.action.USB_DEVICE_DETACHED"
#define TJUsbManager_EXTRA_ACCESSORY u"accessory"
#define TJUsbManager_EXTRA_DEVICE u"device"
#define TJUsbManager_EXTRA_PERMISSION_GRANTED u"permission"
}	/* namespace Usb */
}	/* namespace Android */
}	/* namespace Winsoft */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WINSOFT_ANDROID_USB)
using namespace Winsoft::Android::Usb;
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
#endif	// Winsoft_Android_UsbHPP
