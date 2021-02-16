#include "pch.h"
#include ".\..\entrance-test\functions.c"


namespace str_tests{

	TEST(TestStrFunctions, Test_Tests) {
		EXPECT_EQ(1,1,);
	}
	TEST(TestStrFunctions, Simple_Test) {
			
		EXPECT_STREQ("dddddd ", str_processing("dddddd", 'd'));
	}

	TEST(TestStrFunctions, Words_In_Start) {

		EXPECT_STREQ("wr4#$%342\\0/dwdfr ", str_processing("wr4#$%342\\0/dwdfr   asdsfa dsafsf  sdfsfvw rfw ntyrvr", 'w'));
	}

	TEST(TestStrFunctions, Words_In_Middle) {

		EXPECT_STREQ("wrfr wtgw ", str_processing("asdsfa dsafsf wrfr sdfs wtgw ntyrvr", 'w'));
	}

	TEST(TestStrFunctions, Words_Few) {

		EXPECT_STREQ("wrfr wtgw ", str_processing("wrfr   asdsfa dsafsf  sdfs wtgw ntyrvr", 'w'));
	}

	TEST(TestStrFunctions, Words_In_End) {

		EXPECT_STREQ("fwgqtb ", str_processing("gfRYH64h  teABw4   5@^%@u573   6847   asdsfa dsafsf  sdfsfvw rfw ntyrvr fwgqtb", 'f'));
	}

	TEST(TestStrFunctions, Spaces_In_Starts) {

		EXPECT_STREQ("wrfr wtgw ", str_processing("                    asdsfa dsafsf wrfr sdfs wtgw ntyrvr", 'w'));
	}

	TEST(TestStrFunctions, Spaces_In_Middle) {

		EXPECT_STREQ("fsfj;'dfjfk fi3j f3pfj3ijf3j[fawfaf ", str_processing("dslf;j  fsfj;'dfjfk     jfihjioj erpfj ij fi3j jf 3f 3jfj j 3ipfj3 ipfj34if   f3pfj3ijf3j[fawfaf", 'f'));
	}

	TEST(TestStrFunctions, Spaces_In_End) {

		EXPECT_STREQ("wrfr wtgw ", str_processing("asdsfa dsafsf wrfr sdfs wtgw ntyrvr                    ", 'w'));
	}

	TEST(TestStrFunctions, Consist_Special_Symbols) {

		EXPECT_STREQ("sadad sada s#@$2fsd^* sgs ", str_processing("      sadad \\0 sada dwewd   weg    s#@$2fsd^*   %$@^dfsd  GE$#627i356hte \\0 \\4 53 \\f sgs   ", 's'));
	}

	TEST(TestStrFunctions, Empty_Str) {

		EXPECT_STREQ("", str_processing("\0", 's'));
	}

	TEST(TestStrFunctions, One_Symbol_With_Return_Str) {

		EXPECT_STREQ("s ", str_processing("s", 's'));
	}

	TEST(TestStrFunctions, One_Symbol_Without_Return_Str) {

		EXPECT_STREQ("", str_processing("d", 's'));
	}
}

