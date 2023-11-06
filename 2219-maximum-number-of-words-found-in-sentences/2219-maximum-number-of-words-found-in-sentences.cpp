class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
        int m = INT_MIN;
        for(int i=0;i<n;i++){
             int count = 0;
            for(int j=0;j<sentences[i].size();j++){
                if(sentences[i][j] == ' '){
                    count++;
                }
            }
            if(count+1 > m) m = count+1;
        }
        return m;
    }
};