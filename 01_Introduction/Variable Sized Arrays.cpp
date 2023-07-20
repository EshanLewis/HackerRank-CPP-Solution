/*
Author: Eshan
Author URI: https://github.com/EshanLewis/
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int v = 0;
    cin >> v;
    int w = 0;
    cin >> w;
    
    int **A = (int **)malloc(v * sizeof(int *));
    for(int i=0; i<v; i++){
        int n = 0;
        cin >> n;
        A[i] = (int *)malloc(n * sizeof(int *));
        
        for(int j = 0; j<n; j++){
            int x = 0;
            cin >> x;
            A[i][j]=x;
        }
    }
    for(int i=0; i<w; i++){
        int y = 0;
        cin >> y;
        int z = 0;
        cin >> z;
        printf("%d\n", A[y][z]);
    }
    return 0;
}