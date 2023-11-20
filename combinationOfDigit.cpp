void combination(string input, int index, string output){

    if(input.size() == index){
        cout<<output<<endl;
        return;
    }
    
    char ch = input[index];

    output.push_back(ch);
    combination(input, index+1, output);
    
    if(input[index+1] != '\0'){
        output.push_back('_');
        combination(input, index+1, output);
    }
}
