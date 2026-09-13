class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int a = gcd(str1.size(),str2.size());
        if(str1+str2 != str2+str1) return "";
        return str1.substr(0,a);
    }
};