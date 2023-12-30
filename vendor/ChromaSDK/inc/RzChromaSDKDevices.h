#pragma once

//! \file RzChromaSDKDevices.h
//! \brief \~english Chroma virtual devices.
//! \brief \~chinese Chroma 虚拟设备。。
//! \brief \~japanese Chroma 仮想デバイス。
//! \brief \~korean Chroma 가상 장치.
//! \brief \~polish Urządzenia wirtualne Chroma.
//! \brief \~russian Виртуальные устройства Chroma.

#ifndef _RZSCHROMADKDEVICES_H_
#define _RZSCHROMADKDEVICES_H_

#pragma once

#ifndef GUID_DEFINED
#include <Guiddef.h>
#endif

namespace ChromaSDK
{
    // Desktop
    //! Desktop
    // {EB96AB11-E327-4BC0-B3E3-862BBB963B5D}
    static const GUID DESKTOP =
    { 0xeb96ab11, 0xe327, 0x4bc0, { 0xb3, 0xe3, 0x86, 0x2b, 0xbb, 0x96, 0x3b, 0x5d } };
}

#endif
