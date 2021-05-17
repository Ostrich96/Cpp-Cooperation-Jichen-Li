#pragma once
#include <string>
using namespace std;
class Sphere {
 private:
  double loc_x, loc_y, loc_z;
  double r;
  int num_of_fac;

 public:
  Sphere(double x, double y, double z, double r, int fn)
      : loc_x(x), loc_y(y), loc_z(z), r(r), num_of_fac(fn){};

  void print(string filename) const {};
};