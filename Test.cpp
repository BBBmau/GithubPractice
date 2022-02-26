#include <iostream>
#include <vector>

using namespace std;

int main(){


    cout << "Hello FIza!" << endl;
    cout << "lel kek" << endl;

    int size = 20;
    vector<int> v  = {0, 1};

    for (int i = 2; i < size; i++)
    {
        v.push_back(v[i-1] + v[i - 2]);
    }

    for (int i = 0; i < v.size(); i++){
        cout << v[i] << "; " ;
    }

    cout << endl;


    cout << "Hello FIza!";
    cout << "Heyyyyy";

    cout << 2 + 2;
    return 0;
}