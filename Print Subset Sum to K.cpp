#include <iostream>
using namespace std;
void helper(int input[],int size,int k,int output[],int m){
 if (size == 0)
    {
        if (k == 0)
        {
            for (int i = 0; i < m; i++)
            {
                cout << output[i] << " ";
            }
            cout << endl;
            return;
        }
        else
            return;
    }
    helper(input+1,size-1,k,output,m);
    output[m]=input[0];
    m++;
    helper(input+1,size-1,k-input[0],output,m);
}    

void printSubsetSumToK(int input[], int size, int k) {
    //creating an output array
    int output[100];
    helper(input,size,k,output,0);
}

int main() {
  int input[1000],length,k;
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];
  cin>>k;
  printSubsetSumToK(input, length,k);
}
