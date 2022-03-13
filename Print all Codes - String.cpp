#include <iostream>

using namespace std;
void helper(string input,string output){
    if(input.empty()){
        cout<<output<<endl;
        return;
    }
    int number1=input[0]-'0';
    char letterone='a'+number1-1;
    
    helper(input.substr(1),output+letterone);//recursivecall
    if(input[1]!='\0') {
    	int number2 = input[1] - '0';
        int numberToCheck = number1 * 10 + number2;
        char lettertwo = 'a' + numberToCheck - 1;
		
        if(numberToCheck>=10 &&numberToCheck<=26){//smallworking
            char lettertwo='a'+numberToCheck-1;
            helper(input.substr(2),output+lettertwo);//recursivecall;

        }
        
    }
    
}


void printAllPossibleCodes(string input) {
    string output="";
    helper(input,output);
    
}

int main(){
    string input;
    cin >> input;

    printAllPossibleCodes(input);
    return 0;
}
