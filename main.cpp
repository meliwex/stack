#include <iostream>
#include "stackList.h"
using namespace std;

int main()
{
    stackList<int> numbers;
    numbers.push(40);
    numbers.push(20);
    numbers.pop();

    cout << "Top element: " << numbers.top() << endl;
    cout << "Size: " << numbers.size() << endl;
    cout << "IsEmpty: " << numbers.empty() << endl;
}