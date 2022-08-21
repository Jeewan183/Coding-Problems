/*
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> arr{2,0,2,1,1,0};
    int n = arr.size();
    int low = 0;
    int mid = 0;
    int high = n-1;
    while(mid<=high)
    {
        if(arr[mid] == 0)
        {
            int temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;
            low++;
            mid++; 
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else
        {
            int temp = arr[high];
            arr[high] = arr[mid];
            arr[mid] = temp;
            high--;
        }
    }
    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<" "; 
    }
}