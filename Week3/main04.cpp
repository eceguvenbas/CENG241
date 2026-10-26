#include <iostream>
using namespace std;

class Rectangle {         			
		private : int width, length; 
              
		public :			
            Rectangle(int w,int l){
			width=w;
			length=l;
	}

	int area( )	
	{    return length*width;  }

};
	
    int main ( ) {
	       Rectangle r(5,3); 		 		
	       cout << r.area( );
           
           return 0;
	
        } //constructor kullanarak
