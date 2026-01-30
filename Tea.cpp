#include <iostream>
#include <string>
using namespace std;
class Tea{
	protected:
		string TeaType,Rating;
		int TeaPrice;
	public:
		Tea(string t,int p,string r){
			TeaType = t;
			Rating = r;
			TeaPrice = p;
		} 
		void display(){
			cout <<"Tea Type is "<<TeaType<<" Price is "<<TeaPrice << " Rating is "<<Rating <<endl;
		}
		void SetData(string t,int p,string r){
			TeaType = t;
			Rating = r;
			TeaPrice = p;
		} 
};
struct tea {
	string eatype,rating;
	int prices;
};
int main(){

	//arrays
	string teatype[2] = {"lemon tea","garlic tea"};
	float prices[2] = {1200,1250};
	string rating[2] ={"***","****"};
	cout << "\n ARRAYS:\Ntype 1 tea: "<<teatype[0]<<"price is: "<<prices[0]<<"rating is: "<<rating[0]<<endl;
	cout << "type 2 tea: "<<teatype[1]<<"price is: "<<prices[1]<<"rating is: \n"<<rating[1]<<endl;
	
//using manual program
string Tea1_type = "Leman Tea",rating1 = "****",Tea2_type = "Garlic Tea",rating2= "***";
	int price1 = 1200,price2 = 1250;
	cout << "\n NORMAL:\nTea Type is "<<Tea1_type<< " Price is "<<price1 <<" Rating is " << rating1<< endl;
	cout << "Tea Type is "<<Tea2_type<< " Price is "<<price2 <<" Rating is \n" << rating2<< endl;
	
	//oop
	Tea t1 ={"Lemon Tea",1200,"***"},t2 ={"Garlic Tea",1250,"****"};
	t1.display();
	t2.display();
	//struct
	tea te1 ={"Lemon Tea","***",1200},te2 ={"Garlic Tea","****",1250};
	cout<<"\n STRUCTURE: \NTea is "<<te1.eatype <<" Price is "<<te1.prices <<" Rating is "<<te1.rating<<endl;
	cout<<"Tea is "<<te2.eatype <<" Price is "<<te2.prices <<" Rating is \n"<<te2.rating<<endl;
	return 0;	
}
