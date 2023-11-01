int fastExponentiation(int n, int k){
    
    if(k==0){
        return 1;
    }

    int smallerProblem = fastExponentiation(n,k/2);
    
    if(k&1){
        return smallerProblem*smallerProblem*n ;
    }
    else{
        return smallerProblem*smallerProblem;
    }

}
