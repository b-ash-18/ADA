#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int *a,int l,int h){
    int pivot = a[l];
    int i = l, j = h;
    while(i<j){
        do{
            i++;
        }
        while(a[i] <= pivot);
        
        do{
            j--;
        }
        while(a[j] > pivot);
        if(i<j){
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[l],&a[j]);
    return j;
}

void quickSort(int *a, int l, int h){
    if(l<h){
        int j = partition(a,l,h);
        quickSort(a,l,j);
        quickSort(a,j+1,h);
    }
}

void printArray(int *a,int n){
    cout<<"Array is ->";
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int a[] = {1,3,2,5,7,6,4,8};
    printArray(a,8);
    quickSort(a,0,8);
    printArray(a,8);
    return 0;
}