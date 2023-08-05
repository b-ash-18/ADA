#include<iostream>

using namespace std;
int main(){
    int n,i,j,temp,swap=0;
    cout << "Enter the size" <<endl;
    cin >> n;
    int arr[n];
    cout<< "Enter the array" << endl;
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    for(j=1;j<n;j++){
        temp = arr[j];
        i = j-1;
        while(i >=0 && arr[i] > temp){
            arr[i+1] = arr[i];
            i--;
            swap++;
        }
        arr[i+1] = temp;
    }
    if(swap ==0){
        cout<<"This is best case"<<endl;
    }
    else if(swap == n*(n-1)/2){
        cout << "This is worst case" << endl;
    }
    else {
        cout<< "This is average case" << endl;
    }
    cout <<"The sorted array is ";
    for(i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
