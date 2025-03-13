#include <iostream>
using namespace std;

void heapify(int arr[],int size,int i){
    int large=i;
    int left=2*i+1;
    int right=2*i+2;

    if(left<size && arr[left]>arr[large]){
        large=left;
    }
    if (right<size&& arr[right]>arr[large]){
        large=right;
    }
    if(i!=large){
        swap(arr[i],arr[large]);
        heapify(arr,size,large);
    }

}

void buildmaxheap(int arr[],int size){
    for(int i=size/2-1;i>=0;i--){
        heapify(arr,size,i);
    }

}

void heapsort(int arr[],int size){
    buildmaxheap(arr,size);
    for(int i=size-1;i>0;i--){
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }
}

void printarray(int arr[],int size){
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[]={31, 1,122, 22, 9, 8,56};
    //int size=arr.size();
    int size=sizeof(arr) / sizeof(arr[0]);
    cout<<"Before sorting: ";
    printarray(arr,size);

    heapsort(arr,size);

    cout<<"After sorting: ";
    printarray(arr,size);

}