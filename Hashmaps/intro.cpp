#include<bits/stdc++.h>
using namespace std;

int main()
{
    //creation
    unordered_map<string,int>m;

    //insertion: 3 ways

    //1
    pair<string,int>p=make_pair("sakshi",1);
    m.insert(p);

    //2
    pair<string,int>pair2("honey",2);
    m.insert(pair2);

    //3
    m["pratima"]=3;
    m["vikas"]=4;

    m.erase("sakshi");

    //search
    cout<< m["sakshi"]<<endl;
    cout<< m.at("pratima")<<endl;
    
    //iterator
    unordered_map<string,int>:: iterator it=m.begin();
    while(it!=m.end()){
      cout<<it->first<<" "<<it->second<<endl;  
      it++;
    }


 return 0;
}   