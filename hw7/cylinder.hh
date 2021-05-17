#pragma once
#include <fstream>
#include <string>
using namespace std;
class Cylinder {
 private:
  double loc_x, loc_y, loc_z;
  double r, h, num_of_fac;
 public:
  Cylinder(double x, double y, double z, double r, double h, double fn)
      : loc_x(x), loc_y(y), loc_z(z), r(r), h(h), num_of_fac(fn){};
  void print(string filename) const;
};
