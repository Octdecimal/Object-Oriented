#include <stdexcept>
#include "OvernightPackage.h"
#include "Package.h"
#include <iostream>
using namespace std;

OvernightPackage::OvernightPackage(const string& sName, const string& sAddress, const string& sCity,
	const string& sState, int sZIP, const string& rName, const string& rAddress,
	const string& rCity, const string& rState, int rZIP, double w, double cost, double overnightFee)
	: Package(sName, sAddress, sCity, sState, sZIP, rName, rAddress, rCity, rState, rZIP, w, cost) {
	setOvernightFeeOunce(overnightFee);
}
void OvernightPackage::setOvernightFeeOunce(double overnightFee) {
	overnightFeePerOunce = overnightFee;
}
double OvernightPackage::getOvernightFeeOunce() const {
	return overnightFeePerOunce;
}
double OvernightPackage::calculateCost() const {
	return ((Package::getWeight() * getOvernightFeeOunce()) + (Package::getWeight() * Package::getCostPerOunce()));
}
void OvernightPackage::print() const {
	cout << Package::getSenderName() << "\n" << Package::getSenderAddress() <<
		"\n" << Package::getSenderCity() << ", " << Package::getSenderState() << " " << Package::getSenderZIP();
	cout << "\n\nRecipient:\n" << Package::getRecipientName() << "\n" << Package::getRecipientAddress() <<
		"\n" << Package::getRecipientCity() << ", " << Package::getRecipientState() << " " << Package::getRecipientZIP();
	cout << "\n\nCost: $" << calculateCost() << "\n\n";
}