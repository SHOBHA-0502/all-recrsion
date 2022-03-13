#include <iostream>

using namespace std;


int getCodes(string input, string output[10000]) {
    
    if(input[0] == '\0'){
        output[0] == "";
        return 1;
    }

    string result1[5000], result2[5000];
    int number1 = input[0] - '0';
    char toBeAdded1 = 'a' + number1 - 1;
    int size1 = getCodes(input.substr(1), result1);
    int size2 = 0;
    int k = 0;
    int number2 = input[1] - '0';
    int numberToCheck = number1 * 10 + number2;
    char toBeAdded2 = 'a' + numberToCheck - 1;

    if(numberToCheck >= 10 && numberToCheck <= 26){
        size2 = getCodes(input.substr(2), result2);
    }

    for(int i = 0; i < size1; i++){
        output[k++] = toBeAdded1 + result1[i];
    }

    for(int i =0; i < size2; i++){
        output[k++] = toBeAdded2 + result2[i];
    }
    return k;
}

int main(){
    string input;
    cin >> input;

    string output[10000];
    int count = getCodes(input, output);
    for(int i = 0; i < count && i < 10000; i++)
        cout << output[i] << endl;
    return 0;
}
