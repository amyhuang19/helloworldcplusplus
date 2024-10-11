#include <iostream> //includes the standard input-output stream libary: cin (receving input), cout (print output), cerr
#include <vector> //vector libary to use vector class, vector: dynamic array
#include <string> //support for the string class, easier tha c-style char array (char[])

using namespace std; //allows you to use standard names like cout w/out the std:: prefix

int main() { //entry point of C++ program, return type int

    //create a vector of elements of type string called msg, holds 6 string elements
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"}; //initialize list w strings
    
    //range-based for loop
    for (const string& word : msg) { //iterates through msg vector
    //cost: ensure word cannot be  modified inside loop
    //& word passed by REFERENCE: more efficient, avoids making copy of each string element
        cout << word << " "; //outputs each word to the console w/ cout
    } //for

    cout << endl; //prints newline character to console

    return 0; //for main, indicates program ended sucessfully
} //main
