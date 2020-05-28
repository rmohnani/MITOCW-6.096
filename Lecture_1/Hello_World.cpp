// A Hello World Program
#include <iostream>
using namespace std;

int main() {
    //std::cout << "Hello, world!\n" ; -- used when line 3 not there 
    cout << "Hello, world!\n" ;
    return 0;
}

// :: is the scope resolution operator so std::cout is telling compiler to look for 
// cout in std namespace. namespace is a directory of names of identifiers.
// using napesapce std tells compiler look in std namespace for any identifier we havent defined.

// ESCAPE SEQUENCES //

// \a = bell
// \b = backspace
// \f = formfeed (Page break)
// \n = newline
// \r = carriage return, returns cursor to start of line
// \t = tab
// \\ = backslash
// \' = single quote character
// \" = double quote character
// \some integer x = character represented by x

// return 0 tells operating system program has completed succesfully.
// Every statement ends with a semicolon

// DATA TYPES //

// char = single text character or small integer in '' quotes = 1 byte 
// int = Large integer = 4 bytes -- short, int, long
// bool = boolean(true, false) = 1 byte
// double = "doubly" precise floating point numbers = 8 bytes -- float, double, long double

// signed integer can represent -ve number. 
// unsgined integer will never be interpreted as -ve.
// compilers assume signed if unspecified.
// text string has type char *



