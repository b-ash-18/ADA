#include<iostream>
#include<algorithm>
using namespace std;

void floyd(){
    int n;
    cout << "Enter the no of elements :";
    cin >> n;
    int d[n][n];
    cout << "Enter the adjacency matrix" << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> d[i][j];
        }
    }
    for(int k = 0; k < n; k++){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                d[i][j] = min(d[i][j],d[i][k] + d[k][j]);
            }
        }
    }
    cout << "The matrix is" << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << d[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    floyd();
    return 0;
}