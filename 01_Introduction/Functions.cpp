/*
Author: Eshan
Author URI: https://github.com/EshanLewis/
*/

#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d){
    int max;
    if(a>b and a>c and a>d)
        max = a;
    else if (b >a and b>c and b>d)
        max = b;
    else if(c >a and c>b and c>d)
        max = c;
    else
        max = d;
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}