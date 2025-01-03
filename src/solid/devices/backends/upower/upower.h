/*
    SPDX-FileCopyrightText: 2009 Pino Toscano <pino@kde.org>

    SPDX-License-Identifier: LGPL-2.1-only OR LGPL-3.0-only OR LicenseRef-KDE-Accepted-LGPL
*/

#ifndef SOLID_BACKENDS_UPOWER_H
#define SOLID_BACKENDS_UPOWER_H

/* UPower */
#define UP_DBUS_SERVICE "org.freedesktop.UPower"
#define UP_DBUS_PATH "/org/freedesktop/UPower"
#define UP_DBUS_INTERFACE "org.freedesktop.UPower"
#define UP_DBUS_INTERFACE_DEVICE UP_DBUS_INTERFACE ".Device"
#define UP_UDI_PREFIX "/org/freedesktop/UPower"

// These should be kept in sync with https://gitlab.freedesktop.org/upower/upower/-/blob/master/libupower-glib/up-types.h

typedef enum {
    UP_DEVICE_KIND_UNKNOWN,
    UP_DEVICE_KIND_LINE_POWER,
    UP_DEVICE_KIND_BATTERY,
    UP_DEVICE_KIND_UPS,
    UP_DEVICE_KIND_MONITOR,
    UP_DEVICE_KIND_MOUSE,
    UP_DEVICE_KIND_KEYBOARD,
    UP_DEVICE_KIND_PDA,
    UP_DEVICE_KIND_PHONE,
    UP_DEVICE_KIND_MEDIA_PLAYER,
    UP_DEVICE_KIND_TABLET,
    UP_DEVICE_KIND_COMPUTER,
    UP_DEVICE_KIND_GAMING_INPUT,
    UP_DEVICE_KIND_PEN,
    UP_DEVICE_KIND_TOUCHPAD,
    UP_DEVICE_KIND_MODEM,
    UP_DEVICE_KIND_NETWORK,
    UP_DEVICE_KIND_HEADSET,
    UP_DEVICE_KIND_SPEAKERS,
    UP_DEVICE_KIND_HEADPHONES,
    UP_DEVICE_KIND_VIDEO,
    UP_DEVICE_KIND_OTHER_AUDIO,
    UP_DEVICE_KIND_REMOTE_CONTROL,
    UP_DEVICE_KIND_PRINTER,
    UP_DEVICE_KIND_SCANNER,
    UP_DEVICE_KIND_CAMERA,
    UP_DEVICE_KIND_WEARABLE,
    UP_DEVICE_KIND_TOY,
    UP_DEVICE_KIND_BLUETOOTH_GENERIC,
    UP_DEVICE_KIND_LAST
} UpDeviceKind;

typedef enum {
    UP_DEVICE_STATE_UNKNOWN,
    UP_DEVICE_STATE_CHARGING,
    UP_DEVICE_STATE_DISCHARGING,
    UP_DEVICE_STATE_EMPTY,
    UP_DEVICE_STATE_FULLY_CHARGED,
    UP_DEVICE_STATE_PENDING_CHARGE,
    UP_DEVICE_STATE_PENDING_DISCHARGE,
    UP_DEVICE_STATE_LAST
} UpDeviceState;

typedef enum {
    UP_DEVICE_TECHNOLOGY_UNKNOWN,
    UP_DEVICE_TECHNOLOGY_LITHIUM_ION,
    UP_DEVICE_TECHNOLOGY_LITHIUM_POLYMER,
    UP_DEVICE_TECHNOLOGY_LITHIUM_IRON_PHOSPHATE,
    UP_DEVICE_TECHNOLOGY_LEAD_ACID,
    UP_DEVICE_TECHNOLOGY_NICKEL_CADMIUM,
    UP_DEVICE_TECHNOLOGY_NICKEL_METAL_HYDRIDE,
    UP_DEVICE_TECHNOLOGY_LAST
} UpDeviceTechnology;

#endif // SOLID_BACKENDS_UPOWER_H
