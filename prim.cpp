#include<iostream>

using namespace std;

void minimum(int **graph, int v, bool *selected){
    int min = 99999 , index, from;
    for(int i = 0; i < v; i++){
        if(selected[i]){
            for(int j = 0; j < v; j++){
                if(graph[i][j] != 0 && graph[i][j] < min && !selected[j]){
                    min = graph[i][j];
                    from = i;
                    index = j;
                }
            }
        }
    }
    selected[index] = true;
    cout << (char)(from+65) << " - " << (char)(index + 65) << " : " << graph[from][index] << endl;
    //return index;
}

void prim(){
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
    cout << "Edge   Weight" << endl;
    selected[0] = true;
    for(int i = 0; i < v-1; i++){
            minimum(graph,v,selected);
        // for(int j = 0; j < v-1; j++){
        //     cout << i << 
        // }
    }
}

int main(){
    prim();
}