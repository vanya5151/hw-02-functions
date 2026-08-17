#include <string>
#include <cctype>
#include <iostream>

bool check_password(std::string password, int min_length=8){
    if(password.size() < min_length){
            return false;
        }

    bool if_upper = false;
    bool if_lower = false;
    bool if_digit = false;
    bool if_special = false;

    for (char a : password){
        if(std::isupper(a)){
            if_upper = true;
        }
        
        if(std::islower(a)){
            if_lower = true;
        }

        if(std::isdigit(a)){
            if_digit = true;
        }

        if(std::string("!@#$%^&*").find(a) != std::string::npos){
            if_special = true;
        }
    }
    return if_digit && if_lower && if_special && if_upper;
}
