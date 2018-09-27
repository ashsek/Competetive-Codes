#include<bits/stdc++.h> 

using namespace std;

void merge(int arr[], int start, int mid, int end) 
{ 
    int i, j, k; 
    int n1 = mid - start + 1; 
    int n2 =  end - mid; 
  
    int L[n1], R[n2]; 
  
    for (i = 0; i < n1; i++) 
        L[i] = arr[start + i];

    for (j = 0; j < n2; j++) 
        R[j] = arr[mid + 1+ j];
    i = 0;
    j = 0; 
    k = start;
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
void Sort(int arr[], int start, int end) 
{ 
    if (start < end) 
    { 
        int mid = start+(end-start)/2; 
        Sort(arr, start, mid); 
        Sort(arr, mid+1, end); 
        merge(arr, start, mid, end); 
    } 
} 
  
/* Driver program to test above functions */
int main() 
{ 
    int n;
    cin >> n;
    int i;
    int arr[n];
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    int arr_size = n;
 
      
    Sort(arr, 0, arr_size - 1); 
    for(i=0;i<arr_size;i++){
        printf("%d ",arr[i]);
    }
}
