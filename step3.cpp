#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

const int RACE_END = 70;

void printCurrentPositions( const int * const snapperPtr, const int * const bunnyPtr );
void moveTortoise( int *const );
void moveHare( int * const );

int main()
{
    int tortoise=1;
    int hare = 1;
    clock_t start,end;
    srand( time( 0 ) );
    start=clock();
    while ( tortoise != RACE_END && hare != RACE_END ) 
   {
      Sleep( 100 );
      system("cls");
	      
      moveTortoise( &tortoise );
      moveHare(&hare);
      printCurrentPositions( &tortoise, &hare );
      
   }
   end=clock();
   (tortoise == RACE_END)?cout<<"TOETOISE WINS!!! YAY!!!"<<endl:cout<<"Hares wins.  Yuch."<<endl;
   cout<<"TIME ELAPSED = "<<(end-start)/1000<<" seconds";
}

/*印出烏龜與兔子位置*/
void printCurrentPositions( const int * const snapperPtr, const int * const bunnyPtr )
{
for(int i=1;i<=7;i++)
		cout<<"---------|";
	cout<<endl;
	cout<<setw(*bunnyPtr)<<"H"<<endl;
	cout<<setw(*snapperPtr)<<"T"<<endl;
}

/*移動烏龜*/
void moveTortoise( int * const turtlePtr )
{
int a;
	a=rand()%10;
	if(a<5)
		*turtlePtr+=3;
	else if(a<7)
		*turtlePtr-=6;
	else if(a<10)
		*turtlePtr+=1;
	if(*turtlePtr<1)
		*turtlePtr=1;
	if(*turtlePtr>70)
		*turtlePtr=70;
}

/*移動兔子*/
void moveHare( int * const rabbitPtr )
{
  int a;
	a=rand()%10;
	if(a<2)
		*rabbitPtr=*rabbitPtr;
	else if(a<4)
		*rabbitPtr+=9;
	else if(a<5)
		*rabbitPtr-=12;
	else if(a<8)
		*rabbitPtr+=1;
	else if(a<10)
		*rabbitPtr-=2;
	if(*rabbitPtr<1)
		*rabbitPtr=1;
	if(*rabbitPtr>70)
		*rabbitPtr=70;
}
