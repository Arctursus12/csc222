#include <string>
#include <vector>
using namespace std;

string render_num_vector(const vector<int>& vec) {
    if (vec.empty()) {
        return "";
    } /*Returning an empty string if the vector is empty, accounting for test 3
    Not 100% sure this is how the "empty" string would look, maybe a null value would be better*/
    string s;
    for (size_t i = 0; i < vec.size(); ++i) {
        if (i > 0) {
            s += ' ';
        }
        s += to_string(vec[i]); //Converting the integer to a string and appending, tests 1/2
    }
    return s;
}

vector<int> only_evens(const vector<int>& vec) {
    vector<int> v;
    for (size_t i = 0; i < vec.size(); ++i) { //Recycling code, if it works it works
        if (vec[i] % 2 == 0) {
            v.push_back(vec[i]); //Appends the even values to the vector
        }
    }
    return v;
}