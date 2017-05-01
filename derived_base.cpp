#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Bug {
 private :
 int nLegs; int nColor;
public:
 int nType;
 Bug (int legs, int color);
 void PrintBug () { };
};
class FlyBug: public Bug { // FlyBug是Bug的派生类
 int nWings;
 public:
 FlyBug(int legs, int color, int wings);
};

Bug::Bug( int legs, int color) {
nLegs = legs;
nColor = color;
}

//正确的FlyBug构造函数:
FlyBug::FlyBug (int legs, int color, int wings):Bug(legs, color) {
nWings = wings;
}

int main() {
FlyBug fb ( 2,3,4);
fb.PrintBug();
fb.nType = 1;
//fb.nLegs = 2 ; // error.nLegs is private
return 0;
}