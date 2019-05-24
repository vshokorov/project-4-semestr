
/**
 * This file is part of Asteroid-4-sem.
 *
 * Developed for the cs and theoretical mechanics of 4th semester at DCAM MIPT.
 * This product includes software developed by other people:
 * "TetGen" - A Quality Tetrahedral Mesh Generator and A 3D Delaunay Triangulator 
 * TetGen is freely available through the website: http://www.tetgen.org.
 * See the COPYRIGHT file at the top-level directory of this distribution
 * for details of code ownership.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 * 
 */

#include <QApplication>
#include "mainwindow.h"


int main(int argc, char** argv)
{
   QApplication app(argc, argv);
   MainWindow s1;
   s1.resize(800, 800);
   s1.setWindowTitle("Asteroid-4-sem");
   s1.show();
   s1.free_main_window();

   return app.exec();
}

