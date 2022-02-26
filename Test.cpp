#include <iostream>
#include <vector>

using namespace std;

int main(){

    cout << "Hello FIza!" << endl;
    cout << "lel kek" << endl;

    int size = 100;
    vector<int> v (0, 1);

    for (int i = 2; i < size; i++)
    {
        v.push_back(v[i-1] + v[i - 2]);
    }

    for (int num: v){
        cout << num << "; " ;
    }

    cout << endl;

    cout << 2 + 2;
    return 0;
}