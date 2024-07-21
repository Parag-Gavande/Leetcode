class Solution {
    public int findPermutationDifference(String s, String t) {
        int total=0;
        for(int index1=0; index1<s.length(); index1++){
            char ch=s.charAt(index1);
            int index2=t.indexOf(ch);
            total=total + Math.abs(index1-index2);
        }
        return total;
    }
}