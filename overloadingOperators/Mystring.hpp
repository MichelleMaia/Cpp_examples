/* 
 *  Author: Michelle Cavalcanti Maia
 *  Project: Operator Overloading 
 *  Challenge from Beginning C++ Programming - Udemy Course
 *  website: https://www.michellemaia.com
 *  Jannuary 2023
 */

#ifndef _MYSTRING_HPP_
#define _MYSTRING_HPP_

#include <iostream>
using std::cout;
using std::endl;
using std::ostream;
using std::istream;
#include <cstring>
using std::strlen;
using std::strcpy;
using std::strcmp;
using std::strcat;
#include <cctype>
using std::tolower;
using std::toupper;

class Mystring
{
    // Friend functions: Overloaded Insertion and Extraction Operator
    friend ostream &operator<<(ostream &out, const Mystring &rhs);
    friend istream &operator>>(istream &in, Mystring &rhs);
    private:
        char *str;
    public:                              
        Mystring();                        // Constructor
        Mystring(const char* name);        // Overloaded Constructor
        Mystring(const Mystring &source);  // Copy constructor
        Mystring(Mystring &&source);       // Move constructor
        ~Mystring();                       // Destructor


        Mystring &operator=(const Mystring &rhs);       // Copy assignment operator overloading
        Mystring &operator=(Mystring &&rhs);            // Move assignment operator overloading
        bool operator==(const Mystring &rhs) const;     // == operator overloading
        bool operator!=(const Mystring &rhs) const;     // != operator overloading
        bool operator>(const Mystring &rhs) const;      // > operator overloading
        bool operator>=(const Mystring &rhs) const;     // >= operator overloading
        bool operator<(const Mystring &rhs) const;      // < operator overloading
        bool operator<=(const Mystring &rhs) const;     // <= operator overloading
        Mystring operator-(void) const;                 // - operator overloading, make lowercase
        Mystring operator+(const Mystring &rhs) const;  // + operator overloading, concatentate
        Mystring &operator+=(const Mystring &rhs);      // += operator overloading, concatentate and assign
        Mystring operator*(unsigned x) const;           // * operator overloading, repeat
        Mystring &operator*=(unsigned x);               // *= operator overloading, repeat and assign
        Mystring &operator++(void);                     // pre ++ operator overloading, make the string upper-case
        Mystring operator++(int);                       // post ++ operator overloading, make the string upper-case
       
        void display(void) const;
        size_t getLength(void) const;
};

#endif