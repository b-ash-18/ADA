#include<iostream>
using namespace std;

void krushkal(){
    int v;
    cout << "Enter the number of vertices : ";
    cin >> v;
    bool* selected = new bool[v];
    // for(int i = 0; i < v; i++){
    //     selected[i] = false;
    // }

    int **graph = new int*[v];
    for(int i = 0; i < v; i++){
        graph[i] = new int[v];
    }

    cout << "Enter the graph as adjacency matrix :" << endl;
    cout << "  ";
    for(int i= 0 ; i<v; i++){
        cout << (char)(65 + i) << "  ";
    }
    cout << endl;
    for(int i = 0; i < v; i++){
        selected[i] = false;
        cout << (char)(65 + i) << " ";
        for(int j = 0; j < v; j++){
            cin >> graph[i][j];
        }
    }

    
}