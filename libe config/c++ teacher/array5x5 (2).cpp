#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main() {
    srand(time(NULL));
    unsigned int ran, table[6][5], c, f;
    cout << endl;

    for (f=0;f<6;f++) {
        for (c=0;c<5;c++) {
            ran=rand()%10;
            table[f][c]=ran;
            cout << table[f][c] << " ";
        }
        cout << endl;
    }

    cout << endl;
    // system("pause");
    return 0;
}
