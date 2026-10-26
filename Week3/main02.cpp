#include <iostream>
using namespace std;

class One{       
private:	
	 int x; 
 public :
	void print() { cout << x << endl; }	

void getx(int value){
	x=value;
	}
 }; 

int main ( ) {
      One obj;    
	  obj.getx(5);
      obj.print( ) ;

      return 0;

    }			
