/* ========================================================================
*    Copyright (C) 2015-2022 Blaze <blaze@vivaldi.net>
*
*    This file is part of Zeit.
*
*    Zeit is free software: you can redistribute it and/or modify
*    it under the terms of the GNU General Public License as published by
*    the Free Software Foundation, either version 3 of the License, or
*    (at your option) any later version.
*
*    Zeit is distributed in the hope that it will be useful,
*    but WITHOUT ANY WARRANTY; without even the implied warranty of
*    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*    GNU General Public License for more details.
*
*    You should have received a copy of the GNU General Public License
*    along with Zeit.  If not, see <http://www.gnu.org/licenses/>.
* ======================================================================== */

#ifndef ZEITHELPER_H
#define ZEITHELPER_H

#include <KAuth/KAuthExecuteJob>
#include <KAuth/KAuthHelperSupport>

using namespace KAuth;

// usage of fully qualified type here renders the helper app fully ;) unusable
// clazy:excludeall=fully-qualified-moc-types
class ZeitHelper : public QObject
{
    Q_OBJECT

public Q_SLOTS:
    ActionReply save(const QVariantMap& args);
};

#endif // ZEITHELPER_H
