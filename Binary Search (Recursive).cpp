#include <iostream>
using namespace std;
int binarySearch(int input[], int start, int end, int element)
{
    if(start>end)
        return -1;
    int mid = start+(end-start)/2;
    if(input[mid]==element)
        return mid;
    else if(element>input[mid])
        return binarySearch(input, mid+1, end, element);
    else
        return binarySearch(input, start, mid-1, element);
}
int binarySearch(int input[], int size, int element) {
    // Write your code here
     binarySearch(input, 0, size-1, element);
}
int main() {
    int input[100000],length,element, ans;
    cin >> length;
    for(int i =0;i<length;i++)
    { 
        cin >> input[i];;
    }

    cin>>element;
    ans = binarySearch(input, length, element);
    cout<< ans << endl;
}
