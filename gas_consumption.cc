/**
 *   @file: gas_consumption.cc
 * @author: Cayden Anthony
 *   @date: September 10, 2024
 *  @brief: The purpose of this program is to give the details of any roadtrip
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <iomanip>
using namespace std;

///Constants and function prototypes
    const double citygas = 22.5;

    const double hwygas = 29.5;
int main(int argc, char const *argv[]) {
    double citymiles = 0;
    double highwaymiles = 0; // initializing mileage variables
    double ttlmiles =0;
    double citygallons = 0;
    double highwaygas =0;
// proposition user for info 
cout << "Enter the number of miles driven in town: ";
cin >> citymiles;
            
            // catch statement 
if(citymiles < 0){
    cout << "--------------- Gas consumption -------------------" << endl;
    cout << "Error: number of miles driven in town cannot be negative" << endl;
   cout << "---------------------------------------------------" << endl;
    return 0; }
else{}

 
cout << "How many miles were driven on the highway? " << endl;
    cin >> highwaymiles;
// catch statement 
if(highwaymiles < 0){
cout << "--------------- Gas consumption -------------------" << endl;
cout << "Error: number of miles driven in town cannot be negative" << endl;
cout << "---------------------------------------------------" << endl;



                return 0; }
 else{  }




// calculation and output

// initializing a new set of inputs 
ttlmiles = citymiles + highwaymiles;
citygallons = citymiles/ citygas;
highwaygas = highwaymiles / hwygas;
double ttlgal = highwaygas + citygallons;

//fixing decimal place 
cout << fixed << setprecision(1);


//catch statement 
if(ttlmiles != 0){
    cout << "--------------- Gas consumption -------------------" << endl;
  cout << "The number of miles driven in town: " << citymiles << " miles" << endl;
cout << "The gas consumption for town driving: " << citygallons << " gallons" << endl;
  cout << "The number of miles driven on the highway: " << highwaymiles << " miles"<< endl;
  cout <<"The gas consumption for highway driving: " << highwaygas << " gallons" << endl;
  cout << "The total miles driven: " << ttlmiles << " miles" << endl;
  cout << "The total gas consumption: " << highwaygas + citygallons << " gallons" << endl;
  cout << "The average mpg for the trip: " << ttlmiles/ttlgal << " miles/gallon" << endl;
 cout << "---------------------------------------------------" << endl;
}
else {

  cout << "--------------- Gas consumption -------------------" << endl;
  cout << "The number of miles driven in town: " << citymiles << " miles" << endl;
cout << "The gas consumption for town driving: " << citygallons << " gallons" << endl;
  cout << "The number of miles driven on the highway: " << highwaymiles << " miles"<< endl;
  cout <<"The gas consumption for highway driving: " << highwaygas << " gallons" << endl;
  cout << "The total miles driven: " << ttlmiles << " miles" << endl;
  cout << "The total gas consumption: " << highwaygas + citygallons << " gallons" << endl;
  cout << "No Average can be calculated"<< endl;
 cout << "---------------------------------------------------" << endl;
}

    return 0;
}
