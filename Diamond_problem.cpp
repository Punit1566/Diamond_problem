/*
  <----------------------Diamond Problem-------------------------->

                            Person         -
                            /   \           |
                           /     \          |
                      Teacher  Researcher   |  ( Multiple + Hirerarichal) Inheritence  
                           \     /          |
                            \   /           |
                          Professor        -

*/
#include <iostream>
#include<string>
using namespace std;

class person{
public: 
  void walking(){
    cout<<"Walking....."<<endl;
  }
};
class Teacher:virtual public person{
  public:
    void bore(){
      cout<<"Bore"<<endl;
    }
};
class Researcher:virtual public person{
  public:
    void Research(){
      cout<<"Research"<<endl;
    }
};
class Professor: public Teacher, public Researcher{
  public:
    void no_papers(){
      cout<<"Number of papers"<<endl;
    }
};

int main() {
  Professor p;
  //p.walking();  
  /*   can't access walking because compiler doesn't know that we are asking Teacher's walking       
       property or Researcher's walking property.

      Solution 1: Use scope resolution

                  Specify whether it's Researcher's walk or Teacher's walk.
                  How to specify?
                    p.Teacher::walking();
                    p.Reseaecher::walking();

      Solution 2: Use Virtual Keyword

                  Inherit Teacher and Researcher Virtually -> dono walk() ki kewal one copy hi share karenge
                                                              there won't be any T-walk and R-walk anymore but
                                                              instead of this there will be only one walk.
                  Virtual ke help se walk ki same copy la skte hai.



  */ 

  p.walking();//just because we have used virtual keyword
  
 
  return 0;
}