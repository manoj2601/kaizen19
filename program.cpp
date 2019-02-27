#include <iostream>
#include <map>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

int main()
{   vector <int> v;
    cout << "type your coordinates to know about the nearest hospital" << endl;
    for ( int i = 0; i<2 ; i ++)
    {
        int j;
        cin>> j;
        v.push_back(j);
    }
     cout << "please specify your preferred time of visit? please use 24 hour system to overcome any confusion." <<endl<< " example : " <<endl<< "5: 30 am is written as 530"
     <<endl<< " 5: 30 pm is written as 1730"<<  endl;


     int n ;
     cin >>n; cout << endl;

     cout << "please mention the problem you are facing? please here refer general issue like fever and body pain as opd and other specific issue by simply naming the body part"<<endl;
     string problem ;
     cin >>problem;
