class Solution {
    public int balancedStringSplit(String s) {
        int count=0;
        int total_count=0;

        for(int i=0;i<s.length();i++){
            if(s.charAt(i) =='R') count++;
            if(s.charAt(i) =='L') count--;
            if(count==0) total_count++;
        }
        return total_count;
    }
}