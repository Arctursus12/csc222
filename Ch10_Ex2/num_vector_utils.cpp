#include <string>
#include <vector>
using namespace std;

string render_num_vector(const vector<int>& vec) {
    if (vec.empty()) {return "";} 
    /*Returning an empty string if the vector is empty, accounting for test 3
    Not 100% sure this is how the "empty" string would look, maybe a null value is better*/
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
    vector<int> v; //Failsafe not needed here, as a blank vector is just a blank vector
    for (size_t i = 0; i < vec.size(); ++i) { //Recycling code, if it works it works
        if (vec[i] % 2 == 0) {
            v.push_back(vec[i]); //Appends the even values to the vector
        }
    }
    return v;
}

vector<int> only_odds(const vector<int>& vec) {
    vector<int> v; //Failsafe not needed here, as a blank vector is just a blank vector
    for (size_t i = 0; i < vec.size(); ++i) { //Recycling code, if it works it works part 3
        if (vec[i] % 2 == 1) {
            v.push_back(vec[i]); //Appends the ODD values to the vector
        }
    }
    return v; //This is the exact same code as evens, just using 1 instead of 0 in the if check
}

vector<int> nums_between(const vector<int>& vec, int low, int high) {
    vector<int> v; //Failsafe not needed here, as a blank vector is just a blank vector
    for (size_t i = 0; i < vec.size(); ++i) { //Recycling code, if it works it works part 4
        if (vec[i] >= low && vec[i] <= high) {
            v.push_back(vec[i]); //Appends the correct values to the vector
        }
    }
    return v; //Perfect programming tasks – recycling code 50 times in different ways, I love it
}

int num_vector_sum(const vector<int>& vec) {
    if (vec.empty()) {return 0;} //Should work as a failsafe in case the vector is empty
    int product = 1;
    //Can't use a single letter here like for v and s, I'm addicted to using i in loops
    for (size_t i = 0; i < vec.size(); ++i) { //Recycling code, if it works it works part 2
        product *= vec[i];
    } //Was right in saving this for last - made the most stupid little mistakes in it
    return product; /*Adding a last commit on this just to be confused
    Why is this function called a sum in the assignment? It yields a product*/
}

int nums_mean(const vector<int>& vec) {
    int mean;
    if (vec.empty()) {return 0;} //Should work as a failsafe in case the vector is empty
    for (size_t i = 0; i < vec.size(); ++i) { //Recycling code, if it works it works part 5?
        mean += vec[i];
    }
    mean /= vec.size(); //Doing this before return because I don't want it to somehow break
    return mean;
}

int nums_median(const vector<int>& vec) {
    return 0;
}