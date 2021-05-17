#include "cube.hh"

#include <fstream>
#include <iostream>
using namespace std;

Cube::Cube(double x, double y, double z, double r)
    : loc_x(x), loc_y(y), loc_z(z), l(r){};

void Cube::print(string filename) const {
  ofstream f;
  f.open(filename.c_str(), std::ios::out | std::ios::app);
  // 1
  f << "solid" << ' ' << "Cube" << '\n';
  f << "facet" << ' ' << "normal" << ' ';
  f << 0 << ' ' << 0 << ' ' << -1 << '\n';
  f << '\t' << "outer" << ' ' << "loop" << '\n';
  f << '\t' << '\t' << "vertex" << ' ' << loc_x << ' ' << loc_y << ' ' << loc_z
    << '\n'
    << '\t' << '\t' << "vertex" << ' ' << loc_x + l << ' ' << loc_y << ' '
    << loc_z << '\n'
    << '\t' << '\t' << "vertex" << ' ' << loc_x << ' ' << loc_y + l << ' '
    << loc_z << '\n';
  f << '\t' << "endloop" << '\n';
  f << "endfacet" << '\n';

  // 2
  f << "facet" << ' ' << "normal" << ' ';
  f << 0 << ' ' << 0 << ' ' << -1 << '\n';
  f << '\t' << "outer" << ' ' << "loop" << '\n';
  f << '\t' << '\t' << "vertex" << ' ' << loc_x + l << ' ' << loc_y << ' '
    << loc_z << '\n'
    << '\t' << '\t' << "vertex" << ' ' << loc_x + l << ' ' << loc_y + l << ' '
    << loc_z << '\n'
    << '\t' << '\t' << "vertex" << ' ' << loc_x << ' ' << loc_y + l << ' '
    << loc_z << '\n';
  f << '\t' << "endloop" << '\n';
  f << "endfacet" << '\n';
  // 3
  f << "facet" << ' ' << "normal" << ' ';
  f << 0 << ' ' << 0 << ' ' << 1 << '\n';
  f << '\t' << "outer" << ' ' << "loop" << '\n';
  f << '\t' << '\t' << "vertex" << ' ' << loc_x << ' ' << loc_y << ' '
    << loc_z + l << '\n'
    << '\t' << '\t' << "vertex" << ' ' << loc_x + l << ' ' << loc_y << ' '
    << loc_z + l << '\n'
    << '\t' << '\t' << "vertex" << ' ' << loc_x << ' ' << loc_y + l << ' '
    << loc_z + l << '\n';
  f << '\t' << "endloop" << '\n';
  f << "endfacet" << '\n';
  // 4
  f << "facet" << ' ' << "normal" << ' ';
  f << 0 << ' ' << 0 << ' ' << 1 << '\n';
  f << '\t' << "outer" << ' ' << "loop" << '\n';
  f << '\t' << '\t' << "vertex" << ' ' << loc_x + l << ' ' << loc_y << ' '
    << loc_z + l << '\n'
    << '\t' << '\t' << "vertex" << ' ' << loc_x + l << ' ' << loc_y + l << ' '
    << loc_z + l << '\n'
    << '\t' << '\t' << "vertex" << ' ' << loc_x << ' ' << loc_y + l << ' '
    << loc_z + l << '\n';
  f << '\t' << "endloop" << '\n';
  f << "endfacet" << '\n';
  // 5
  f << "facet" << ' ' << "normal" << ' ';
  f << -1 << ' ' << 0 << ' ' << 0 << '\n';
  f << '\t' << "outer" << ' ' << "loop" << '\n';
  f << '\t' << '\t' << "vertex" << ' ' << loc_x << ' ' << loc_y << ' ' << loc_z
    << '\n'
    << '\t' << '\t' << "vertex" << ' ' << loc_x << ' ' << loc_y + l << ' '
    << loc_z << '\n'
    << '\t' << '\t' << "vertex" << ' ' << loc_x << ' ' << loc_y << ' '
    << loc_z + l << '\n';
  f << '\t' << "endloop" << '\n';
  f << "endfacet" << '\n';
  // 6
  f << "facet" << ' ' << "normal" << ' ';
  f << 1 << ' ' << 0 << ' ' << 0 << '\n';
  f << '\t' << "outer" << ' ' << "loop" << '\n';
  f << '\t' << '\t' << "vertex" << ' ' << loc_x + l << ' ' << loc_y << ' '
    << loc_z << '\n'
    << '\t' << '\t' << "vertex" << ' ' << loc_x + l << ' ' << loc_y + l << ' '
    << loc_z << '\n'
    << '\t' << '\t' << "vertex" << ' ' << loc_x + l << ' ' << loc_y << ' '
    << loc_z + l << '\n';
  f << '\t' << "endloop" << '\n';
  f << "endfacet" << '\n';
  // 7
  f << "facet" << ' ' << "normal" << ' ';
  f << -1 << ' ' << 0 << ' ' << 0 << '\n';
  f << '\t' << "outer" << ' ' << "loop" << '\n';
  f << '\t' << '\t' << "vertex" << ' ' << loc_x << ' ' << loc_y << ' '
    << loc_z + l << '\n'
    << '\t' << '\t' << "vertex" << ' ' << loc_x << ' ' << loc_y + l << ' '
    << loc_z + l << '\n'
    << '\t' << '\t' << "vertex" << ' ' << loc_x << ' ' << loc_y + l << ' '
    << loc_z << '\n';
  f << '\t' << "endloop" << '\n';
  f << "endfacet" << '\n';
  // 8
  f << "facet" << ' ' << "normal" << ' ';
  f << 1 << ' ' << 0 << ' ' << 0 << '\n';
  f << '\t' << "outer" << ' ' << "loop" << '\n';
  f << '\t' << '\t' << "vertex" << ' ' << loc_x + l << ' ' << loc_y << ' '
    << loc_z + l << '\n'
    << '\t' << '\t' << "vertex" << ' ' << loc_x + l << ' ' << loc_y + l << ' '
    << loc_z + l << '\n'
    << '\t' << '\t' << "vertex" << ' ' << loc_x + l << ' ' << loc_y + l << ' '
    << loc_z << '\n';
  f << '\t' << "endloop" << '\n';
  f << "endfacet" << '\n';
  // 9

  f << "facet" << ' ' << "normal" << ' ';
  f << 0 << ' ' << -1 << ' ' << 0 << '\n';
  f << '\t' << "outer" << ' ' << "loop" << '\n';
  f << '\t' << '\t' << "vertex" << ' ' << loc_x << ' ' << loc_y << ' ' << loc_z
    << '\n'
    << '\t' << '\t' << "vertex" << ' ' << loc_x + l << ' ' << loc_y << ' '
    << loc_z << '\n'
    << '\t' << '\t' << "vertex" << ' ' << loc_x << ' ' << loc_y << ' '
    << loc_z + l << '\n';
  f << '\t' << "endloop" << '\n';
  f << "endfacet" << '\n';
  // 10
  f << "facet" << ' ' << "normal" << ' ';
  f << 0 << ' ' << 1 << ' ' << 0 << '\n';
  f << '\t' << "outer" << ' ' << "loop" << '\n';
  f << '\t' << '\t' << "vertex" << ' ' << loc_x << ' ' << loc_y + l << ' '
    << loc_z << '\n'
    << '\t' << '\t' << "vertex" << ' ' << loc_x + l << ' ' << loc_y + l << ' '
    << loc_z << '\n'
    << '\t' << '\t' << "vertex" << ' ' << loc_x << ' ' << loc_y + l << ' '
    << loc_z + l << '\n';
  f << '\t' << "endloop" << '\n';
  f << "endfacet" << '\n';
  // 11
  f << "facet" << ' ' << "normal" << ' ';
  f << 0 << ' ' << -1 << ' ' << 0 << '\n';
  f << '\t' << "outer" << ' ' << "loop" << '\n';
  f << '\t' << '\t' << "vertex" << ' ' << loc_x + l << ' ' << loc_y << ' '
    << loc_z << '\n'
    << '\t' << '\t' << "vertex" << ' ' << loc_x + l << ' ' << loc_y << ' '
    << loc_z + l << '\n'
    << '\t' << '\t' << "vertex" << ' ' << loc_x << ' ' << loc_y << ' '
    << loc_z + l << '\n';
  f << '\t' << "endloop" << '\n';
  f << "endfacet" << '\n';
  // 12
  f << "facet" << ' ' << "normal" << ' ';
  f << 0 << ' ' << 1 << ' ' << 0 << '\n';
  f << '\t' << "outer" << ' ' << "loop" << '\n';
  f << '\t' << '\t' << "vertex" << ' ' << loc_x + l << ' ' << loc_y + l << ' '
    << loc_z << '\n'
    << '\t' << '\t' << "vertex" << ' ' << loc_x + l << ' ' << loc_y + l << ' '
    << loc_z + l << '\n'
    << '\t' << '\t' << "vertex" << ' ' << loc_x << ' ' << loc_y + l << ' '
    << loc_z + l << '\n';
  f << '\t' << "endloop" << '\n';
  f << "endfacet" << '\n';

  f.close();
}