#include <iostream>

using namespace std;
int staircase(int n){
    /* Don't write main().
     *  Don't read input, it is passed as function argument.
     *  Return output and don't print it.
     *  Taking input and printing output is handled automatically.
     */
    if(n==1 || n==2)
        return n;
    if(n==3)
        return 4;
    
    return staircase(n-1)+staircase(n-2)+staircase(n-3);
    
}

int main() {
    int n, output;
    cin >> n;
    output=staircase(n);
    cout<< output <<endl;
}