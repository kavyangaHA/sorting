//seletion sort


#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n= 6;
   int array[n]={2,4,12,3,1,5,8};
   for (int i=0;i<n-1;i++){
       int minIndex=i;
       for (int j=i+1;j<n;j++){
           if(array[j]<array[minIndex]){
               minIndex=j;
               
           }
       }
       int temp=array[minIndex];
       //minIndex=i;
       array[minIndex]=array[i];
       array[i]=temp;
       
       
   }
   for(int num:array){
       cout <<num<<endl;
   }
    
    return 0;
}