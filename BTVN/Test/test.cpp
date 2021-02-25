#include <bits/stdc++.h> 
using namespace std;
main()
{
    string s;
    getline(cin,s);
    vector<string> words;
    map<string, int> m;
    s= " " + s + " ";
    int start=0;
    for(int i=1;i <s.length()-1;i++)
    {
        if(s[i] !=' '&&s[i-1]==' ')
        {
            start = i;
        }
        if(s[i]!=' '&&s[i+1]==' ')
        {
            string word = s.substr(start, i-start+1);
            words.push_back(word);
            if(m.find(word) == m.end()){
                m.insert(pair<string, int>(word, 1));
            }else{
                m[word]++;
            }
        }
    }
    for(map<string, int>::iterator it = m.begin(); it !=m.end();it++){
        cout<<it->first<<" : "<<it->second<<endl;
    }
}