#include <map> 
#include <iostream> 
using namespace std; 
   
int main() 
{ 
	map<int, string> m{ {1, "One"}, {2, "Two"}, {3, "Three"} };
	
	for(auto m : m)
	{
	    cout<<m.second<<"-"<<m.first<<endl;
	}
  
	return 0;
}
