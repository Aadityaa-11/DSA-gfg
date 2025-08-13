class Solution {
  public:
    string encode(string s) {
        // code here
        int index = 0 ;
        int n = s.size();
        int count = 0; 
        string ans;
        
        int i = 0;
        
        while ( i< n ){
            char currchar = s[i];
            count = 0;
            
            // count occuring of char 
            while(i<n && currchar == s[i]){
                count++;
                i++;
            }
            
            // appending character in string
            ans += currchar;
            
            // putting count in array
            if(count > 0){
                string cntchar = to_string(count);
                for(char ch : cntchar){
                    ans += ch;
                }
            }
            
    
        }
        return ans;
    }
};
