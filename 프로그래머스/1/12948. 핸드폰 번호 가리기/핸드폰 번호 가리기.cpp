#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    
    phone_number.replace(phone_number.begin(), phone_number.end()-4, string(phone_number.size()-4, '*'));
    
    return phone_number;
}