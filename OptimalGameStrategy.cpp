int optimalStrategy(int *arr, int i, int j){
    if(i>j){
        return 0;
    }
    
    int choice1 = arr[i] + min(optimalStrategy(arr, i+2, j),optimalStrategy(arr, i+1, j-1));
    
    int choice2 = arr[j] + min(optimalStrategy(arr, i,j-2),optimalStrategy(arr, i+1, j-1));

    int ans = max(choice1, choice2);
    return ans;
}
