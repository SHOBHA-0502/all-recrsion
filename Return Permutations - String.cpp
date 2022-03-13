#include <iostream>
#include <string>

using namespace std;

int returnPermutations(string input, string output[]){
   	/* Don't write main() function.
	 * Don't read input, it is passed as function argument.
	 * Print output as specified in the question
	*/
    //basecondition.
    if(input[0]=='\0'){
        output[0]="";
        return 1;
    }
                                 //o
                                                                        //0---bc
                                                                        //1---cb;
    int x=0;                                                                    
    string output1[1000];
    int smallsize=returnPermutations(input.substr(1),output1);
    for(int i=0;i<smallsize;i++){
       for(int j=0;j<=output1[i].size();j++){
           string newstring=output1[i].substr(0,j)+input[0]+output1[i].substr(j);
           output[x]=newstring;
           x++;
       }
   }
    return x;
}
int main(){
    string input;
    cin >> input;
    string output[10000];
    int count = returnPermutations(input, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}
