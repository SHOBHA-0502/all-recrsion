#include <iostream>

using namespace std;
bool checkAB(char input[]) {
	// Write your code here
     if(input[0]=='\0'){
        return true;
    }
    
    if(input[0]=='a')
    {
        if(input[1]!='\0')
    {
        if(input[1]=='a')
    {
        return checkAB(input+1);
    }
        else if(input[1]=='b' and input[2]=='b')
    {
        return checkAB(input+3);
    }
        else
    {
        return false;
    }
    }
        return true;
    }
    return false;

}

int main() {
    char input[100];
    bool ans;
    cin >> input;
    ans=checkAB(input);
    if(ans)
        cout<< "true" << endl;
    else
        cout<< "false" << endl;
}
