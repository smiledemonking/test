#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
	int a,b,ssr=0,money=0,sr=0,r=0;
	srand(time(NULL));
	cout<<"�w��ϥ�Fgo��d������"<<endl;
	cout<<"�п�J�n�⪺����: "; 
	cin>>b;
	while(ssr==0){
		money+=b;
		for(int i=1;i<=b;i++){
			a=rand()%1000;
			if(a<7){
				cout<<"���ߧA���SSR"<<endl;
				ssr++;
			}
			if(a>=7&&a<197){
				cout<<"�A�⤤sr"<<endl;
				sr++;
			}
			if(a>=197){
				cout<<"�A�⤤r"<<endl;
				r++;
			}
		}
		cout<<"�Y�n�~��п�J1"<<endl;
		cout<<"�Y�n�����п�J2"<<endl; 
		cin>>b;
		
		if(b==2)
			break;
		else if(b==1){
			cout<<"�п�J�n�⪺����: "; 
			cin>>b;
			continue;
			}
	}
	cout<<"�A�@��F"<<money<<"��"<<endl;
	cout<<"���F"<<ssr<<"�issr"<<endl;
	cout<<"���F"<<sr<<"�isr"<<endl; 
	cout<<"���F"<<r<<"�ir"<<endl;  
	cout<<"�@��F�x��"<<money*44<<"��";
}
