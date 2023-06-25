#include <iostream>
using namespace std;

int look(int arr[], int n, int key){
    
    int s = 0;
    int e = (n -1);
    
    int mid = s + (e-s)/2;

    while(s<=e){
        
        if(arr[mid] == key){
            return mid;
        }
        
        else if(arr[mid] > key){
            e = mid -1;
        }
        
        else{
            s = mid +1;
        }
        
        mid = s + (e-s)/2;
    }
    return -1;
}

int main()
{
    int odd[9] = {1, 2, 3,4 ,5, 6,7, 8, 9};
    int ans = look( odd, 9, 9 );
    cout << "key found at index: "<< ans <<endl; 
    
    int even[8] = { 2, 3,4 ,5, 6,7, 8, 9};
    int ans1 = look( even, 8, 9 );
    cout << "key found at index: "<< ans1 <<endl; 
    
    return 0;
}
