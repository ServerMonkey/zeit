/* ========================================================================
*    Copyright (C) 2015-2016 Blaze <blaze@vivaldi.net>
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

#ifndef TASKDIALOG_H
#define TASKDIALOG_H

#include "baseeditdialog.h"

namespace Ui {
class TaskDialog;
}

class CTTask;
class CTUnit;

class TaskDialog : public BaseEditDialog
{
    Q_OBJECT

    CTTask* task;
    Ui::TaskDialog *ui;
    void init();
    void setText(const QString&, const QString&,
                 const QString&, const QString&, const QString&);
    void setUnit(CTUnit&, const QString&);

public:
    explicit TaskDialog(CTTask*, const QString&, QWidget *parent = nullptr);
    ~TaskDialog();

private slots:
    void toggleMode();
    void refresh(int);
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();

signals:
    void accepted(CTTask* task);
};

#endif // TASKDIALOG_H
