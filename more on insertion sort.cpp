//more on insertion sort

void insertionSort2(int n, vector<int> arr) {
    for(int i=1;i<n;i++){   
        int insert=arr[i];  //store the current element
        int j=i-1;     //j is the element before i
    
    while(j>=0 && arr[j]>insert){
        arr[j+1]=arr[j];  //move element to right
        j--;    
    }
    arr[j+1]=insert;    //store the value in it's correct position
    for(int num:arr){
        cout<<num<<" ";  //printing the numbers in array
    }
    cout<<endl; //adding a newline
}
}