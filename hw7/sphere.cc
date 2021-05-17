#pragma once
#include "sphere.hh"

#include <fstream>

using namespace std;

void Sphere::print(string filename) const { ofstream f;
  f.open(filename.c_str(), std::ios::out | std::ios::app);


  
}