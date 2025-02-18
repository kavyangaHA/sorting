//optimized bubble sort


# include <iostream>
# include<vector>
using namespace std;
int main(){
    vector<int>numbers;
    int num;
    while(cin>>num){ //getting inputs and storing them in array
        numbers.push_back(num);
    }
    int size=numbers.size();  //getting the size of the array
    
    //sorting -optimized bubble sort
    int swapped=0;  //we are creating a variable check whether array is sorted
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1;j++){
           
            if( numbers[j]>numbers[j+1]){
              int temp=numbers[j];
              numbers[j]=numbers[j+1];
              numbers[j+1]=temp;
              swapped=1; //if array is not sortedyet swapped =1
            }
        }
        if(swapped==0){  // if swapped =0 means array is already sorted
            break;
        }
    }
       //printing
       for(int num:numbers){
      
        cout<<num<<" ";
    }
    //cout<<endl;
 
    
   
    return 0;
}