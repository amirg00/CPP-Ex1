/**
 * @author Amir Gillette
 * @date 2021-03-09
 */

#include "doctest.h"
#include "mat.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;

/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */
string nospaces(string input) {
    std::erase(input, ' ');
    std::erase(input, '\t');
    std::erase(input, '\n');
    std::erase(input, '\r');
    return input;
}


TEST_CASE("Good input") {
    CHECK(nospaces(mat(9, 7, '@', '-')) == nospaces("@@@@@@@@@\n"
                                                    "@-------@\n"
                                                    "@-@@@@@-@\n"
                                                    "@-@---@-@\n"
                                                    "@-@@@@@-@\n"
                                                    "@-------@\n"
                                                    "@@@@@@@@@"));

    CHECK(nospaces(mat(1, 13, '@', '-')) == nospaces("@\n"
                                                     "@\n"
                                                     "@\n"
                                                     "@\n"
                                                     "@\n"
                                                     "@\n"
                                                     "@\n"
                                                     "@\n"
                                                     "@\n"
                                                     "@\n"
                                                     "@\n"
                                                     "@\n"
                                                     "@"));

    CHECK(nospaces(mat(13, 1, '@', '-')) == nospaces("@@@@@@@@@@@@@"));

    CHECK(nospaces(mat(5, 3, '^', '^')) == nospaces("^^^^^\n"
                                                    "^^^^^\n"
                                                    "^^^^^"));



    // Smallest inputs:
    CHECK(nospaces(mat(1, 1, '@', '-')) == nospaces("@"));

    CHECK(nospaces(mat(3, 3, '$', '*')) == nospaces("$$$\n"
                                                    "$*$\n"
                                                    "$$$"));



    /* Add more test here */
}
/**
 * Here we will have a test checks valid long mats.
 */
TEST_CASE("GOOD input - long mats") {
    CHECK(nospaces(mat(101, 101, '$', '*')) == nospaces(
            "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n"
            "$***************************************************************************************************$\n"
            "$*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*$\n"
            "$*$***********************************************************************************************$*$\n"
            "$*$*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*$*$\n"
            "$*$*$*******************************************************************************************$*$*$\n"
            "$*$*$*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*$*$*$\n"
            "$*$*$*$***************************************************************************************$*$*$*$\n"
            "$*$*$*$*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*$*$*$*$\n"
            "$*$*$*$*$***********************************************************************************$*$*$*$*$\n"
            "$*$*$*$*$*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*$*$*$*$*$\n"
            "$*$*$*$*$*$*******************************************************************************$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$***************************************************************************$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$***********************************************************************$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*******************************************************************$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$***************************************************************$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$***********************************************************$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*******************************************************$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$***************************************************$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$***********************************************$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*******************************************$*$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$***************************************$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$***********************************$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*******************************$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$***************************$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$$$$$$$$$$$$$$$$$$$$$$$$$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$***********************$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$$$$$$$$$$$$$$$$$$$$$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*******************$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$$$$$$$$$$$$$$$$$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$***************$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$$$$$$$$$$$$$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$***********$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$$$$$$$$$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*******$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$$$$$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$***$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$***$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$$$$$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*******$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$$$$$$$$$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$***********$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$$$$$$$$$$$$$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$***************$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$$$$$$$$$$$$$$$$$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*******************$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$$$$$$$$$$$$$$$$$$$$$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$***********************$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$$$$$$$$$$$$$$$$$$$$$$$$$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$***************************$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*******************************$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$***********************************$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$***************************************$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*******************************************$*$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$***********************************************$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$***************************************************$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$*******************************************************$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$***********************************************************$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$***************************************************************$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$*******************************************************************$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$***********************************************************************$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$***************************************************************************$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*$*$*$*$*$*$\n"
            "$*$*$*$*$*$*******************************************************************************$*$*$*$*$*$\n"
            "$*$*$*$*$*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*$*$*$*$*$\n"
            "$*$*$*$*$***********************************************************************************$*$*$*$*$\n"
            "$*$*$*$*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*$*$*$*$\n"
            "$*$*$*$***************************************************************************************$*$*$*$\n"
            "$*$*$*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*$*$*$\n"
            "$*$*$*******************************************************************************************$*$*$\n"
            "$*$*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*$*$\n"
            "$*$***********************************************************************************************$*$\n"
            "$*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*$\n"
            "$***************************************************************************************************$\n"
            "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"));


    CHECK(nospaces(mat(73, 31, '%', '^')) == nospaces("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n"
                                                      "%^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^%\n"
                                                      "%^%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%^%\n"
                                                      "%^%^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^%^%\n"
                                                      "%^%^%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%^%^%\n"
                                                      "%^%^%^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^%^%^%\n"
                                                      "%^%^%^%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%^%^%^%\n"
                                                      "%^%^%^%^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^%^%^%^%\n"
                                                      "%^%^%^%^%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%^%^%^%^%\n"
                                                      "%^%^%^%^%^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^%^%^%^%^%\n"
                                                      "%^%^%^%^%^%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%^%^%^%^%^%\n"
                                                      "%^%^%^%^%^%^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^%^%^%^%^%^%\n"
                                                      "%^%^%^%^%^%^%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%^%^%^%^%^%^%\n"
                                                      "%^%^%^%^%^%^%^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^%^%^%^%^%^%^%\n"
                                                      "%^%^%^%^%^%^%^%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%^%^%^%^%^%^%^%\n"
                                                      "%^%^%^%^%^%^%^%^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^%^%^%^%^%^%^%^%\n"
                                                      "%^%^%^%^%^%^%^%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%^%^%^%^%^%^%^%\n"
                                                      "%^%^%^%^%^%^%^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^%^%^%^%^%^%^%\n"
                                                      "%^%^%^%^%^%^%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%^%^%^%^%^%^%\n"
                                                      "%^%^%^%^%^%^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^%^%^%^%^%^%\n"
                                                      "%^%^%^%^%^%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%^%^%^%^%^%\n"
                                                      "%^%^%^%^%^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^%^%^%^%^%\n"
                                                      "%^%^%^%^%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%^%^%^%^%\n"
                                                      "%^%^%^%^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^%^%^%^%\n"
                                                      "%^%^%^%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%^%^%^%\n"
                                                      "%^%^%^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^%^%^%\n"
                                                      "%^%^%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%^%^%\n"
                                                      "%^%^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^%^%\n"
                                                      "%^%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%^%\n"
                                                      "%^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^%\n"
                                                      "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"));


    CHECK(nospaces(mat(73, 1, '%', '^')) == nospaces("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"));

    CHECK(nospaces(mat(1, 73, '%', '^')) == nospaces("%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%\n"
                                                     "%"));
}

