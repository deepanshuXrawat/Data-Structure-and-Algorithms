// Strings

#include <iostream>
#include <string>
using namespace std;

int main()
{

    // creating a string
    string str1 = "Hello World!";
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
    string str3 = "Hello Coders";
    cout << str3 << endl;

    cout << "----Push----" << endl;
    cout << str3 << endl;
    str3.push_back('!'); // insert a single character at the end
    cout << "After push_back(): " << str3 << endl;

    cout << "----Push----" << endl;
    cout << str3 << endl;
    str3.pop_back(); // remove last character
    cout << "After pop_back(): " << str3 << endl;

    cout << "----Insert----" << endl;
    // insert substring anywhere in the string
    str3.insert(5, " New"); // (starting index, string)
    cout << "Insert substring: " << str3 << endl;

    cout << "----Erase----" << endl;
    str3.erase(5, 4); // (starting index, no of characters)
    cout << "Erase substring: " << str3 << endl;


    cout << "--------Searching in a string--------" << endl;
    string str4 = "C++ is a fast programming language";
    cout << str4 << endl;
    cout << "\"fast\" found at index: " << str4.find("fast") << endl;

    return 0;
}