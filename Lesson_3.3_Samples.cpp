/*
Lesson 3.3 Samples
Pawelski
3/23/2021
Sample programs from the notes.
*/

#include <iostream>
using namespace std;

int main()
{
    // Example #1
    // Try change the variable time to different times of the day. 
    // Such as a 2 and 12.
    int time = 22;
    if (time < 10) {
        cout << "Good morning.\n";
    }
    else if (time < 20) {
        cout << "Good day.\n";
    }
    else {
        cout << "Good evening.\n";
    }
    cout << "\n";

    // Example #2
    string choice;
    cout << "What would you like to drink? >> ";
    cin >> choice;
    if (choice == "Coke" || choice == "coke") {
        cout << "Hey Kid, Catch!\n";
    }
    else if (choice == "Pepsi" || choice == "pepsi") {
        cout << "Have a Pepsi Day!\n";
    }
    else if (choice == "Dr Pepper") {
        cout << "Wouldn't you like to be a pepper too?\n";
    }
    else {
        cout << "We don't have that kind of soda...\n";
    }
    cout << "\n";

    // Example #3
    // Try change the variable pet to different types of pets. Such
    // as a dog or a cat.
    string pet = "fish";
    if (pet == "dog") {
        cout << "woof\n";
    }
    else if (pet == "cat") {
        cout << "meow\n";
    }
    cout << "\n";

    // Example #4
    // Notice how drink choice and size are independent
    // so they have independent if statements
    string soda;
    cout << "We have Coke, Pepsi, and Dr Pepper for soda.\n";
    cout << "What would you like to drink ? >> ";
    cin >> soda;
    if (soda == "Coke" || soda == "coke") {
        cout << "Hey Kid, Catch!";
    }
    else if (soda == "Pepsi" || soda == "pepsi") {
        cout << "Have a Pepsi Day";
    }
    else if (soda == "Dr Pepper") {
        cout << "Wouldn't you like to be a pepper too?";
    }
    else {
        cout << "We don't have that kind of soda...";
    }
    cout << "\n";

    int size;
    cout << "We have 16 oz, 21 oz, and 30 oz sodas.\n";
    cout << "What size soda do you want? (16, 21, 30) >> ";
    cin >> size;
    if (size == 16) {
        cout << "Watching calories?";
    }
    else if (size == 16) {
        cout << "Would you like to Supersize that?";
    }
    else if (size == 30) {
        cout << "Maybe you should get diet soda...";
    }
    else {
        cout << "I don't understand your choice...";
    }
    cout << "\n";
    return 0;
}
