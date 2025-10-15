// Arrays

#include <iostream>
using namespace std;

int main(){

    // declaring and initialization of an anrray
    int arr[5] = {1, 2, 3, 4, 5};
    // size of an array
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Size of array " << size << endl;
    
    // print array elements
    cout << "--------Traverse--------" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    
    // Array and Pointers
    cout << "--------Pointers--------" << endl;
    // pointers are special variables that store the memory address of another variable
    // Address of Operator : &


    int a = 10;
    
    // assign address of a variable - pointer
    // & is used to see the memory address of value
    
    int* ptr = &a;
    cout << &a <<  endl;
    cout << ptr << endl;


    // for char datatype
    char ch = 'A';
    char* ptr2 = &ch;
    cout << static_cast<void*>(&ch) << endl;
    cout << ptr2 << endl;


    

    return 0;
}
