// class Solution {
//     public String interpret(String command) {
//         String str=command.replace("()","o");
//         str=str.replace("(al)","al");
//         return str;
//     }
// }

//******OR */

class Solution {
    public String interpret(String command) {
        StringBuilder s=new StringBuilder();
        int n=command.length();
        int i=0;

        while(i<n){
            char ch=command.charAt(i);
            if(ch=='G'){
                s.append('G');
            }else if(ch=='('){
                if(command.charAt(i+1)==')'){
                    s.append("o");
                    i++;
                }
                else{
                    s.append("al");
                    i=i+3;
                }
            }
            i++;
        }
        return s.toString();
    }
}