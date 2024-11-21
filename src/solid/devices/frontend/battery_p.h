/*
    SPDX-FileCopyrightText: 2006-2007 Kevin Ottens <ervin@kde.org>

    SPDX-License-Identifier: LGPL-2.1-only OR LGPL-3.0-only OR LicenseRef-KDE-Accepted-LGPL
*/

#ifndef SOLID_BATTERY_P_H
#define SOLID_BATTERY_P_H

#include "deviceinterface_p.h"

namespace Solid
{
class BatteryPrivate : public DeviceInterfacePrivate
{
public:
    BatteryPrivate()
        : DeviceInterfacePrivate()
    {
    }
};
}

#endif
