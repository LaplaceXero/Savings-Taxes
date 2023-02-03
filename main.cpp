#include <iostream>
using namespace std;

int main() {
	
	int testCases = 0;
	int x,y;
	
	cin >> testCases;
	
	if((testCases < 1) || (testCases > 100))
	        cout <<"out of bound,value must be in range of 1-100" <<endl;
	        
	else{
	    for(int i = 0; i < testCases; i++)
	    {
	        cin >>x >>y;
	    
    	    if((x < y)  || (x > 100) || (y > 100))
    	        cout <<"error,invalid amounts" <<endl;
	        
    	    else{
    	        cout <<(x - y) <<endl;
    	    }
	    }
	}
	return 0;
}