/**
 * This test checks if for even inputted Row and Col, the function raise an error, as should be.
 */
TEST_CASE("Bad input - even") {
    CHECK_THROWS(mat(10, 5, '$', '%'));
    CHECK_THROWS(mat(0, 1, '#', '-'));
    CHECK_THROWS(mat(1, 0, '#', '-'));
    CHECK_THROWS(mat(5, 2, '%', '.'));
    CHECK_THROWS(mat(0, 0, '$', '%'));
}

/**
* This test checks if for space type inputted Row and Col, the function raise an error, as should be.
*/
TEST_CASE("Bad input - invalid chars") {
    CHECK_NOTHROW(mat(11, 1, ' ', '%'));
    CHECK_NOTHROW(mat(9, 7, '\r', '-'));
    CHECK_NOTHROW(mat(13, 5, '\n', '.'));
    CHECK_NOTHROW(mat(15, 15, '\t', '%'));

    // same for the second char:
    CHECK_NOTHROW(mat(11, 1, '(', ' '));
    CHECK_NOTHROW(mat(9, 7, '&', '\r'));
    CHECK_NOTHROW(mat(13, 5, '~', '\n'));
    CHECK_NOTHROW(mat(15, 15, '!', '\t'));
}

/**
 * This test checks if for negative inputted Row and Col, the function raise an error, as should be.
 */
TEST_CASE("Bad input - negative numbers") {
    CHECK_THROWS(mat(-1, 5, '$', '%'));
    CHECK_THROWS(mat(97, -4, '#', '-'));
    CHECK_THROWS(mat(-6, -8, '%', '.'));
    CHECK_THROWS(mat(-6, -8, '-', '-'));
}

/**
 * This test checks for cases that seem to be not valid, but they actually are.
 * Therefore, we will check if the function won't throw an error for those inputs.
 */
TEST_CASE("Valid input") {
    CHECK_NOTHROW(mat(1, 5, '%', '%'));
}

/* Add more test cases here */
