/***************************************************************************
 *   Copyright (C) 2009 Tim Vandermeersch                                  *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#ifndef REACTIONARROWDIALOG_H
#define REACTIONARROWDIALOG_H

#include <QtGui/QDialog>


namespace Ui {
    class ReactionArrowDialog;
}

namespace Molsketch {

  class ReactionArrow;

  class ReactionArrowDialog : public QDialog 
  {
    Q_OBJECT
    public:
      ReactionArrowDialog(ReactionArrow *arrow, QWidget *parent = 0);
      virtual ~ReactionArrowDialog();
  
    public Q_SLOTS:
      void typeChanged(int);

    private:
      ReactionArrow *m_arrow;
      Ui::ReactionArrowDialog *m_ui;
  };

}

#endif // REACTIONARROWDIALOG_H