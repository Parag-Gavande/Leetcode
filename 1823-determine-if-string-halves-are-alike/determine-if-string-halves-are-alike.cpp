class Solution {
public:

    bool halvesAreAlike(string s) {
        int n = s.length();
        string a = s.substr(0, n/2);
        string b = s.substr(n/2);

        int count1 = 0;
        int count2 = 0;

        for (int i = 0; i < a.length(); i++) {
            if (isVowel(a[i])) {
                count1++;
            }
        }

        for (int i = 0; i < b.length(); i++) {
            if (isVowel(b[i])) {
                count2++;
            }
        }
        return count1 == count2;
    }

    bool isVowel(char c) {
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U';
    }
};


//---------------------OR-------------------------

/*
class Solution {
public:

     bool isVowel(char c) {
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U';
    }

    bool halvesAreAlike(string s) {
        int n = s.length();
        int mid=n/2;
        int i=0;
        int j=mid;

        int countL = 0;
        int countR = 0;

        while(i<n/2 && j<n){
            if(isVowel(s[i])) countL++;
            if(isVowel(s[j])) countR++;
            i++;
            j++;
        }
        return countL==countR;
    }
};
*/
