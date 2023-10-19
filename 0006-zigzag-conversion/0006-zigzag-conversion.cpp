class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows==1) return s;

       vector<string>zigzag(numRows);
       int i=0 ,row=0;
       bool direction=1;
       while(true){
           if(direction){
               while(i<s.size() && row<numRows){
                   zigzag[row++].push_back(s[i++]);
               }
               row= numRows -2;
           }
           else{
               while(i<s.size() && row>=0){
                   zigzag[row--].push_back(s[i++]);
               }
               row=1;
           }
           if(i>=s.size()) break;
           direction = ! direction;
       }
       string ans="";
       for (i=0;i<zigzag.size();i++){
           ans+=zigzag[i];
           cout<<zigzag[i]<<endl;
       }
       return ans;
    }
};