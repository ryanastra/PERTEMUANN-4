#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter two number: ";
    cin >> a >> b;

    if (a > b)
        cout << "a is greater than b" << endl;
    else
        cout << "b is greather than a" << endl; // kurang ";" dalam endl

    return 0;


}
