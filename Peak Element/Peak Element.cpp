class Solution {
  public:
    int peakElement(vector<int> &arr) {
        // code here
        int n = arr.size();
        int start = 0;
        int end = n-1;
        
        // if one element in array 
        if( n == 1) return 0;
          
        // if first is peak element  
        if(arr[0] > arr[1]) return 0;
        
        // if last element is peak element
        if(arr[n-1] > arr[n-2]) return n-1;
            
        
        while(start < end){
            int mid = start + (end-start)/2;
            

            if(mid > 0 && mid < arr.size()-1 && arr[mid] > arr[mid+1] && arr[mid]> arr[mid-1])
                return mid;
            if(arr[mid] < arr[mid+1]){
                start = mid + 1;
            }
            else{
                end = mid ;
            }
            
            
        }
        return -1;
    }
};

----------------------------------------------------------------------------------

  class Solution {
  public:
    int peakElement(vector<int> &arr) {
        // code here
        int n = arr.size();
        int start = 0;
        int end = n-1;
        
        // if one element in array 
        if( n == 1) return 0;
          
        // if first is peak element  
        if(arr[0] > arr[1]) return 0;
        
        // if last element is peak element
        if(arr[n-1] > arr[n-2]) return n-1;
            
        
        while(start <= end){
            int mid = start + (end-start)/2;
            

            if(mid > 0 && mid < arr.size()-1 && arr[mid] > arr[mid+1] && arr[mid]> arr[mid-1])
                return mid;
            if(arr[mid] < arr[mid+1]){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
            
            
        }
        return -1;
    }
};

---------------------------------------------
we do not use
  1. start <= end with end = mid; loop end nhi hoga
2. start < end with end = mid-1;  ( start == end wala element ans ho to sakta h waha check nhi karta to fail ho jata h )
