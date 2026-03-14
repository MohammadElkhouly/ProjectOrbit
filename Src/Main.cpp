#include <iostream>
#include <cmath>
#include <GLFW/glfw3.h>

#define EarthGravityConstant 9.8
const int FallHeight = 100; // Meters  //* body fall height 100 meters.
/*
--------------------------------------------------
 Newtons Second Law
    a = F/m Acceleration = (Gravity Force) / mass
--------------------------------------------------
*/

int main(){
  double Acceleration = EarthGravityConstant; // m/s meter per second
  std::cout << Acceleration << " Per second" << std::endl;
  double Time = sqrt((2 * FallHeight) / Acceleration);

  std::cout << "Time to reach ground: " << Time << " seconds" << std::endl;
  return 0;
}