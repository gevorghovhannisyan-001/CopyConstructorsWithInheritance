#ifndef CIVIL_ENGINEER_H
#define CIVIL_ENGINEER_H

#include "engineer.h"
#include<string_view>

class CivilEngineer : public Engineer
{
    friend std::ostream& operator<<(std::ostream&, const CivilEngineer& operand);
public:
    CivilEngineer();
    CivilEngineer(std::string_view fullname, int age,
        std::string_view address, int contract_count, std::string_view specialty);
    CivilEngineer(const CivilEngineer& source);
    ~CivilEngineer();

    void build_road() {
        /* get_full_name();
         m_address{ "ajdkfj" };*/
    }
private:
    std::string m_specialty{ "None" };
};

#endif // CIVIL_ENGINEER_H