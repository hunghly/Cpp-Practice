#include <stdio.h>
#include <iostream>

using namespace std; // this line of code will keep the namespace as std for in/outputs

int main() {
    // printf("hello world\n");
    // std::cout << "Hello World!\n";
    cout << "Hello World!\n";
    cout << "Hello my name is Hung and I am " << 32 << " years old.\n";

    /*string input;
    cout << "Please enter your name: ";
    cin >> input;
    cout << input;*/

    string name, age;
    // cout << "Please enter a name: ";
    printf("Please enter your name: ");
    cin >> name;
    // cout << "Please enter an age: ";
    printf("Please enter your age: ");
    cin >> age;
    cout << "Hi my name is " << name << " and I am " << age << " years old.";
}