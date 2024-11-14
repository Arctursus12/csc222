#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include <string>
#include <vector>
#include "num_vector_utils.h"
using namespace std;
//Assigned separate names to each test case – may not be "correct," but it's what I'm used to
TEST_CASE("Testing render_num_vector: three values") {
    vector<int> nums1 = {1, 3, 7};
    string numstr = render_num_vector(nums1);
    string expected = "1 3 7";
    CHECK(numstr == expected);
}
TEST_CASE("Testing render_num_vector: five values") {
    vector<int> nums2 = {2, 5, 6, 8, 9};
    string numstr = render_num_vector(nums2);
    string expected = "2 5 6 8 9";
    CHECK(numstr == expected);
}
TEST_CASE("Testing render_num_vector: no values") {
    vector<int> nums3;
    string numstr = render_num_vector(nums3);
    string expected = ""; //Assuming this will yield what I need, if not, you'll see a change
    CHECK(numstr == expected);
}
TEST_CASE("Testing only_evens") {
    vector<int> nums = {1, 2, 3, 4, 6, 7, 8, 11, 12, 14, 27, 22};
    vector<int> evens = only_evens(nums);
    string expected = "2 4 6 8 12 14 22";
    CHECK(render_num_vector(evens) == expected);
}