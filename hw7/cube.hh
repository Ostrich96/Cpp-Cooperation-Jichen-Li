#pragma once
#include <string>
using namespace std;
class Cube {
 private:
  double loc_x, loc_y, loc_z;
  double l;

 public:
  Cube(double x, double y, double z, double l)
      : loc_x(x), loc_y(y), loc_z(z), l(l){};

  void print(string filename) const {};
};