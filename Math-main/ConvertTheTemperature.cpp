
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double kelvin = celsius + 273.15;

        double fahrenheit = (celsius * 1.80) + 32.00;

        return {kelvin, fahrenheit};
    }
};

int main() {
    Solution solution;
    double c;
    cout<<"celsius=";
    cin>>c;
    vector<double>res=solution.convertTemperature(c);
    cout<<'['<<res[0]<<" , "<<res[1]<<']';
    cout<<endl;
    return 0;
}
