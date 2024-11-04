#include <iostream>

using namespace std;

int main(){
    int A1,A2,A3;
    cin >> A1 >> A2 >> A3;


    int t1 = A1 * 0 + A2 * 2 + A3 * 4; // 1 andar
    int t2 = A1 * 2 + A2 * 0 + A3 * 2; // 2 andar
    int t3 = A1 * 4 + A2 * 2 + A3 * 0; // 3 andar

    int tmin = min(t1, min(t2, t3));

    cout << tmin << endl;

    return 0;
}

