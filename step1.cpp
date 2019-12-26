#include <iostream>
#include <iomanip>
using namespace std;

void printCurrentPositions( const int * const snapperPtr, const int * const bunnyPtr );
    
int main()
{
    int tortoise = 10; //�Q�t 
    int hare = 20; //�ߤl 
    printCurrentPositions(&tortoise, &hare);
}

/*�L�X�Q�t�P�ߤl��m*/
void printCurrentPositions( const int * const snapperPtr, const int * const bunnyPtr )
{
	for(int i=1;i<=7;i++)
		cout<<"---------|";
	cout<<endl;
	cout<<setw(*bunnyPtr)<<"H"<<endl;
	cout<<setw(*snapperPtr)<<"T"<<endl;
}
