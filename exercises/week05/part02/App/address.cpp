#include "address.h"

Address::Address(void) {}
Address::~Address() {}

std::string Address::street(void) const {
    return this->_street;
}

std::string Address::zip(void) const {
    return this->_zip;
}

std::string Address::municipality(void) const {
    return this->_municipality;
}

void Address::set_street(const std::string& street) {
    this->_street = street;
}

void Address::set_zip(const std::string& zip) {
    this->_zip = zip;
}

void Address::set_municipality(const std::string& municipality) {
    this->_municipality = municipality;
}

void Address::set_address(
        const std::string& street,
        const std::string& zip,
        const std::string& municipality
        ) {
    this->_street = street;
    this->_zip = zip;
    this->_municipality = municipality;
}
