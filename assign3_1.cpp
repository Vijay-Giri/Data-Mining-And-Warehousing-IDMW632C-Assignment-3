#include <bits/stdc++.h>
using namespace std;
map<string,int>Count[2][100];
map<string,int>::iterator it1,it2;


void print_map(int m){
   
for(int i=0;i<2;i++){
    for(int j=0;j<m;j++){
        for(it1=Count[i][j].begin();it1!=Count[i][j].end();++it1){
            cout<<it1->first<<" "<<it1->second<<endl;
        }
    }
}


}
int main()
{
    int n,m;
    int yes=0,no=0;
    cin>>m>>n;

for(int i=0;i<n;i++){
vector<string>features;
//cout<<endl;
for(int j=0;j<m;j++){string feature;
cin>>feature;
//cout<<feature<<" ";
features.push_back(feature);
}
for(int k=0;k<2;k++)
{
for(int j=0;j<m;j++){
    if(Count[k][j].find(features[j])==Count[k][j].end())
       Count[k][j][features[j]]=0;

}
}
if(features[m-1]=="T"){
  //  cout<<"hello "<<features[m-2]<<"\n";
for(int j=0;j<m;j++){
Count[1][j][features[j]]++;
}
yes++;
}
else{
   // cout<<"bye "<<features[m-2]<<"\n";
no++;
for(int j=0;j<m;j++){
Count[0][j][features[j]]++;
}

}
}
//cout<<yes<<" "<<no<<"#\n";
double pr1=1.0;
double pr2=1.0;
string in;

for(int i=0;i<m-1;i++){
int yes_count=0;
int no_count=0;
cin>>in;
it1=Count[0][i].find(in);
it2=Count[1][i].find(in);
if(it1!=Count[0][i].end())
 no_count=it1->second;
if(it2!=Count[1][i].end())
yes_count=it2->second;
if(no_count==0)
{
    no_count++;
}
if(yes_count==0)
yes_count++;
pr1*=(double)no_count/no;
pr2*=(double)yes_count/yes;
cout<<it1->first<<" "<<it1->second<<" ";
cout<<" "<<it2->second<<endl;
}
//cout<<pr//1<<" "<<pr2<<endl;
cout<<pr2*yes/(yes+no)<<" "<<pr1*no/(no+yes)<<endl;
cout<<"Yes:"<<pr2*yes/(pr1*no+pr2*yes)<<endl;
cout<<"No:"<<pr1*no/(pr1*no+pr2*yes)<<endl;
//cout<<"Yes:"<<pr2/(pr1+pr2)<<endl;
//cout<<"No :"<<pr1/(pr1+pr2)<<endl;
/*
11 12
T   F   F   T   Some    $$$ F   T   French  0to10   T
T   F   F   T   Full    $   F   F   Thai    30to60  F
F   T   F   F   Some    $   F   F   Burger  0to10   T
T   F   T   T   Full    $   F   F   Thai    10to30  T
T   F   T   F   Full    $$$ F   T   French  >60 F
F   T   F   T   Some    $$  T   T   Italian 0to10   T
F   T   F   F   None    $   T   F   Burger  0to10   F
F   F   F   T   Some    $$  T   T   Thai    0to10   T
F   T   T   F   Full    $   T   F   Burger  >60 F
T   T   T   T   Full    $$$ F   T   Italian 10to30  F
F   F   F   F   None    $   F   F   Thai    0to10   F
T   T   T   T   Full    $   F   F   Burger  30to60  T
T T F T Some $$$ T T Italian >60

*/


    return 0;
}


	
	
	

