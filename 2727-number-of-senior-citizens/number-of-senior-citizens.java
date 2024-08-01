class Solution {
    public int countSeniors(String[] details) {
        
        int count=0;
        for(int i=0; i<details.length; i++){
            String detail=details[i];
            if((detail.charAt(11)=='6' && detail.charAt(12)!='0') || detail.charAt(11)>'6'){
                count++;
            }
        }
        return count;
    }
}