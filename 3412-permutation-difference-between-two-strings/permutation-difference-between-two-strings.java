// class Solution {
//     public int findPermutationDifference(String s, String t) {
//         int total=0;
//         for(int index1=0; index1<s.length(); index1++){
//             char ch=s.charAt(index1);
//             int index2=t.indexOf(ch);
//             total=total + Math.abs(index1-index2);
//         }
//         return total;
//     }
// }


//Using HashMap 
class Solution {
    public int findPermutationDifference(String s, String t) {
        Map<Character, Integer>mp=new HashMap();
        int total=0;
        for(int i=0; i<s.length();i++){
            mp.put(s.charAt(i), i);
        }

        for(int i=0;i<t.length();i++){
            total += Math.abs(mp.get(t.charAt(i)) - i);
        }

       return total;
    }
}