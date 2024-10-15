#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++) { // Kurang "{" pada akhir kode
        cout << "Element" << i << ": " << arr[i] << endl;
    }

    return 0;

}
