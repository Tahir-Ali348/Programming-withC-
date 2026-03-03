#include <iostream>
#include <string>

using namespace std;

int main () {
    string teaTypes[3]  = {"Green tea", "lemon tea", "Black Tea"};
    for(int i = 0 ; i < 3 ; i++ ){
        if(teaTypes[i] == "Green tea"){
            cout << "Skipping " << teaTypes[i] << endl;
            continue;
        }
        cout << " brewing " << teaTypes[i] << "..." << endl;
    }
    return 0;   
}