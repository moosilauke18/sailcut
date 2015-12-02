/*
 * Copyright (C) 1993-2015 Robert & Jeremy Laine
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
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef SAILDISPGL_H
#define SAILDISPGL_H

#include "saildisp.h"
#include <QGLWidget>

/** An OpenGL display area for a sail. This is only used if Sailcut is
 * compiled with OpenGL support enabled.
 *
 * @see CSailDispLabel
 */
class CSailDispGL : public QGLWidget, public CSailDisp
{
public:
    CSailDispGL( QWidget *parent );

    void redraw();

protected:
    void draw( const CPanel &panel );
    void draw( const CPanelGroup &sail );
    void initializeGL();
    void mousePressEvent ( QMouseEvent * );
    void paintGL();
    void resizeGL( int w, int h );
    void wheelEvent( QWheelEvent *event);

private:
    /** Has the area been resized since last redraw */
    bool wasResized;
    /** width of last resize event */
    int resizeW;
    /** height of last resize event */
    int resizeH;
};


#endif
