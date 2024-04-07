
#include<bits/stdc++.h>
using namespace std;
  
//int countFreq(string &pat, string &txt)
//{
//    int M = pat.length();
//    int N = txt.length();
//    int res = 0;
//
//    for (int i = 0; i <= N - M; i++)
//    {
//        int j;
//        for (j = 0; j < M; j++)
//            if (txt[i+j] != pat[j])
//                break;
//  
//        if (j == M) 
//        {
//           res++;
//           j = 0;
//        }
//    }
//    return res;
//}

	int countFreq(string &pat, string &txt)
{
	// pat is substring
	// txt is string
   int occurrences = 0;
   std::string::size_type pos = 0;
   while ((pos = txt.find(pat, pos )) != std::string::npos) {
          ++ occurrences;
          pos += pat.length();
   }
   return occurrences;

}


int main()
{
	int n; cin>> n;
	int q; cin>>q;
	string s; cin>>s;
	string abc = "abc";
	int count = countFreq(abc,s);
	while(q--){
		int pos; cin>>pos;
		char c; cin>>c;
		if(s[pos-1] == c) cout<<count<<"\n";
		else{
			if(s[pos-1] == 'b' && s[pos-2] == 'a' && s[pos] == 'c') count--;
			else if(s[pos-1] == 'a' && s[pos] == 'b' && s[pos+1] == 'c' ) count--;
			else if(s[pos-1] == 'c' && s[pos-2] == 'b' && s[pos-3] == 'a' ) count--;
			s[pos-1] = c;
			if(s[pos-1] == 'b' && s[pos-2] == 'a' && s[pos] == 'c') count++;
			else if(s[pos-1] == 'a' && s[pos] == 'b' && s[pos+1] == 'c' ) count++;
			else if(s[pos-1] == 'c' && s[pos-2] == 'b' && s[pos-3] == 'a' ) count++;
			cout<<count<<"\n";
		}
	}
   return 0;
}