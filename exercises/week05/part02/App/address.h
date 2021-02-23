#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>

class Address {
    private:
        std::string _street;
        std::string _zip;
        std::string _municipality;

    public:
        Address(void);
        ~Address();

        std::string street(void) const;
        std::string zip(void) const;
        std::string municipality(void) const;

        void set_street(const std::string& street);
        void set_zip(const std::string& zip);
        void set_municipality(const std::string& municipality);
        void set_address(
                const std::string& street,
                const std::string& zip,
                const std::string& municipality
        );
};

#endif // ADDRESS_H
