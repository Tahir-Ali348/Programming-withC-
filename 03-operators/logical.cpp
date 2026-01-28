#include <iostream>

using namespace std;

int main (){
    bool isStudent;
    int cups;

    cout << "Are you a Student (1 for yes and 0 for No) ? ";
    cin >> isStudent;
    cout << "How many cups of tea you have purchased ? ";
     cin >> cups; 

     if (isStudent || cups > 15 )
     {
        cout << "you are eligible for discount. " << endl;
    }else{
         cout << "you are NOT eligible for discount. " << endl;
     }
     
    return 0;
}

