long arrayManipulation(int n, vector<vector<int>> queries) {
    
    vector<long>arr(n+1,0); /*creating an array of size n+1 and 
                            all the elements are zero     */
    
    for(size_t i=0;i<queries.size();i++){
        int a=queries[i][0];   //starting index
        int b=queries[i][1];    //Ending index
        int m=queries[i][2];   //value for adding
        
        arr[a]+=m;  //adding m to the starting index
        if(b+1<=n){
            arr[b+1]-=m;
        }
        
    }
    long maxValue=0; //maximum value of the array 
    long sum=0;
    
    for(int i=1;i<=n;i++){
        sum+=arr[i];
        if(sum >maxValue){
            maxValue=sum;
        }
    }
    return maxValue; //returning maxvalue

}
