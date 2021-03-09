#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
using namespace std;


TEST_CASE("Good snowman code") {

    CHECK(snowman(11114411) == string("       \n _===_ \n (.,.) \n ( : ) \n ( : ) "));
    CHECK(snowman(12111111) == string("       \n _===_ \n (...) \n<( : )>\n ( : ) "));
    CHECK(snowman(22312311) == string("  ___  \n ..... \n\\(O..) \n ( : )\\\n ( : ) "));
    CHECK(snowman(33221313) == string("   _   \n  /_\\  \n (o_o) \n<( : )\\\n (___) "));
    CHECK(snowman(12312312) == string("       \n _===_ \n\\(O..) \n ( : )\\\n (" ") "));
    CHECK(snowman(11111111) == string("       \n _===_ \n (.,.) \n<( : )>\n ( : ) "));
    CHECK(snowman(22222222) == string("  ___  \n ..... \n\\(o.o)/\n (] [) \n (" ") "));
    CHECK(snowman(33333333) == string("   _   \n  /_\\  \n (O_O) \n/(> <)\\\n (___) "));
    CHECK(snowman(23232323) == string("  ___  \n ..... \n\\(o_O) \n (] [)\\\n (___) "));
 
     CHECK(snowman(11113333) == string("       \n _===_ \n (.,.) \n/(> <)\\\n (___) "));
     CHECK(snowman(22224444) == string("  ___  \n ..... \n (o.o) \n (   ) \n (   ) "));
     CHECK(snowman(44444444) == string("  ___  \n (_*_) \n (- -) \n (   ) \n (   ) "));
     CHECK(snowman(11122111) == string("       \n _===_ \n\\(.,o) \n ( : )>\n ( : ) "));



     CHECK(snowman(12341234) == string("       \n _===_ \n (O.-)/\n<(> <) \n (   ) "));
     CHECK(snowman(43214321) == string("  ___  \n (_*_) \n (o_.) \n (] [)\\\n ( : ) "));



    CHECK(snowman(34243141) == string("   _   \n  /_\\  \n (o -) \n/(   )>\n ( : ) "));
    CHECK(snowman(22222221) == string("  ___  \n ..... \n\\(o.o)/\n (] [) \n ( : ) "));
    CHECK(snowman(13131313) == string("       \n _===_ \n (._O) \n<( : )\\\n (___) "));
    CHECK(snowman(33333332) == string("   _   \n  /_\\  \n (O_O) \n/(> <)\\\n (" ") "));
    CHECK(snowman(14332411) == string("       \n _===_ \n\\(O O) \n ( : ) \n ( : ) "));


}

TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(555));
    CHECK_THROWS_AS(snowman(1), std::range_error);
    CHECK_THROWS_AS(snowman(123123), std::range_error);
     CHECK_THROWS_AS(snowman(-21), std::range_error);
    CHECK_THROWS_AS(snowman(12348567), std::invalid_argument);
    CHECK_THROWS_AS(snowman(12312310), std::invalid_argument);
    CHECK_THROWS_AS(snowman(12341235), std::invalid_argument);
    CHECK_THROWS_AS(snowman(12343217), std::invalid_argument);
    CHECK_THROWS_AS(snowman(7012341), std::range_error);
    
   

     CHECK_THROWS(snowman(123412344));
    
     CHECK_THROWS_AS(snowman('a'), std::range_error);


     CHECK_THROWS_AS(snowman(123412343), std::range_error);




}
