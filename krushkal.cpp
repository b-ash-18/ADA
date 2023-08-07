#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;

bool comp(pair<pair<int,int>,int> p1, pair<pair<int,int>,int> p2){
    if(p1.second <= p2.second) return true;
    else return false;
}

void krushkal(){
    int v;
    vector<pair<pair<int,int>,int>> arr;

    cout << "Enter the number of vertices : ";
    cin >> v;

    bool* selected = new bool[v];
    for(int i = 0; i < v; i++){
        selected[i] = false;
    }

    int **graph = new int*[v];
    for(int i = 0; i < v; i++){
        graph[i] = new int[v];
    }

    cout << "Enter the graph as adjacency matrix :" << endl;
    cout << "  ";
    for(int i= 0 ; i<v-1; i++){
        cout << (char)(65 + i) << "  ";
    }
    cout << endl;
    for(int i = 1; i < v; i++){
        cout << (char)(65 + i) << " ";
        for(int j = 0; j < i; j++){
            cin >> graph[i][j];
            if(graph [i][j] != 0){
                arr.push_back({{i,j},graph[i][j]});
            }
        }
    }
    sort(arr.begin(),arr.end(),comp);
    // for(int i = 0; i < arr.size(); i++){
    //     cout << "Sorted is " << endl <<"from " << arr[i].first.first << " to " << arr[i].first.second <<  " with weight " << arr[i].second << endl;
    // }

    //selected[0] = true;
    for(int i = 0; i < arr.size(); i++){
        if(selected[arr[i].first.first] == false || selected[arr[i].first.second] == false){
            cout << (char)(arr[i].first.first+65) << " to " << (char)(arr[i].first.second+65) << " : " << arr[i].second << endl;
            selected[arr[i].first.first] = true;
            selected[arr[i].first.second] = true;
        }
    }
    
    
    
}

int main(){
    krushkal();
}