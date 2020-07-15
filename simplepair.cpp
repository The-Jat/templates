#include "simplepair.h"

auto pair1 = SimplePair<int, double>{1, 7.1};
auto pair2 = SimplePair<string, int>{"MaK Jaat", 77};
cout <<"pair1 "<<pair1.first<<", "<< pair1.second << endl;
cout <<"pair2 "<<pair2.first<<", "<< pair2.second << endl;


output=>
pair1 1, 7.1
pair2 MaK Jaat, 77
