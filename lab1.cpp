/*************************
* Автор: Базанов В.В. *
* Название: Вариант №1 *
*************************/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double e, a, g, t1, t2, t3, sin2, sin4;
  g = 9.81;

  cout << "e=";
  cin >> e;

  cout << "a=";
  cin >> a;

  sin2 = sin( M_PI * a / 2.0) * sin( M_PI * a / 2.0);
  sin4 =  sin2 * sin2;

  t1 = 2.0 * M_PI * sqrt(e / g);
  t2 = 2.0 * M_PI * sqrt(e / g * (1.0 + 1.0 / 16.0 * (a * a)) );
  t3 = 2.0 * M_PI * sqrt(e / g * (1.0 + 1.0 / 4.0 * sin2 + 9.0 / 64.0 * sin4) );
  
  cout << "t1=" << t1 << endl
       << "t2=" << t2 << endl
       << "t3=" << t3 << endl;
}