#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int x, i;
    int l = 1;
    cout << "enter x" << endl;
    cin >> x;
    
    cout << "enter i" << endl;
    cin >> i;
    
    l = l << i;
    cout << x << " is " << endl << bitset<sizeof(int) * 8>(x) << " binary" << endl;
    
    x = x & ~l;
    cout << "result - " << x << " is " << endl;
    cout << bitset<sizeof(int) * 8>(x) << " binary" << endl;
    return 0;
}