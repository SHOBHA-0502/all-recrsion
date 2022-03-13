#include <iostream>

using namespace std;

int subsetSumToK(int input[], int n, int output[][50], int k) {
    // Write your code here
    if(n==0){
        if(k==0){
            output[0][0]=0;
            return 1;
        }
        else{
            return 0;
        }
    }
   int rowCount1 = subsetSumToK(input+1, n-1, output, k);
    
    int smallOutput[1000][50];
    int rowCount2 = subsetSumToK(input+1, n-1, smallOutput, k-input[0]);
    
    int a=0;
    for(int i=rowCount1; i<(rowCount1 + rowCount2); i++)
    {
        int noCol = smallOutput[a][0];
        output[i][0] = noCol+1;
        output[i][1] = input[0];
        for(int j=1; j<=noCol; j++)
        {
            output[i][j+1] = smallOutput[a][j];
        }
        a++;
    }
    
    return rowCount1 + rowCount2;
}
int main() {
  int input[20],length, output[10000][50], k;
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];

  cin >> k;
  
  int size = subsetSumToK(input, length, output, k);

  for( int i = 0; i < size; i++) { 
	for( int j = 1; j <= output[i][0]; j++) { 
		cout << output[i][j] << " ";
    }
    cout << endl;
  }
}
