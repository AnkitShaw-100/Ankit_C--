// Dynamic memory allocation

#include <iostream>
using namespace std;

int main() {
    int *ptr = new int; // Allocate memory for an integer
    *ptr = 10; // Assign a value to the allocated memory

    cout << "Value at ptr: " << *ptr << endl;

    delete ptr; // Deallocate the memory

    return 0;
}
