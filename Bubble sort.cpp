//Bubble sort

#include <iostream>
#include <vector>
using namespace std;
int main() {
    // Write C++ code here
   // std::cout << "Try programiz.pro";
    int n= 7;
   int array[n]={2,4,12,31,1,5,8};
   for (int i=0;i<n-1;i++){
       for (int j=0;j<n;j++){
           if(array[j]>array[j+1]){
               int temp=array[j];
               array[j]=array[j+1];
               array[j+1]=temp;
           }
       }
   }
   for(int num:array){
       cout <<num<<endl;
   }
   
    return 0;
}