/*
Author: Eshan
Author URI: https://github.com/EshanLewis/
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    string a_string[] = {"one", "two","three", "four", "five", "six", "seven","eight","nine"};
    int a,b,i;
    cin >>a >>b;
    for(i=a; i <= b; i++){
        if(i>=1 and i<=9){
            cout << a_string[i-1] << endl;
        }
        else{
            if(i%2==0){
                cout << "even" << endl;
            }
            else{
                cout << "odd" << endl;
            }
        }
    }
    return 0;
}
