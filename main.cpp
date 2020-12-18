#include <iostream>
using namespace std;

// function to convert decimal to binary
string decToBinary(int n)
{
    // array to store binary number
    int binaryNum[32];

    // counter for binary array
    int i = 0;
    while (n > 0) {

        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    string ret;
    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        ret.append(to_string(binaryNum[j]));

    if (ret.length() == 0)
        ret.append("0");
    return ret;

}

bool GABE = true;

ulong fun(ulong n) {
    cout << n << " in binary: \t\t" << decToBinary(n);
    if (n ==0 || n == 1)
        return 0;
    else {
        if (n % 4 == 2) {
            cout << " REWARD++\n";
            string temp = decToBinary(n);
            if (temp[temp.length()-1] != '0' || temp[temp.length()-2] != '1')
                GABE = false;

            return 1 + fun(n / 4);
        }
        if (n % 4 == 3) {
            cout << "\n";
            return fun(n / 4);
        }
        cout << "\n";
        return fun(n/2);
    }

}

int main() {
//    fun(146);
    int max = 0;
    long long int temp = 0;
    /*for (long long int i = 0; i < 1000; i++) {
        temp = fun(i);
        if (temp > max)
            max = temp;

        //cout << max << endl;

    }
    cout << max << endl;
    */

    int sum = fun(14757395258967641292);
    cout << "\n\n\n";
    if (GABE)
        cout << "Gabe is right\n";
    else {
        cout << "Gabe is wrong\n";
    }

    cout << "\nFinal: " << sum << endl;

    cout << endl;
    for (int i = 0; i < 16; ++i) {
        cout << "10";

    }

    return 0;
}