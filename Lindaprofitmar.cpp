#include<iostream>
using namespace std;


int main() {

   double totalcst_merch , employee_sal, yeraly_rent ,electricty_cost ;

      cout << "Enter  the total cost of merchandise " << endl ;
       cin >> totalcst_merch ;
   
   cout << " Enter the salary of employees and iclude your own salary " << endl;
      cin >> employee_sal ;


      cout << " Enter your yearly rent " << endl; 
        cin >> yeraly_rent ;

        cout << " Enter the estimated electricity cost " << endl;
         cin >> electricty_cost;
   
           double netwanted = totalcst_merch * 0.1 ;

              double newprofit = netwanted / 0.85;


       
         double mech_Markup = (( totalcst_merch + employee_sal + yeraly_rent + electricty_cost) +(newprofit)) / totalcst_merch ;

         cout << "The amount of the mechandise marked up is" << mech_Markup ;

         return 0;   

}