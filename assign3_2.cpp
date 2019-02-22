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
for(int j=0;j<m;j++){string feature;
cin>>feature;
features.push_back(feature);
}
if(features[m-1]=="Yes"){
for(int j=0;j<m;j++){
Count[1][j][features[j]]++;
}
yes++;
}
else{
no++;
for(int j=0;j<m;j++){
Count[0][j][features[j]]++;
}

}
}

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
pr1*=(double)no_count/no;
pr2*=(double)yes_count/yes;
//cout<<it1->second<<" "<<it2->second<<endl;
}
//cout<<pr//1<<" "<<pr2<<endl;
cout<<pr2*yes/(yes+no)<<" "<<pr1*no/(no+yes)<<endl;
cout<<"Yes:"<<pr2*yes/(pr1*no+pr2*yes)<<endl;
cout<<"No:"<<pr1*no/(pr1*no+pr2*yes)<<endl;
//cout<<"Yes:"<<pr2/(pr1+pr2)<<endl;
//cout<<"No :"<<pr1/(pr1+pr2)<<endl;
/*
5 14
<=30 High No Fair No
 <=30 High No Excellent No
 3140 High No Fair Yes
 >40 Medium No Fair Yes
 >40 Low Yes Fair Yes
 >40 Low Yes Excellent No
 3140 Low Yes Excellent Yes
 <=30 Medium No Fair No
 <=30 Low Yes Fair Yes
 >40 Medium Yes Fair Yes
 <=30 Medium Yes Excellent Yes
3140 Medium No Excellent Yes
 3140 High Yes Fair Yes
 >40 Medium No Excellent No
<=30 Medium Yes Fair

*/


    return 0;
}


	
	
	

