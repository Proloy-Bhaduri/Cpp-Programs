#include<iostream>// A basic example of Friend Function
//#include<cmath>

 using namespace std;
 int abs(int, int);
 class Distance {

              int KM, M;
              public:
    			 friend int call_distance(Distance p, Distance q); // friend function 
              Distance(int a,int b);  // no return type 
 }; //end of class

  Distance::Distance (int a,int b) {//no return type
  	   KM = a;
  	   M = b;
  } // end of member function
   
  int  call_distance(Distance ob1, Distance ob2)// friend function doesn't require scope accessing operator 
    					{
                        int x = abs(ob1.KM - ob2.KM);
                        int y = abs(ob1.M - ob2.M);
                        if(ob1.KM > ob2.KM)

                        cout << " object 1 is "<< x << " KM "<< y << " M . away from object 2 \n" ;  
                         else 
                           cout << "object 2 is "<< x << " KM "<< y << " M . away from object 1 \n" ;
   				     }
   //end of friend function 
   				 /*    auto abs(auto a, auto b) // custom
   				        {
   				        	 if(a>b)
   				        	  return (a-b);
   				        	 else 
   				        	 	return (b-a);
   				        }
*/
   main()
  		{     int km1,km2,m1,m2;
  			 // Distance obj1(km1,m1),obj2(km2,m2);
  			
  			cout << " Enter position of first object \n Note : first input in Km \n\tSecond input in metre\n\n" << endl;
  			cin >> km1 >> m1;
  			Distance obj1(km1,m1);
  			cout << " Enter position of th second object \n" << endl;
  			cin >> km2 >> m2;
              
  		    Distance obj2(km2,m2);	
  		    call_distance(obj1,obj2);// friend function called
  		    cout << "Enter radius of your ring:\n";
  		    int r;
  		    cin >> r;
  		    int R = double (22/7 * (r * r));
  		    cout << "The area of your ring is: " << R << endl;
  		    return 0;       	
  		} // end of main                     				     
