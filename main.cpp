#include <iostream>
using namespace std;
int main() {
    int h1;
    cin >> h1;
    cout << 109 + h1 << endl;
    cout<<(h1)%109<<endl;

    return 0;
}
/**
 * -60 2  -> 98
109 0 -> 0
109 1 -> 0
-109 0 -> 0
-109 1 -> 0
-109 2 -> 0
-1 109 -> 0
-5 0 -> 0
-108 3 -> 3
-220 1 -> 107
**/