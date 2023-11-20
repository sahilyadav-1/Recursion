void bitSumEqual(int leftSum, int rightSum, char* output, int i, int j){
    
    if(i>j){
    if(leftSum == rightSum){
        cout<< output <<endl;
    }
    return;
    }

    output[i] = '0';
    output[j] = '0';
    bitSumEqual(leftSum, rightSum, output, i+1, j-1);

    output[i] = '0';
    output[j] = '1';
    bitSumEqual(leftSum, rightSum+1, output, i+1, j-1);

    output[i] = '1';
    output[j] = '0';
    bitSumEqual(leftSum+1, rightSum, output, i+1, j-1);

    output[i] = '1';
    output[j] = '1';
    bitSumEqual(leftSum+1, rightSum+1, output, i+1, j-1);

}
