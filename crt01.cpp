#include <iostream>
using namespace std;

int main(){
    int mark;
    cin >> mark;

    if (mark > 90)
    {
        cout << "Outstanding";
    } else if (mark > 80)
    {
        cout << "A";
    } else if (mark > 60)
    {
        cout << "B";
    }else if (mark > 40)
    {
        cout << "C";
    }
        
}