#include <iostream>
#include <vector>
using namespace std;
vector<double> convertTemperature(double celsius);
int main()
{
    vector<double> k;
    double celsius;
    cout << "Enter Celsius : ";
    cin >> celsius;
    k = convertTemperature(celsius);
    for (int i = 0; i < k.size(); i++)
    {
        cout << k[i] << " ";
    }

    return 0;
}
vector<double> convertTemperature(double celsius)
{
    vector<double> v;
    double k = celsius + 273.15;
    double f = celsius * 1.80 + 32.00;
    v.push_back(k);
    v.push_back(f);
    return v;
}