#include<iostream>
using namespace std;

int min(int a, int b){
    return (a < b) ? a : b ;
}

// int binomial(int n, int r){
//     int matrix[n+1][r+1];
//     for(int i = 0; i <= n; i++){
//         for(int j = 0; j <= min(i,r); j++){
//             if(j == 0 || i == j){
//                 matrix [i][j] = 1;
//             }
//             else{
//                 matrix [i][j] = matrix[i-1][j-1] + matrix[i-1][j];
//             }
//         }
//     }
//     return matrix[n][r];
// }

int binomial(int n, int k){
    if(k > n){
        return 0;
    }
    if(n == k || k == 0){
        return 1;
    }
    return binomial(n-1,k-1) + binomial(n-1,k);
}

int main(){
    int n,r;
    cout << "Enter the n and r for nCr :";
    cin >> n >> r;
    cout << "Value of " << n << "C" << r << " is " << binomial(n,r) << endl;
}
