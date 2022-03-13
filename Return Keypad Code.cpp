#include <iostream>
#include <string>
using namespace std;
#include <string>

using namespace std;
int keypad(int num, string output[]){
    string key[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
   if(num ==0 || num ==1){
       output[0]= "";
       return 1;
   }
 
   int smalloutput = keypad(num/10,output);
   string code = key[num%10];
   int n = code.length();
   string cpy[smalloutput*n];
    int k=0;
   for(int i =0 ; i<n ; i++){
       for(int j =0 ; j<smalloutput;j++){
         cpy[k++]=output[j] +code[i] ;
       }
   }
    for(int i=0;i<k;i++){
        output[i]=cpy[i];
    }
   return n*smalloutput;
}

int main(){
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}
