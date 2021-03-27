#include <bits/stdc++.h> 
#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
using namespace std;

void no_of_unique_elements(vector<int> &v){
	//vector<int>::iterator_ ip;
	int count;
    sort(v.begin(), v.end());
    // Using std::unique and std::distance to count
    // unique elements in a container
    auto x=unique(v.begin(), v.end());
    cout << "Total no. of unique elements = " <<*x<<"\n";
    count=*x;
    //count = distance(v.begin(),unique(v.begin(), v.end())); //
    //Display the unique no.
  //  v.resize(count); //prevent from unwanted value
   // for (int i = 0; i<count; ++i) {
     //  cout<<v[i];}
        //cout << *ip << " ";}
    // Displaying the value of count
   // cout << "Total no. of unique elements = " << count;
  
}

int main()
{	
	int n;
	cin>>n;
    vector<int> v(n);
  	for(int i=0;i<v.size();i++)
  		cin>>v[i];

    no_of_unique_elements(v);
    
}