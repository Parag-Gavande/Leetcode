
// Approach 1: Time complexity O(nlog(n))
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int n= arr.size();
        sort(begin(arr),end(arr));   // inbuilt sort function takes nlog(n) time complexity 
        int d= arr[1]-arr[0];

        for(int i=2; i<n; i++){      // this loop takes O(n) time complexity 
            if(arr[i]-arr[i-1] != d){
                return false;
            }
        }
        return true;
    }                                           //total time complexity is O(nlog(n))+O(n)
};                                              // i.e O(nlog(n))




/*
//Approach 2: Time Complexity O(n)
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int n= arr.size();
        unordered_set<int> st(begin(arr),end(arr));   //but it uses extra space of O(n) from convert arr to unordered-set
        int min_el= *min_element(begin(arr),end(arr));
        int max_el= *max_element(begin(arr),end(arr));

        if((max_el-min_el)%(n-1) !=0){    // i.e for finding common distance(d) if this d is floating point number then it return false  
            return false;
        }

        int d=(max_el-min_el)/(n-1);  // this is a common distance between two consecative terms of AP

        
        // a , a+d , a+2d, ..........., a+(n-1)*d ..............[AP]
           
        int i=0;
        while(i<n){   //this loop is for to check is every number of a sequence are present in a set  

            int num= min_el + i*d;
            if(st.find(num) == st.end()){  //if the any number of a sequence in not in a set then it return false 
                return false;
            }

            i++;
        }
        return true;
    }                                           
};                                             
*/