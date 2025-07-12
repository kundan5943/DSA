#include<iostream>
using namespace std;

void UpdateIthBit(int num, int i, int val)
 {
    
    num=num&~(1<<i);

    num=num|val<<i;

    cout << num << endl;
}

int main() {
    int num = 6; // Binary: 10
    UpdateIthBit(num, 2, 0); // Should set 2nd bit: 10 -> 110 (6)
    return 0;
}
