#include<iostream>
using namespace std;
void reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while(start<=end)
    {
     swap(arr[start],arr[end]);
     start++;
     end--;
    }
}
void printArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main ()
{
    int arr[6] = { 1, 3, 5, 7, 9, 11};
    reverse(arr, 6);
    printArray(arr, 6);
}