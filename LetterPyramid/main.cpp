/* 
 *  Author: Michelle Cavalcanti Maia
 *  Project: Letter Pyramid Display  
 *  Challenge from Beginning C++ Programming - Udemy Course
 *  website: https://www.michellemaia.com
 *  Jannuary 2023
 */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;
#include <iomanip>
using std::setw;

int main()
{
    string letter {}, pyramid {};
    cout << "Please, provide a string for a Letter Pyramid display: ";
    cin >> letter;
    for(size_t i {0}; i < letter.length(); i++)
    {
        pyramid = letter.substr(0,i+1);
        for(int j {static_cast<int>(pyramid.length())-2}; j >= 0; j--)
            pyramid += pyramid.at(j);
        cout << setw(letter.length()+i) << pyramid << endl;
    }
    return 0;
}
