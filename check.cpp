#include <iostream>
using namespace std;

void check(int a) {
    string res;
    if (a > 0 && a < 45) 
        res = "gay";
    else if (a >= 45 && a <= 57) 
        res = "binhthuong";
    else if (a > 57)   
        res = "beo";
    else 
        res = "invalid";
    cout << "check(" << a << "):" << res << endl;
}

void output()
{
    check(-8);
    check(32);
    check(85);
    check(50);
}

int main() 
{
    output();
}