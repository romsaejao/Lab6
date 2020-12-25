#include <iostream>
using namespace std;

char before(char x)
{
    string y= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    if( x == 'A')
    {
        return 'Z';
    }
    int i = 0;
    while ( i < 26 )
    {
        
        
    
    if( y[i]== x)
    {
        return y[i-1];
    }
      i++;
      
    }
    return '0';
  




}


int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
