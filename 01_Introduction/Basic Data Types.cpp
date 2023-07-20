/*
Author: Eshan
Author URI: https://github.com/EshanLewis/
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int i;
    long l;
    char ch;
    float f;
    double d;
    
    cin >>i >>l >> ch >>f >>d;
    cout << i <<endl;
    cout <<l <<endl;
    cout <<ch << endl;
    //cout << f << endl;
    //cout << d <<endl;
    printf("%0.3f\n",f);
    printf("%0.9f\n",d);
    
    return 0;
}