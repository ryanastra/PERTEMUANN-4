#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 20;

    cout << " Before swap: x = " << x << ", y = " << y << endl;

    // Swap x and y
    int temp = x;
    x = y;
    y = temp; // kurang ";" pada akhir kode

    cout << "After swap: x = " << x << " , y " << y << endl;

    return 0;


}
