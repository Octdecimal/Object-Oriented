#include <stdexcept>
#include "Package.h"
#include <iostream>
using namespace std;

Package::Package(const string& sName, const string& sAddress, const string& sCity,
	const string& sState, int sZIP, const string& rName, const string& rAddress,
	const string& rCity, const string& rState, int rZIP, double w, double cost) 
	: senderName(sName), senderAddress(sAddress), senderCity(sCity), senderState(sState), senderZIP(sZIP),
	recipientName(rName), recipientAddress(rAddress), recipientCity(rCity), recipientState(rState), recipientZIP(rZIP) {
	setWeight(w);
	setCostPerOunce(cost);
}

void Package::setSenderName(const string& sName) {
	senderName = sName;
}

string Package::getSenderName() const {
	return senderName;
}

void Package::setSenderAddress(const string& sAddress) {
	senderAddress = sAddress;
}

string Package::getSenderAddress() const {
	return senderAddress;
}

void Package::setSenderCity(const string& sCity) {
	senderCity = sCity;
}

string Package::getSenderCity() const {
	return senderCity;
}

void Package::setSenderState(const string& sState) {
	senderState = sState;
}

string Package::getSenderState() const {
	return senderState;
}

void Package::setSenderZIP(int sZIP) {
	senderZIP = sZIP;
}

int Package::getSenderZIP() const {
	return senderZIP;
}

void Package::setRecipientName(const string& rName) {
	recipientName = rName;
}

string Package::getRecipientName() const {
	return recipientName;
}

void Package::setRecipientAddress(const string& rAddress) {
	recipientAddress = rAddress;
}

string Package::getRecipientAddress() const {
	return recipientAddress;
}

void Package::setRecipientCity(const string& rCity) {
	recipientCity = rCity;
}

string Package::getRecipientCity() const {
	return recipientCity;
}

void Package::setRecipientState(const string& rState) {
	recipientState = rState;
}

string Package::getRecipientState() const {
	return recipientState;
}

void Package::setRecipientZIP(int rZIP) {
	recipientZIP = rZIP;
}

int Package::getRecipientZIP() const {
	return recipientZIP;
}

void Package::setWeight(double w) {
	if (w >= 0.0) 
		weight = w;
	else
		throw invalid_argument("Weight must be >= 0.0");
}

double Package::getWeight() const {
	return weight;
}

void Package::setCostPerOunce(double cost) {
	costPerOunce = cost;
}

double Package::getCostPerOunce() const {
	return costPerOunce;
}

double Package::calculateCost() const {
	return getWeight() * getCostPerOunce();
}

void Package::print() const {
	cout << getSenderName() << "\n" << getSenderAddress() <<
		"\n" << getSenderCity() << ", " << getSenderState() << " " << getSenderZIP();
	cout << "\n\nRecipient:\n" << getRecipientName() << "\n" << getRecipientAddress() <<
		"\n" << getRecipientCity() << ", " << getRecipientState() << " " << getRecipientZIP();
	cout << "\n\nCost: $" << calculateCost() << "\n\n";
}