#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  int b;
  string p,x;
  cout<<" Welcome to BAZ Air Line "<<endl;
  cout<<" your good name"<<endl;
  cin>>x;
  cout<<" Where do you want to go from PAKISTAN "<<endl;
  cout<<" our Air line have following access"<<endl;
  cout<<" germany   (for ticket press 1)"<<endl;
  cout<<" france    (press 2)"<<endl;
  cout<<" UAE       (press 3) "<<endl;
  cin>>b;
    
    switch(b)
       {   
       case 1:
        	cout<<"This flight will arrive at berlin "<<endl;
        	cout<<" We have 3 classes in plane "<<endl;
        	cout<<" private "<<endl;
        	cout<<" business "<<endl;
        	cout<<" economy "<<endl;
       	    cout<<"Which one do you prefer "<<endl;
          cout<<" All payment shuold be done online on our website BAZairline.com"<<endl;
        	cin>>p;
       	
       	if(p=="private")
       	   
       	  cout<<"thank you  "<<endl;
       	else if(p=="business")
       	   
       	  cout<<"thank you  and have a safe journey"<<endl;
       	else if(p=="economy")
       	   
       	  cout<<"thank you  and have a safe journey"<<endl;
       	 break;
        case 2:
        		cout<<"This flight will arrive at Rennes "<<endl;
            	cout<<" We have 3 classes in plane "<<endl;
            	cout<<" private "<<endl;
            	cout<<" business "<<endl;
            	cout<<" economy "<<endl;
             	cout<<"Which one do you prefer "<<endl;
            	cin>>p;
             	cout<<" All payment shuold be done online on our website BAZairline.com"<<endl;
       	if(p=="private")
       	   
       	  cout<<"thank you  "<<endl;
       	else if(p=="business")
       	   
       	  cout<<"thank you  and have a safe journey"<<endl;
       	else if(p=="economy")
       	   
       	  cout<<"thank you  and have a safe journey"<<endl;
       	break;
       	case 3:
       		cout<<"This flight will arrive at Al-Ain "<<endl;
       	cout<<" We have 3 classes in plane "<<endl;
       	cout<<" private "<<endl;
       	cout<<" business "<<endl;
       	cout<<" economy "<<endl;
       	cout<<"Which one do you prefer "<<endl;
       	cin>>p;
       	cout<<" All payment shuold be done online on our website BAZairline.com"<<endl;
       	if(p=="private")
       	   
       	  cout<<"thank you  "<<endl;
       	else if(p=="business")
       	   
       	  cout<<"thank you  and have a safe journey"<<endl;
       	else if(p=="economy")
       	   
       	  cout<<"thank you  and have a safe journey"<<endl;
       	  break;
       	default : cout<<" our plane can't arrive at this place"<<endl;
       	
	}//i can add also the time of departure and arrival
	//but it will be more complicated n i m not at that level
	cout<<" Name    : "<<x<<endl;
	
	cout<<" payment :  Pending (confirming)"<<endl;
	return 0;
}
