#include<iostream>
using namespace std;
class student
{
  private:
          int rollno;
          char name[10];

  public:
         void getdata()
         {
            cout<<"enter your roll no :";
            cin>>rollno;
            cout<<"enter your name :";
            cin>>name;
         }

         void dispdata()
         {
            cout<<"YOUR ROLL NO IS:"<<rollno<<endl;
            cout<<"YOUR NAME IS:"<<name<<endl;
         }
};

int main()
{   student s1;
    cout<<"---ENTER YOUR DATA---\n";
    s1.getdata();
    cout<<"\n---THIS IS YOUR DATA---\n";
    s1.dispdata();
    return 0;
} 