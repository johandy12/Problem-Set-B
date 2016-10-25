#include <iostream>
#include <string>

using namespace std;

class Barbeque {
 private :
  string myBrand;
  string myModel;
  
 public :
  Barbeque(string brand, string model);
  void loadCoals();
  void light();
  void cook();
  void reset();
  
  bool hasCoals();
  bool isLit();
  bool isCooking();
};

Barbeque::Barbeque(string brand, string model){
 this->myBrand = brand;
 this->myModel = model;
}

bool Barbeque::hasCoals(){
}

bool Barbeque::isLit(){
}

void Barbeque::loadCoals(){
 cout << "Loading " << myBrand << " " << myModel << " with coals!" << endl;
}

void Barbeque::light(){
 	if (Berbeque::hasCoals){
	cout << "Lightning the grill!" << endl;
 	}
	else cout << "Lightning the grill!" << endl << 
	"You can't light this " << myBrand << " " << myModel << " until you load it with coals!" << endl;
}

void Barbeque::cook(){
cout << "Cooking Food!" << endl;
}

void Barbeque::reset(){
}

int main(){
 Barbeque bbq("Coleman", "Grill 101A");
 bbq.loadCoals();
 if (bbq.hasCoals()){
 	bbq.light();
 }
 if (bbq.isLit()){
 	bbq.cook();
 }
 bbq.reset();
 cout << endl << "Let's make some errors..." << endl;
 bbq.light();    // print error
 bbq.cook();    // print error 
 cout << endl;   
 bbq.loadCoals();  // print output
 bbq.cook();       // print error

 return 0;
}
