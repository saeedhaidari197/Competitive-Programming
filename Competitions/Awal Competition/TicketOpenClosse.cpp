#include <bits/stdc++.h>
using namespace std;

vector<string> braces(vector <string> values){
	vector <string> ans;
	for(int i=0; i<values.size(); i++){
		if(values[i].size()%2 == 1){
			ans.push_back("NO");	
			continue;
		} 
		for(int j=0; j<values[i].size(); j++){
			while(values[i][j] == '(' || values[i][j] == '[' || values[i][j] == '{'){
				j++;
			}
			if(values[i][j] == ')' && values[i][j-1] == '('){
				values[i].erase(values[i].begin()+j);
				values[i].erase(values[i].begin()+ (j-1));
				j -= 2;
			}
			else if(values[i][j] == ']' && values[i][j-1] == '['){
				values[i].erase(values[i].begin()+j);
				values[i].erase(values[i].begin()+ (j-1));
				j -=2;
			}
			else if(values[i][j] == '}' && values[i][j-1] == '{'){
				values[i].erase(values[i].begin()+j);
				values[i].erase(values[i].begin()+ (j-1));
				j -= 2;
			}
			else{
				ans.push_back("NO");
				break;
			}
		}
		if(values[i].size()== 0) ans.push_back("YES"); 
	}
	return ans;
}

main(){
	vector <string> val;
	val.push_back("}][}}(}][))]");
	val.push_back("[](){()}");
	val.push_back("()");
	val.push_back("({}([][]))[]()");
	val.push_back("{)[](}}}]}))}(())(");
	val.push_back("([[)");
	vector <string> ans = braces(val);
	for(int i=0; i<ans.size(); i++){
		cout<<ans[i]<<"\n";
	}
	
		
}