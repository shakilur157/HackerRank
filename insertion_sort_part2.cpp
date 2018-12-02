#include <bits/stdc++.h>

using namespace std;

void printarr(vector<int> v,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void insertionSort1(int n, vector <int> arr) {
    // Complete this function

    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            int k=i;
            while(arr[k]>arr[k+1] && k>=0)
            {
                int temp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = temp;
                k--;
            }
        }
        printarr(arr,n);
    }


}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    insertionSort1(n, arr);
    return 0;
}

