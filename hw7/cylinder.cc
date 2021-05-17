#include "cylinder.hh"
#include <cmath>
#include <fstream>
#include <iostream>
using namespace std;

Cylinder::Cylinder(double x, double y, double z, double r, double h, double f)
    : loc_x(x), loc_y(y), loc_z(z), r(r), h(h), num_of_fac(f){};
void Cylinder::print(string filename) const {
  ofstream f;
  f.open(filename.c_str(), std::ios::out | std::ios::app);

  f << "solid" << ' ' << "Cylinder" << '\n';

  for (int i = 0; i < num_of_fac; i++) {
    f << "facet" << ' ' << "normal" << ' ';
    f << 0 << ' ' << 0 << ' ' << -1 << '\n';  // the bottom of the cylinder
    f << '\t' << "outer" << ' ' << "loop" << '\n';
    f << '\t' << '\t' << "vertex" << ' ' << loc_x << ' ' << loc_y << ' '
      << loc_z << '\n'
      << '\t' << '\t' << "vertex" << ' '
      << loc_x + r * cos(i * 2 * M_PI / num_of_fac) << ' '
      << loc_y + r * sin(i * 2 * M_PI / num_of_fac) << ' ' << loc_z << '\n'
      << '\t' << '\t' << "vertex" << ' '
      << loc_x + r * cos((i + 1) * 2 * M_PI / num_of_fac) << ' '
      << loc_y + r * sin((i + 1) * 2 * M_PI / num_of_fac) << ' ' << loc_z
      << '\n';

    f << '\t' << "endloop" << '\n';
    f << "endfacet" << '\n';

    f << "facet" << ' ' << "normal" << ' ';
    f << 0 << ' ' << 0 << ' ' << 1 << '\n';  // the top of the cylinder
    f << "outer" << ' ' << "loop" << '\n';
    f << '\t' << '\t' << "vertex" << ' ' << loc_x << ' ' << loc_y << ' '
      << loc_z + h << '\n'
      << '\t' << '\t' << "vertex" << ' '
      << loc_x + r * cos(i * 2 * M_PI / num_of_fac) << ' '
      << loc_y + r * sin(i * 2 * M_PI / num_of_fac) << ' ' << loc_z + h << '\n'
      << '\t' << '\t' << "vertex" << ' '
      << loc_x + r * cos((i + 1) * 2 * M_PI / num_of_fac) << ' '
      << loc_y + r * sin((i + 1) * 2 * M_PI / num_of_fac) << ' ' << loc_z + h
      << '\n';

    f << '\t' << "endloop" << '\n';
    f << "endfacet" << '\n';

    f << "facet" << ' ' << "normal" << ' ';
    f << cos(i * 2 * M_PI / num_of_fac + M_PI / num_of_fac) << ' '
      << sin(i * 2 * M_PI / num_of_fac + M_PI / num_of_fac) << ' ' << 0
      << '\n';  // the side facet of the cylinder
    f << "outer" << ' ' << "loop" << '\n';
    f << '\t' << '\t' << "vertex" << ' '
      << loc_x + r * cos(i * 2 * M_PI / num_of_fac) << ' '
      << loc_y + r * sin(i * 2 * M_PI / num_of_fac) << ' ' << loc_z + h << '\n'
      << '\t' << '\t' << "vertex" << ' '
      << loc_x + r * cos((i + 1) * 2 * M_PI / num_of_fac) << ' '
      << loc_y + r * sin((i + 1) * 2 * M_PI / num_of_fac) << ' ' << loc_z + h
      << '\n'
      << '\t' << '\t' << "vertex" << ' '
      << loc_x + r * cos((i + 1) * 2 * M_PI / num_of_fac) << ' '
      << loc_y + r * sin((i + 1) * 2 * M_PI / num_of_fac) << ' ' << loc_z
      << '\n';

    f << '\t' << "endloop" << '\n';
    f << "endfacet" << '\n';

    f << "facet" << ' ' << "normal" << ' ';
    f << cos(i * 2 * M_PI / num_of_fac + M_PI / num_of_fac) << ' '
      << sin(i * 2 * M_PI / num_of_fac + M_PI / num_of_fac) << ' ' << 0
      << '\n';  // the side facet of the cylinder
    f << "outer" << ' ' << "loop" << '\n';
    f << '\t' << '\t' << "vertex" << ' '
      << loc_x + r * cos(i * 2 * M_PI / num_of_fac) << ' '
      << loc_y + r * sin(i * 2 * M_PI / num_of_fac) << ' ' << loc_z << '\n'
      << '\t' << '\t' << "vertex" << ' '
      << loc_x + r * cos((i + 1) * 2 * M_PI / num_of_fac) << ' '
      << loc_y + r * sin((i + 1) * 2 * M_PI / num_of_fac) << ' ' << loc_z
      << '\n'
      << '\t' << '\t' << "vertex" << ' '
      << loc_x + r * cos(i * 2 * M_PI / num_of_fac) << ' '
      << loc_y + r * sin(i * 2 * M_PI / num_of_fac) << ' ' << loc_z + h << '\n';

    f << '\t' << "endloop" << '\n';
    f << "endfacet" << '\n';
  };

  f.close();
}