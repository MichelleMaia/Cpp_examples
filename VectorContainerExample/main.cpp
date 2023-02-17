/* 
 *  Author: Michelle Cavalcanti Maia
 *  Project: Example using vector container and controlling program flow
 *  Challenge from Beginning C++ Programming - Udemy Course
 *  website: https://www.michellemaia.com
 *  Jannuary 2023
 */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <vector>
using std::vector;

int main()
{
    vector<int> elements;
    char choice {};
    do
    {
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "F - Find number in the list" << endl;
        cout << "C - Clear numbers list" << endl;
        cout << "Q - Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl;

        switch(choice)
        {
            case 'P':
            case 'p':
                if(!elements.empty())
                {
                    cout << "[ ";
                    for(auto el: elements)
                        cout << el << " ";
                    cout << "]" << endl;
                }
                else
                    cout << "[] - the list is empty" << endl;
                break;
            case 'A':
            case 'a':
                {
                    int n {};
                    cout << "Add a number: ";
                    cin >> n;
                    elements.push_back(n);
                    break;
                }
            case 'M':
            case 'm':
                if(!elements.empty())
                {
                    double mean {0.0};
                    for(auto el: elements)
                        mean += el;
                    mean /= elements.size();
                    cout << "Mean = " << mean << endl; 
                }
                else
                    cout << "Unable to calculate the mean - no data" << endl;
                break;
            case 'S':
            case 's':
                if(!elements.empty())
                {
                    int smallest = elements.at(0);
                    for(unsigned i {1}; i < elements.size(); i++)
                        smallest  = (elements.at(i) < smallest) ? elements.at(i) : smallest;
                    cout << "Smallest Number = " << smallest << endl;
                }
                else
                    cout << "Unable to determine the smallest number - list is empty" << endl;
                break;
            case 'L':
            case 'l':
                if(!elements.empty())
                {
                    int largest = elements.at(0);
                    for(unsigned i {1}; i < elements.size(); i++)
                        largest  = (elements.at(i) > largest) ? elements.at(i) : largest;
                    cout << "Largest Number = " << largest << endl;
                }
                else
                    cout << "Unable to determine the largest number - list is empty" << endl;
                break;
            case 'F':
            case 'f':
                if(!elements.empty())
                {
                    int search {}, count {};
                    cout << "Find number: ";
                    cin >> search;
                    for(auto el : elements)
                        count += (el == search) ? 1 : 0;
                    if(count > 0)
                        cout << "Found " << count << " copy(s) of number " << search << endl;
                    else
                        cout << "Not found number " << search << endl;
                }
                else
                    cout << "Unable to find a number in the list - list is empty" << endl;
                break;
            case 'C':
            case 'c':
                elements.clear();
                cout << "[] - the list is empty" << endl;
                break;
            case 'Q':
            case 'q':
                cout << "\nThank you! See you next time!\n" << endl;
                break;
            default:
                cout << "\nNot a valid option. Please try again!\n" << endl;
        }
        cout << endl;
    }while(choice != 'q' && choice != 'Q');
    return 0;
}
