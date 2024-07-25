class Solution {
    public String longestCommonPrefix(String[] strs) {
        if(strs==null || strs.length==0) return "";

        String str0=strs[0];
        String ans="";
        for(int i=0;i<str0.length();i++){
            for(int j=1;j<strs.length;j++){
                if(i >= strs[j].length() || strs[j].charAt(i) != str0.charAt(i)){
                    return ans;
                } 
            }
            ans=ans+str0.charAt(i);
        }
        return ans;
    }
}