#include "person.h"
#include "engineer.h"
#include "civilengineer.h"
#include <iostream>

CivilEngineer::CivilEngineer()
{
    std::cout << "Default constructor called for CivilEnginner ... " << std::endl;
}

CivilEngineer::CivilEngineer(std::string_view fullname, int age,
    std::string_view address, int contract_count, std::string_view specialty)
    : Engineer(fullname, age, address, contract_count), m_specialty(specialty)
{
    std::cout << "Custom constructor for CivilEngineer called... " << std::endl;
}

CivilEngineer::CivilEngineer(const CivilEngineer& source) : Engineer(source), m_specialty(source.m_specialty)
{
    std::cout << "Copy constructor for CivilEnginner called... " << std::endl;
}

std::ostream& operator<<(std::ostream& out, const CivilEngineer& operand) {
    out << "CivilEngineer [Full name : " << operand.get_full_name() <<
        ",age : " << operand.get_age() <<
        ",address : " << operand.get_address() <<
        ",contract_count : " << operand.get_contract_count() <<
        ",specialty : " << operand.m_specialty << "]";

    return out;
}


CivilEngineer::~CivilEngineer()
{
}