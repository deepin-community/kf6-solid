/*
    SPDX-FileCopyrightText: 2011 Mario Bensi <mbensi@ipsquad.net>

    SPDX-License-Identifier: LGPL-2.1-only OR LGPL-3.0-only OR LicenseRef-KDE-Accepted-LGPL
*/

#include "fakenetworkshare.h"
#include <QVariant>

using namespace Solid::Backends::Fake;

FakeNetworkShare::FakeNetworkShare(FakeDevice *device)
    : FakeDeviceInterface(device)
{
}

FakeNetworkShare::~FakeNetworkShare()
{
}

Solid::NetworkShare::ShareType FakeNetworkShare::type() const
{
    QString type = fakeDevice()->property(QStringLiteral("type")).toString();
    if (type == QLatin1String("nfs")) {
        return Solid::NetworkShare::Nfs;
    } else if (type == QLatin1String("cifs")) {
        return Solid::NetworkShare::Cifs;
    } else if (type == QLatin1String("smb3")) {
        return Solid::NetworkShare::Smb3;
    } else {
        return Solid::NetworkShare::Unknown;
    }
}

QUrl FakeNetworkShare::url() const
{
    QString url = fakeDevice()->property(QStringLiteral("url")).toString();
    return QUrl(url);
}

#include "moc_fakenetworkshare.cpp"
