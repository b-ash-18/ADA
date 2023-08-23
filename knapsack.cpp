#include<iostream>
#include<algorithm>
using namespace std;

void knapsack(){
    int m,n;
    cout << "Enter m and n :";
    cin >> m >> n;
    int w[n+1], p[n+1];
    for(int i = 1; i <= n; i++){
        cout << "Enter weight and profit respectively for "<<i<<" element :";
        cin >> w[i] >> p[i];
    }
    int matrix[n+1][m+1];
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= m; j++){
            if(i == 0 || j == 0){
                matrix[i][j] = 0;
            }
            else if(w[i] > j){
                matrix[i][j] = matrix[i-1][j];
            }
            else{
                matrix[i][j] = max(matrix[i-1][j], matrix[i-1][j-w[i]]+p[i]);
            }

        }
    }
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= m; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    bool x[n+1] = {false};

    int sum = matrix[n][m] - p[n];
    // cout << "Sum is " << sum << endl;
    x[n] = true;
    while(sum){
        for(int i = 1;i <= n;i++){
            for(int j = 1; j <= m; j++){
                if(matrix[i][j] == sum){
                    sum -= p[i];
                    // cout << "sum is " << endl;
                    x[i] = true;
                    continue;
                }
            }
        }
    }
    for(int i = 1; i<= n; i++){
        cout << "x" << i <<" = " << x[i] << endl;
    }
}
int main(){
    knapsack();
}