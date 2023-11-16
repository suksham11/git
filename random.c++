#include<iostream>
using namespace std;

class c1{
    public:
      int val1;

      void indata(int data1){
         val1 = data1;
      }

      void display(){
        cout<< val1<<endl;
      }
     
};

class c2{
      public:
        int val2;

        void indata(int data2){
          val2 = data2;
        }
          
        void display(){
          cout<< val2 <<endl;
        }
};

void swap(c1 & x , c2 & y){
     int temp;
     temp = x.val1;
     x.val1 = y.val2;
     y.val2 = temp;
}

int main(){
   c1 O1 ;
   c2 O2 ;
   O1.indata(21);
   O2.indata(23);
   swap(O1 , O2);
   
   O1.display();
   O2.display();

}

/* thanks for visiting */