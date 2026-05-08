#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> computeLPS(string pattern) {
    int n = pattern.length();
    vector<int> lps(n, 0);

    int len = 0;
    int i = 1;

    while (i < n) {
        if (pattern[i] == pattern[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }

    return lps;
}

int main() {
    cout << "Try programiz.pro" << endl;

    string s1 = "ababaca";
    vector<int> lps = computeLPS(s1);

    for (int i = 0; i < lps.size(); i++) {
        cout << lps[i] << " ";
    }
    cout << endl;

    return 0;
}

/*
pattern="abab"
index=0 susbstring-a lps=0
index=1 substring=ab lps=0
index=2 substring=aba lps=1
index=3 substring=aba lps=2

lps=[0,0,1,2]

logic - 

two [pointer ]- len=previous ki longest prefix length
i= current index

algorithm - lps[0]=0
agr len=0, i=1 - lps[0]=0
pattern[i]==pattern[length]
it means len++;
lps[i]=len ;
i++

agr len not equal to 0;
len=lps[len-1]
len==0 =lps[i]=0 i++;

pattern="ababaca"
lps[0]=0, len=0, i=1
lps[1]=0, len=0, i=1
lps[2]=1 len=1, i=2
lps[3]=2 len=2, i=3
lps[4]=333333 len=3, i=4

these two questions may be same
*/
