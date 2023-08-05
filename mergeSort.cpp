#include<iostream>
using namespace std;

void printArray(int* arr,int n){
      int i=0;
      for(i=0; i<n; i++){
          cout << arr[i] << "  ";
      }
      cout << endl;
  }

void merge(int* arr, int l, int m, int h){
    int i=0, j=0, k=0;
    int a = m-l+1, b = h-m;
    int A[a], B[b];
    
    k=l;
    while(k <= m){
        A[i++] = arr[k++];
    }
    cout << "A is ";
    printArray(A,a);

    while(k <= h){
        B[j++] = arr[k++];
    }

    cout << "B is ";
    printArray(B,b);

    i=0,j=0;
    k=l;

    while(i < a && j < b){
        if(A[i] <= B[j]){
            arr[k] = A[i++];
        }
        else{
            arr[k] = B[j++];
        }
        k++;
    }
    
    while(i < a){
        arr[k++] = A[i++];
    }
    while(j < b){
        arr[k++] = B[j++];
    }

    cout << "arr is ";
    for(i=l;i<=h;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void mergeSort(int* a, int l, int h){
    
    int mid=0;
    if(l<h){
        mid = (l+h)/2;
    
        mergeSort(a,l,mid);
        mergeSort(a,mid+1,h);
        merge(a,l,mid,h);
    }
}

int main(){
    int n,i;
    cout << "Enter the size of the array: ";
    cin >> n;
    int a[n];

    cout << "Enter the elements of the array" << endl;
    for(i=0; i<n; i++){
        cin >> a[i];
    }
    
    mergeSort(a,0,n-1);

    cout << "The merged array is: "; 
    printArray(a,5);
    cout << endl;
}
