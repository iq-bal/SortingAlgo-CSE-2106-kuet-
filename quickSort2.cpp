// using last element as pivot 

#include<iostream>

using namespace std;

int partition(int arr[],int l ,int h){
    int pivot = arr[l];
    int i = l+1;
    for (int j = l+1; j <= h; j++)
    {
        if(arr[j]<pivot){
            swap(arr[i],arr[j]);
            i++; 
        }
    }
    swap(arr[l],arr[i-1]); 
    return i-1; 
}

void quickSort(int arr[],int l, int h){
    if(l<h){
        int index = partition(arr,l,h);
        quickSort(arr,l,index-1);
        quickSort(arr,index+1,h); 
    }
}

void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";
    }
    cout<< endl; 
}

int main(){
    int n;  cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    quickSort(arr,0,n-1); 
    printArray(arr, n); 
}