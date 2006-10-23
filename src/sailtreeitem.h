/*
 * Copyright (C) 1993-2006 Robert & Jeremy Laine
 * See AUTHORS file for a full list of contributors.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef SAILTREEITEM_H
#define SAILTREEITEM_H

#include "panelgroup.h"

#include <QList>
#include <QVariant>

class CSailTreeItem
{
public:
    CSailTreeItem(const QList<QVariant> &data, CSailTreeItem *parent = 0);
    ~CSailTreeItem();

    void appendChild(CSailTreeItem *child);

    CSailTreeItem *child(int row);
    int childCount() const;
    int columnCount() const;
    QVariant data(int column) const;
    int row() const;
    CSailTreeItem *parent();

private:
    QList<CSailTreeItem*> childItems;
    QList<QVariant> itemData;
    CSailTreeItem *parentItem;
};
#endif