/* 
 *  Author: Michelle Cavalcanti Maia
 *  Project: Operator Overloading 
 *  Challenge from Beginning C++ Programming - Udemy Course
 *  website: https://www.michellemaia.com
 *  Jannuary 2023
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::boolalpha;
#include <vector>
using std::vector;
#include "Mystring.hpp"

int main(void)
{
    Mystring x {"michelle"};
    Mystring y;
    Mystring z {x};
    vector<Mystring> vec;
    vec.push_back(Mystring("MOVING"));
    y = z;
    y = Mystring{"maia"};
    y = "dante";

    cout << boolalpha;
    cout << x << " == " << z << " : " << (x == z) << endl;
    cout << x << " != " << z << " : " << (x != z) << endl;
    cout << x << " > "  << z << " : " << (x > z)  << endl;
    cout << x << " >= " << z << " : " << (x >= z) << endl;
    cout << x << " < "  << z << " : " << (x < z)  << endl;
    cout << x << " <= " << z << " : " << (x <= z) <<  "\n" << endl;

    cout << x << " == " << y << " : " << (x == y) << endl;
    cout << x << " != " << y << " : " << (x != y) << endl;
    cout << x << " > "  << y << " : " << (x > y)  << endl;
    cout << x << " >= " << y << " : " << (x >= y) << endl;
    cout << x << " < "  << y << " : " << (x < y)  << endl;
    cout << x << " <= " << y << " : " << (x <= y) <<  "\n" << endl;

    x = x + " cavalcanti";
    cout << x << endl;
    cout << y*5 << endl;
    cout << y*0 << " : nothing" << endl;
    x = "New";
    x *= 3;
    cout << x <<endl;
    x += z;
    cout << x <<endl;
    cout << z << " +: " << ++z << endl;
    z = -z;
    cout << z << endl;
    cout << z++ << endl;
    cout << z << endl;

    // cout << ++teste5 << endl;
    // cout << teste6++ << endl;
    // cout << teste6 << endl;

    return 0;
}
