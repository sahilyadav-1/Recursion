void powerSet(string input, int index, string output){

    if(index == input.size()){
        cout<<output<<endl;
        return;
    }

    char ch = input[index];

    powerSet(input, index+1, output);

    output.push_back(ch);
    powerSet(input, index+1, output);

}
