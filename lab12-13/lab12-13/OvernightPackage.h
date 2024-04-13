#ifndef OVERNIGHT_H
#define OVERNIGHT_H

#include "Package.h"
class OvernightPackage : public Package {
private:
	double overnightFeePerOunce;
public:
	OvernightPackage(const std::string&, const std::string&, const std::string&, const std::string&, int,
		             const std::string&, const std::string&, const std::string&, const std::string&, int,
		             double, double, double);

	void setOvernightFeeOunce(double);
	double getOvernightFeeOunce() const;

	virtual double calculateCost() const override;
	virtual void print() const override;
};
#endif