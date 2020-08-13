#include<bits/stdc++.h>
using namespace std;
class Car{
private:
	int costPrice = 90;

public:	
	//Data members
	int price;
	int model_no;
	string name;
	//Constructor for c
	Car(){
		cout<<"Inside Car Constructor"<<endl;
	}
	//Parametrized Constructor for object d;
	Car(int p,int m,string n){
		price = p;
		model_no = m;
		name = n;
	}
	//Another Constructor
	Car(int p){
		price = p;
	}

	//Copy constructor
	Car(Car &d){
		cout<<"Inside Copy Constructor"<<endl;
		price = d.price;
		model_no = d.model_no;
		name = d.name;
	}

	//Copy Assignment Operator
	void operator =(Car &X){
		cout<<"Inside Copy Assignment operator"<<endl;
	}

    //Functions
	void print_carDetails(){
		cout<<"Car Name is "<<name<<endl;
		cout<<"Model No. is "<<model_no<<endl;
		cout<<"Price is "<<price<<endl;
	}

	float get_discounted_price(float x){
		return price*(1.0 - x);
	}

	//Destructor
	~Car(){
		cout<<"Inside Destructor"<<endl;
	}
};

int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    //Create an Object of type Car
    //Static object
    Car c; //make a call to the constructor function present inside the class
    Car d(120,109,"Audi");
    d.print_carDetails();

    //Copy Constructor
    Car e(d); //make a call to copy constructor
    e.price = 1000;
    e.print_carDetails();

    Car f;
    f = d;//Copy Assignment Operator

    //Dynamically created object
    Car *g = new Car(10,101,"Ferrari");
    (*g).print_carDetails(); // or g->print_carDetails();

    delete g;

    cout<<sizeof(c)<<endl;
    //Access/modify the data members of the Car
    c.price = 100;
    c.model_no = 111;
    c.name = "BMW";
    cout<<c.price<<endl;
    cout<<"Model No. is "<<c.model_no<<endl;
    cout<<"Name is "<<c.name<<endl;
    //Creating Functions for class
    // cout<<"Enter the discount you want to give"<<endl;
    float discount;
    cin>>discount;
    // cout<<c.get_discounted_price(discount)<<endl;
    c.print_carDetails();

    return 0;
}