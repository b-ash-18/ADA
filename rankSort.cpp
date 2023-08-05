#include<iostream><limits.h>
using namespace std;

int* ranksort(int* &array,int n){
    int i,j;
    int *b = new int[n];
    int *rank = new int[n];
    for(i=1;i<n;i++){
        for(j=0;j<i;j++){
            if(array[j] > array[i]){
                rank[j]++;
            }
            else {
                rank[i]++;
            }
        }
    }
    for(i=0;i<n;i++){
        b[rank[i]] = array[i];
    }
    array = b;

    return rank;
}

int main(){
    
    int *a = new int[5];
    a[0] = 5;
a[1] = 7;
a[2] = 7;
a[3] = 4;
a[4] = 10;

    int *r;
    r = ranksort(a,5);
    cout<<"ranks are :";
    for(int i=0;i<5;i++){
        cout<<r[i]<<" ";
    }
    cout<<endl<<"sorted array is :";
    for(int i=0;i<5;i++){
         cout<<a[i]<<" ";
    }


    cout<<endl;
}
