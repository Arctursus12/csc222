#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include <string>
#include <vector>
#include "num_vector_utils.h"
using namespace std;
//Assigned separate names to each test case – may not be "correct," but it's what I'm used to
//Update: scratch that! Never changed the strings, so screw any semblance of organization here
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
    vector<int> numse = {1, 2, 3, 4, 6, 7, 8, 11, 12, 14, 27, 22};
    vector<int> evens = only_evens(numse);
    string expected = "2 4 6 8 12 14 22";
    CHECK(render_num_vector(evens) == expected);
}
TEST_CASE("Testing only_odds") {
    vector<int> numso = {1, 2, 3, 4, 6, 7, 8, 11, 12, 14, 27, 22};
    vector<int> odds = only_odds(numso);
    string expected = "1 3 7 11 27";
    CHECK(render_num_vector(odds) == expected);
}
TEST_CASE("Testing num_vector_product") {
    vector<int> numsp = {2, 3, 7};
    CHECK(42 == num_vector_product(numsp));
}
TEST_CASE("Testing nums_between function") {
    vector<int> numsb = {11, 2, 13, 4, 10, 26, 7, 88, 19, 20, 14, 5, 32};
    vector<int> numsfiltered = nums_between(numsb, 10, 20);
    string expected = "11 13 10 19 20 14";
    CHECK(render_num_vector(numsfiltered) == expected);
}
TEST_CASE("Testing nums_mean function") {
    vector<int> numsmean = {1, 2 ,3};
    CHECK(2 == nums_mean(numsmean));
}
TEST_CASE("Testing nums_median function: odd size") {
    vector<int> numsmed1 = {2, 1 ,3};
    CHECK(2 == nums_median(numsmed1));
}
TEST_CASE("Testing nums_median function: even size") {
    vector<int> numsmed2 = {4, 2 ,3, 1};
    CHECK(2.5 == nums_median(numsmed2));
}
TEST_CASE("Testing nums_mode function: unimodal") {
    vector<int> numsmode1 = {1, 2, 3, 3, 3, 2};
    vector<int> mode1 = only_evens(numsmode1);
    string expected = "3";
    CHECK(render_num_vector(mode1) == expected);
}
TEST_CASE("Testing nums_mode function: multimodal") {
    vector<int> numsmode2 = {2, 1, 2, 3, 1, 3, 3, 2};
    vector<int> mode2 = only_evens(numsmode2);
    string expected = "2 3";
    CHECK(render_num_vector(mode2) == expected);
}