#include <iostream>
#include <map>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>
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

       map < string , string > hos_op;

    hos_op["hospital_1"]= "eye opd ear stomach bone skin";
    hos_op["hospital_2"]= "eye opd ear stomach bone dental";
    hos_op["hospital_3"]= "eye opd ear stomach skin nursing";
    hos_op["hospital_4"]= "eye opd ear stomach dental blood";
    hos_op["hospital_5"]= "eye opd ear stomach bone skin";

    vector <int> v1t; v1t.push_back(700); v1t.push_back(2200);
   vector <int>v2t; v2t.push_back(0); v2t.push_back(2359);
   vector <int>v3t; v3t.push_back(430); v3t.push_back(2330);
   vector <int>v4t; v4t.push_back(600); v4t.push_back(450);
   vector <int>v5t; v5t.push_back(2359); v5t.push_back(0);

   vector <int>v1; v1.push_back(5); v1.push_back(6);
   vector <int>v2;v2.push_back(2); v2.push_back(0); v2.push_back(0);
   vector <int>v3; v3.push_back(1); v3.push_back(8);
   vector <int>v4; v4.push_back(7); v4.push_back(3);
   vector <int>v5; v5.push_back(0); v5.push_back(11);
 
 map <int , string > name ;
 name[1]= "hospital_1";name[2]= "hospital_2";name[3]= "hospital_3";name[4]= "hospital_4";name[5]= "hospital_5";
map <int, vector <int> > mass;
   mass[1]=v1;  mass[2]=v2; mass[3]=v3; mass[4]=v4; mass[5]=v5;
 
  vector <int> vel; 
 int rt=1;

    
    for(pair <string, string> prob:hos_op)
    { 
        string word;
        string name = prob.first;
        string available = hos_op[name]; istringstream ooh(available);
        while (ooh>>word)
        {
             if (word == problem)
            {
                 vel.push_back(rt);
            }
        }
        rt++;
    }

 vector <int >  disto;
for (int t = 0; t < vel.size (); t++ )
{
    int u = vel[t] ;
    vector <int> happy =mass[u];
    
    int dx = v[0]-happy[0];
    if(dx<0)
    {
        dx=-dx;
    }
    int dy = v[1]-happy[1];
    if(dy<0)
    {
        dy=-dy;
    }
    int distance = dx*dx+dy*dy;
    disto.push_back(distance);
}
}

int size1=disto.size();
  int a[size1];
  for(int t1=0;t1<size1;t1++)
  {
      a[t1]=disto[t1];
  }
  sort(a, a + size1);
    int minhos=0,x2=0;
  int u2=a[0];
  for(int i1=0;i1<disto.size();i1++)
  {
      if(u2==disto[i1])
      {
          minhos=vel[i1];
          break;
      }
  }
  
  string hos_name;
  for(pair <int, string> prob1:name)
    { 
        
        int word1 = prob1.first;
        
        if(word1==minhos)
        {
            hos_name=prob1.second;
        }
    }
    cout<<"minhos ="<<minhos<<endl;
    
    cout<<"The nearest hospital is "<<hos_name<<endl;
    
  return 0;

}
