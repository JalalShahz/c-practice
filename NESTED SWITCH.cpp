#include<iostream>
using namespace std;
int main()
{ 
  int x,y,z;
  cout<<"    WELCOME TO MY RESTEURENT  "<<endl;
  cout<<"    WHAT WOULD YOU LIKE TO EAT "<<endl;
  cout<<"    WE HAVE TWO CATOGARIES "<<endl;
  cout<<"    DESI AND FAST FOOD "<<endl;
  cout<<"    WHICH ONE DO YOU LIKE TO EAT "<<endl;
  cout<<" press 1 for desi food and press 2 for fast food "<<endl;
  cin>>x;
  switch(x)
     
     { case 1:
     	cout<<" IN THIS CATOGARY WE HAVE : "<<endl;
     	cout<<"      daal              (for odering this item press 1)"<<endl;
     	cout<<"      chawal            (press 2)"<<endl;
     	cout<<"   lobya/kalul/kurkhe   (press 3)"<<endl;
     	cout<<"      salaad             (press 4)   "<<endl;
     	cin>>y;
     	
     	switch(y)
     	{   case 1:
     		    cout<<"that is lit daal ever "<<endl;
     		    cout<<" Please swipe down your debit card in EMV "<<endl;
     		    //EMV is machine use to swipe cards for payment and for confirmation camera has focused on customer.
     		    cout<<" Enjoy your food "<<endl;
     		    break;
     		case 2:  
			    cout<<"that is woneder ful we have best pulao "<<endl;
     		    cout<<" Please swipe down your debit card in EMV "<<endl;
     		    cout<<" Enjoy your food "<<endl;
     		    break;
     		case 3:
			 cout<<"that is awsome  you can have taste od dhaba "<<endl;
     		    cout<<" Please swipe down your debit card in EMV "<<endl;
     		    cout<<" Enjoy your food "<<endl;
     		    break;    
     		case 4: 
     		    cout<<"that is lit "<<endl;
     		    cout<<" Please swipe down your debit card in EMV "<<endl;
     		    cout<<" Enjoy your food "<<endl;
     		    break;
     		default :
     			cout<<"we did'nt have that kind of food we are very sorry"<<endl;
     		    
     		
		 }break;
		 
	   case 2:
	 	    cout<<"  IN THIS CATOGARY OF FAST FOOD WE HAVE ..."<<endl;
	 	    cout<<"  BURGER     (press 1 for order)"<<endl;
	 	    cout<<"  pizza      (press 2 )"<<endl;
	 	    cout<<"  rolls      (press 3)"<<endl;
	 	    cout<<"  hot wings  (press 4)"<<endl;
	 	    cin>>z;
	 	    switch(z)
	 	{   case 1:
	 		    cout<<"that is fantastic "<<endl;
     		    cout<<" Please swipe down your debit card in EMV "<<endl;
     		    //EMV is machine use to swipe cards for payment and for confirmation camera has focused on customer.
     		    cout<<" Enjoy your food "<<endl;
     		    break;
     		case 2:
     			cout<<"that is dilishuis "<<endl;
     		    cout<<" Please swipe down your debit card in EMV "<<endl;
     		    //EMV is machine use to swipe cards for payment and for confirmation camera has focused on customer.
     		    cout<<" Enjoy your food "<<endl;
     		    break;
     		case 3:
     			cout<<"that is nice "<<endl;
     		    cout<<" Please swipe down your debit card in EMV "<<endl;
     		    //EMV is machine use to swipe cards for payment and for confirmation camera has focused on customer.
     		    cout<<" Enjoy your food "<<endl;
     		    break;
     		case 4:
     			cout<<"that's spicy' "<<endl;
     		    cout<<" Please swipe down your debit card in EMV "<<endl;
     		    //EMV is machine use to swipe cards for payment and for confirmation camera has focused on customer.
     		    cout<<" Enjoy your food "<<endl;
     		    break;
     		default : 	cout<<"we did'nt have that kind of food we are very sorry"<<endl;
		 }break;
		 default : 
		 cout<<"please enter a valid catogary "<<endl;
	 } 
	  cout<<" thak you for visiting here "<<endl;
	 return 0;
}           
