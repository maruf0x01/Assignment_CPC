#include<bits/stdc++.h>
using namespace std;

void registerMember(int id)
{
    cout << "Member ID: " << id << endl;
}

void registerMember(const int& id)
{
    cout << "Reference ID: " << id << endl;
}

int main()
{
    int x = 10;
    registerMember(x);
    registerMember(20);
    return 0;
}

// Line A generates a compilation error


// When x is passed, it can match both overloads
// registerMember(int) (by value),
// registerMember(int&) (by non-const reference)

// Both are considered equal for a named variable
// So the compiler cannot decide which function to call, resulting in ambiguity
// For 20, only the int version will work