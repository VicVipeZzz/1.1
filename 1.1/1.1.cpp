#include "IntPower.h"
#include <iostream>
#include "IntPower.h"

using namespace std;

IntPower makeProduct(int k, double m)
{
    IntPower p;
    if (!p.Init(k, m))
        cout << "Error" << endl;
    return p;

}

int main()
{
    IntPower p;
    cout << "p.Read():" << endl;
    p.Read();
    cout << "p.Display:" << endl;
    p.Display();
    cout << "p.Power:" << endl;
    cout << "Power = " << p.Power() << endl;
    cout << endl;
    return 0;
}
