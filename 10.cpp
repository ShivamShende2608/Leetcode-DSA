#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter month: ";
    getline(cin, input);  // user input as string

   int month;
   try{
       month=stoi(input);
   }catch(...){
       cout<<"Invalid Month Entered"<<endl;
       return 0;
   }
   
   if(month<1 || month >12){
       cout<<"Invalid Month Entered"<<endl;
   }else if(month >=3 && month<=5){
       cout<<"Season : Spring"<<endl;
   }else if(month >=6 && month <=8){
       cout<<"Season : Summer"<<endl;
     
   }else if(month >=9 && month<=11){
       cout<<"Season : Autumn"<<endl;
   }else{
       cout<<"Season: Winter"<<endl;
   }
   
   

    return 0;
}
