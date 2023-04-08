#include<iostream>

using namespace std;

void merge(int arr[],int l, int mid, int h){
    int temp[h-l+1]; 
    int i=l,j=mid+1,k=0;
    while (i<=mid && j<=h)
    {
        if(arr[i]<=arr[j]){
            temp[k++]=arr[i++];
        }
        else{
            temp[k++]=arr[j++];
        }
    }
    while (i<=mid)
    {
        temp[k++]=arr[i++];
    }
    while (j<=h)
    {
        temp[k++]=arr[j++]; 
    }
    for (int i = l; i <= h; i++)
    {
        arr[i]=temp[i-l]; 
    }
}

void mergeSort(int arr[],int l, int h){
    if(l<h){
        int mid = (l+h)/2;
        mergeSort(arr,0,mid);
        mergeSort(arr,mid+1,h);
        merge(arr,l,mid,h); 
    }
}

void printArray(int *arr, int n){
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";
    }
    cout<< endl; 
}

int main(){
    int a[5]= {5,1,3,2,4};
    mergeSort(a,0,4);
    printArray(a,5);
}