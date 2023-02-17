# overloadingOperators
Author: Michelle Cavalcanti Maia

Project: Example of overloading operators in Mystring class.

Challenge from Beginning C++ Programming - From Beginner to Beyond Udemy Course

website: https://www.michellemaia.com

Jannuary 2023

This challenge is about to gain experience overloading operators using member functions of the class.

Here is a list of some of the overload operators for this class:

(-) unary minus. Returns the lowercase version of the object's string
(-s1)

(==) returns true if the two strings are equal
(s1 == s2)

(!=) returns true if the two strings are not equal 
(s1 != s2)

(<) returns true if the lhs string is lexically less than the rhs string
(s1 < s2)

(>) returns true if the lhs string is lexically greater than the rhs string
(s1 > s2)

(+) concatenation. Returns an object that concatenates the lhs and rhs
(s1 + s2)

(+=) concatenate the rhs string to the lhs string and store the result in lhs object
(s1 += s2) equivalent to s1 = s1 + s2;

(*) repeat -  results in a string that is copied n times

(s2 * 3)          ex). s2 = "abc"; 

                  s1 = s2 * 3;
                  
                  s1 will result in "abcabcabc"
                  
(*=) repeat the string on the lhs n times and store the result back in the lhs object

            s1 = "abc";
            
            s1 *= 4;        s1 = s1 will result in "abcabcabcabc"


