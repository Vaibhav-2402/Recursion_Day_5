#include<iostream>
using namespace std;

int find_pivot(int* arr, int start, int end){
    //base case
    if(start >= end){
        return -1;
    }
    
    int mid = start+(end-start)/2;

        if(arr[mid] > arr[0]) {
           find_pivot(arr, mid+1, end);
        }
        else{
            return start+1;
        }
}

int main() {

    int arr[3] = {5, 7, 2};
    int ans = find_pivot(arr,0, 3);

    cout << "pivot is at : " << ans;
    return 0;
}