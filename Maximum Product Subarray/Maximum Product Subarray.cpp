class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        // code here
        int n = arr.size();
        int maxproduct = INT_MIN;
        
        // for(int i = 0 ; i<n ; i++){
        //     int product =1; 
        //     for(int j = i ; j<n ; j++){
        //         product *= arr[j];
        //         if(product > maxproduct){
        //             maxproduct = product;
        //         }
                
        //     }
        // }
        // return maxproduct;
        
        // the above solution give TLE
        
        // -------------------------------------
        
        // the solution using product form left and right so that each 
        // if odd no of negative element present then we can neglect one form last or start 
        
        int productfromleft = 1;
        
        int productfromright = 1;
        
        for(int index = 0 ; index<n ; index++){
            if(productfromleft == 0) {
                productfromleft = 1;
            }
            if(productfromright == 0){
                 productfromright =1;
            }
            
            productfromleft *= arr[index];
            
            int j = n -index -1;
            productfromright *= arr[j];
             maxproduct = max( maxproduct , max( productfromright , productfromleft  ) );
        }
        return maxproduct;
        
    }
};
