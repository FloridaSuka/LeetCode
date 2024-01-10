#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    string defangIPaddr(string address) {
        string defangedAddress;
        for (char c : address) {
            if (c == '.') {
                defangedAddress += "[.]";
            }
            else {
                defangedAddress += c;
            }
        }
        return defangedAddress;

    }
};
int main() {
    Solution solution;
    string ip_address;
    cout << "Write an ip address: ";
    getline(cin, ip_address);
    string ip_defanged = solution.defangIPaddr(ip_address);
    cout << "Defanged ip adress is: " << ip_defanged;
    return 0;
}
