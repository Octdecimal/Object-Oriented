#include <stdexcept>
#include "TwoDayPackage.h"
#include "Package.h"
#include <iostream>
using namespace std;

TwoDayPackage::TwoDayPackage(const string& sName, const string& sAddress, const string& sCity,
	const string& sState, int sZIP, const string& rName, const string& rAddress,
	const string& rCity, const string& rState, int rZIP, double w, double cost, double fee)
	: Package(sName, sAddress, sCity, sState, sZIP, rName, rAddress, rCity, rState, rZIP, w, cost) {
	setFlatFee(fee);
}

void TwoDayPackage::setFlatFee(double fee) {
	flatFee = fee;
}

double TwoDayPackage::getFlatFee() const {
	return flatFee;
}

double TwoDayPackage::calculateCost() const {
	return getFlatFee() + (Package::getWeight() * Package::getCostPerOunce());
}

void TwoDayPackage::print() const {
	cout << Package::getSenderName() << "\n" << Package::getSenderAddress() <<
		"\n" << Package::getSenderCity() << ", " << Package::getSenderState() << " " << Package::getSenderZIP();
	cout << "\n\nRecipient:\n" << Package::getRecipientName() << "\n" << Package::getRecipientAddress() <<
		"\n" << Package::getRecipientCity() << ", " << Package::getRecipientState() << " " << Package::getRecipientZIP();
	cout << "\n\nCost: $" << calculateCost() << "\n\n";
}