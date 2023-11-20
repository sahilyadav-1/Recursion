int coinExchangeProblem(int *coin, int size, int amount, int currentCoin){
    
    if(amount == 0){
        return 1;
    }
    if(amount < 0){
        return 0;
    }

    int ways = 0;
    
    for(int i=currentCoin; i<size; i++){
    ways = ways + coinExchangeProblem(coin, size, amount - coin[i], i);
    }
    return ways;
}
