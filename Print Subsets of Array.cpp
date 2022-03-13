#include <iostream>
using namespace std;
void helper(int input[],int size,int output[],int m){
   if (size == 0)
    {
        for (int i = 0; i < m; i++)
        {
            cout << output[i] << " ";
        }
        cout << endl;
        return;
    }
    //if the first number is included;
    helper(input+1,size-1,output,m);
    output[m]=input[0];
    m++;
    helper(input+1,size-1,output,m);
}

void printSubsetsOfArray(int input[], int size) {
	// Write your code here
    int output[100];
    helper(input,size,output,0);
    
}

int main() {
  int input[1000],length;
  cin >> length;
  for(int i=0; i < length; i++)
  	cin >> input[i];
  printSubsetsOfArray(input, length);
}
