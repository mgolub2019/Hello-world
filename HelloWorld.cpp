#include <cstdlib> 
#include <ctime> 
#include <iostream>
#include <random>
using namespace std;

int main() 
{
	srand (time(NULL));
	bool gotit=false;
	int len=0;
	int total=0;
	int average=0;
	int totel=0;
	string letters[]={"A","a","B","b","C","c","D","d","E","e","F","f","G","g","H","h","I","i","J","j","K","k","L","l","M","m","N","n","O","o","P","p","Q","q","R","r","S","s","T","t","U","u","V","v","W","w","X","x","Y","y","Z","z"," "};
	cout << sizeof(letters)/sizeof(letters[0]) << endl;
	while (!gotit) {
		bool breakn=false;
		while (!breakn) {
			//cout << letters[rand()%(sizeof(letters)/sizeof(letters[0]))];
			len++;
			if (rand()%11==1){
				breakn=true;
			}
		}
		//cout << endl << len << endl << "Did this print Hello World? [y,n]" << endl;
		total=total+1;
		average=average+len;
		if (len==11){
			totel=totel+1;
		}
		if (total>=1000000000){
			cout << average << " out of " << total << " with " << totel << endl;
			gotit=true;
		}
		len=0;
		string i;
		if (i=="y"){
			gotit=true;
		}
	}
}

