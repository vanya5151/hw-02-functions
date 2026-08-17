#include <string>

int find_char(std::string str, int from, int to){
    std::char a;

    for(from = int i; i < to; i++){
        if(str[i] == a){
            return i;
        }
    }
    return -1;
}