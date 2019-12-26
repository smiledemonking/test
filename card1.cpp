#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
	int a,b,ssr=0,money=0,sr=0,r=0;
	srand(time(NULL));
	cout<<"歡迎使用Fgo抽卡模擬器"<<endl;
	cout<<"請輸入要抽的次數: "; 
	cin>>b;
	while(ssr==0){
		money+=b;
		for(int i=1;i<=b;i++){
			a=rand()%1000;
			if(a<7){
				cout<<"恭喜你抽到SSR"<<endl;
				ssr++;
			}
			if(a>=7&&a<197){
				cout<<"你抽中sr"<<endl;
				sr++;
			}
			if(a>=197){
				cout<<"你抽中r"<<endl;
				r++;
			}
		}
		cout<<"若要繼續請輸入1"<<endl;
		cout<<"若要結束請輸入2"<<endl; 
		cin>>b;
		
		if(b==2)
			break;
		else if(b==1){
			cout<<"請輸入要抽的次數: "; 
			cin>>b;
			continue;
			}
	}
	cout<<"你共抽了"<<money<<"次"<<endl;
	cout<<"抽到了"<<ssr<<"張ssr"<<endl;
	cout<<"抽到了"<<sr<<"張sr"<<endl; 
	cout<<"抽到了"<<r<<"張r"<<endl;  
	cout<<"共花了台幣"<<money*44<<"元";
}
