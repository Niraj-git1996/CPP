#include<bits/stdc++.h>
using namespace std;


int main()
{
multimap< int, string > mmp { make_pair(2, "stackoverflow"),
make_pair(1, "docs-beta"),
make_pair(89, "tackexchange") };
auto it = mmp.begin();
cout << it->first << " : " << it->second << endl; // Output: "1 : docs-beta"
it++;
cout << it->first << " : " << it->second << endl; // Output: "2 : stackoverflow"
it++;
cout << it->first << " : " << it->second << endl; // Output: "2 : stackexchange"
sort(mmp.begin(),mmp.end());
for(multimap<int,string>::iterator itr=mmp.begin();itr!=mmp.end();++itr)
    cout<<itr->first<<" "<<itr->second<<endl;
return 0;
}






