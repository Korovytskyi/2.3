#include <iostream>
#include "Vector3D.h"

int main()
{
    Vector3D A;
    cout << "Vector" << endl;
    cin >> A;
    cout << A;
    cout << "A++" << endl; cout << A++ << endl;
    cout << "A--" << endl; cout << A-- << endl;
    cout << "++A" << endl; cout << ++A << endl;
    cout << "--A" << endl; cout << --A << endl;
    A.Distance();
    A.scalar();
    A.isEqual();
    A.isEqual2();
    return 0;
}