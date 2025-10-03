// Strings

#include <iostream>
#include <string>
using namespace std;

int main(){
    
    // creating a string
    string str1= "Hello World!" ;
    string str2 = "C++ Programming";


    cout << "--------Print the string--------" << endl;
    cout << str1 << endl;
    cout << str2 << endl;
    

    cout << "--------Length of the string--------" << endl;
    // (both do the same work)
    cout << "String size: " << str1.size() << endl;
    cout << "String length: " << str2.length() << endl;
    

    cout << "--------Accessing characters in a string--------" << endl;
    // indexing
    cout << "First character: " << str1[0] << endl;
    cout << "Last character: " << str1[str1.length() - 1] << endl;
    
    
    cout << "--------Concatenation--------" << endl;
    // concatenation of strings
    string con_str = str1 + str2;
    cout << "Concatenation using + : " << con_str << endl;
    
    string append_str = str1.append(str2);
    cout << "Concatenation using append() : " << append_str << endl;
    
    
    
    cout << "--------Modify string--------" << endl;
    // add, remove, alter string
    cout << str2 << endl;
    str2.push_back('!');
    cout << str2;




    return 0;
}