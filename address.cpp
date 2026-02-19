#include <iostream>
#include <sstream>
#include "address.h"

Address::Address(){
	street = 1;
	city = 1;
	state = 1;
	zip = 10000;
} // end constructor

void Address::init(std::string street, city, state, zip){
	std::stringstream converter;
	std::string sStreet;
	std::string sCity;
	std::string sState;
	std::string sZip;

} // end init

void Address::printAddress(){
	std::cout << street << " " << city << " " << state << " " << zip << std::endl;
} // end printAddress
