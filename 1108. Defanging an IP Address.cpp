#include <bits/stdc++.h>
#include <string>

using namespace std;
class Solution {
public:
    string defangIPaddr(string originalString) {
         string toReplace = ".";
    string replacement = "[.]";

    int pos = 0;
    while ((pos = originalString.find(toReplace, pos))!= string::npos) {
        originalString.replace(pos, toReplace.length(), replacement);
        pos += replacement.length();
    }

    return originalString;
    }
};
int main() {
    string originalString;
    while(cin >> originalString){
    Solution s;
    string str=s.defangIPaddr(originalString);
    cout<<str<<endl;
    }
    return 0;
}
