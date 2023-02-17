/* 
 *  Author: Michelle Cavalcanti Maia
 *  Project: Operator Overloading 
 *  Challenge from Beginning C++ Programming - Udemy Course
 *  website: https://www.michellemaia.com
 *  Jannuary 2023
 */

#include "Mystring.hpp"

// Friend function: Overloaded Insertion Operator
ostream &operator<<(ostream &out, const Mystring &rhs)
{
    out << rhs.str;
    return out;
}
// Friend function: Overloaded Extraction Operator
istream &operator>>(istream &in, Mystring &rhs)
{
    char *aux = new char[1000];
    in >> aux;
    rhs = Mystring{aux};
    delete [] aux;
    return in;
}
// Constructor
Mystring::Mystring():
str {nullptr}
{
    str = new char[1];
    str[0] = '\0'; 
    cout << "SIMPLE Constructor" << endl;
}
// Overloaded Constructor
Mystring::Mystring(const char* name):
str {nullptr}
{
    if(name == nullptr)
    {
        str = new char[1];
        str[0] = '\0'; 
    }
    else
    {
        str = new char[strlen(name)+1];
        strcpy(str, name);
    }
    cout << "SIMPLE Overloaded Constructor" << endl;
}
// Copy constructor
Mystring::Mystring(const Mystring &source):
str {nullptr}
{
    str = new char[source.getLength()+1];
    strcpy(str, source.str);
    cout << "COPY Constructor" << endl;
}
// Move constructor
Mystring::Mystring(Mystring &&source):
str{source.str}
{
    source.str = nullptr;
    cout << "MOVE Constructor" << endl;
}
// Destructor
Mystring::~Mystring()
{
    delete [] str;
}
// Copy assignment operator overloading
Mystring &Mystring::operator=(const Mystring &rhs)
{
    cout << "COPY ASSIGNMENT" << endl;
    if(this != &rhs)
    {
        delete [] str;
        str = new char[rhs.getLength()+1];
        strcpy(str, rhs.str);
    }
    return *this;
}
// Move assignment operator overloading
Mystring &Mystring::operator=(Mystring &&rhs)
{
    cout << "MOVE ASSIGNMENT" << endl;
    if(this != &rhs)
    {
        delete [] str;
        str = rhs.str;
        rhs.str = nullptr;
    }
    return *this;
}
// == operator overloading
bool Mystring::operator==(const Mystring &rhs) const
{
    return (strcmp(str, rhs.str) == 0);
}
// != operator overloading
bool Mystring::operator!=(const Mystring &rhs) const
{
    return !(*this == rhs);    
}
// > operator overloading
bool Mystring::operator>(const Mystring &rhs) const
{
    return (strcmp(str, rhs.str) > 0);
}
// >= operator overloading
bool Mystring::operator>=(const Mystring &rhs) const
{
    return ((*this > rhs)||(*this == rhs));   
}
// < operator overloading
bool Mystring::operator<(const Mystring &rhs) const
{
    return !(*this >= rhs); 
}
// <= operator overloading
bool Mystring::operator<=(const Mystring &rhs) const
{
    return !(*this > rhs); 
}
// - operator overloading, make lowercase
Mystring Mystring::operator-(void) const
{
    char *aux = new char[getLength() + 1];
    for(size_t i {0}; i < getLength(); i++)
        aux[i] = tolower(str[i]);
    aux[getLength()] = '\0';
    Mystring m {aux};
    delete [] aux;
    return m;
}            
// + operator overloading, concatentate
Mystring Mystring::operator+(const Mystring &rhs) const
{
    char *aux = new char[getLength() + rhs.getLength() + 1];
    strcpy(aux, str);
    strcat(aux,rhs.str);
    Mystring m {aux};
    delete [] aux;
    return m;
}   
// += operator overloading, concatentate and assign
Mystring &Mystring::operator+=(const Mystring &rhs)
{
    *this = *this + rhs;
    return *this;
} 
// * operator overloading, repeat
Mystring Mystring::operator*(unsigned x) const
{
    char *aux = new char[getLength()*x + 1];
    if(x == 0)
        aux[0] = '\0';
    else
    {
        strcpy(aux, str);
        for(unsigned i {1}; i < x; i++)
            strcat(aux, str);
    }
    Mystring m {aux};
    delete [] aux;
    return m;
}          
// *= operator overloading, repeat and assign
Mystring &Mystring::operator*=(unsigned x)
{
    *this = *this * x;
    return *this;
}             
// pre ++ operator overloading, make the string upper-case               
Mystring &Mystring::operator++(void)
{
    for(size_t i {0}; i < getLength(); i++)
        str[i] = toupper(str[i]);
    return *this;
}
// post ++ operator overloading, make the string upper-case    
Mystring Mystring::operator++(int)
{
    Mystring mCopy {*this};
    ++(*this);
    return mCopy;
}

void Mystring::display(void) const
{
    cout << str << " : " << getLength() << endl;
}
size_t Mystring::getLength(void) const
{
    return strlen(str);
}