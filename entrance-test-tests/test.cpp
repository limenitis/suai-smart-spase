#include "pch.h"
#include ".\..\entrance-test\functions.c"
#include <string>

namespace str_tests{

	std::string str = "";

	TEST(TestStrFunctions, Simple_Test) {
		str = "dddddd";
		EXPECT_STREQ("dddddd ", str_processing(const_cast<char*>(str.c_str()), 'd'));
	}

	TEST(TestStrFunctions, Words_In_Start) {
		str = "dd ss aa rr rrw	";
		EXPECT_STREQ("dd ", str_processing(const_cast<char*>(str.c_str()), 'd'));
	}

	TEST(TestStrFunctions, Words_In_Middle) {
		str = "sggs aasfa gs r gsg";
		EXPECT_STREQ("aasfa ", str_processing(const_cast<char*>(str.c_str()), 'a'));
	}

	TEST(TestStrFunctions, Words_Few) {
		str = "tjs dsDGER asfs teer ew d trref";
		EXPECT_STREQ("tjs teer trref ", str_processing(const_cast<char*>(str.c_str()), 't'));
	}

	TEST(TestStrFunctions, Words_In_End) {
		str = "asf hrtf v sfrewer f dssa r";
		EXPECT_STREQ("r ", str_processing(const_cast<char*>(str.c_str()), 'r'));
	}

	TEST(TestStrFunctions, Spaces_In_Starts) {
		str = "      rewe dasda rbtr zxcr";
		EXPECT_STREQ("dasda ", str_processing(const_cast<char*>(str.c_str()), 'd'));
	}

	TEST(TestStrFunctions, Spaces_In_Middle) {
		str = "rege    qwdwqd wqwqd     fetgr";
		EXPECT_STREQ("wqwqd ", str_processing(const_cast<char*>(str.c_str()), 'w'));
	}

	TEST(TestStrFunctions, Spaces_In_End) {
		str = "saf ryhrw f sdr4    dqdq         ";
		EXPECT_STREQ("f ", str_processing(const_cast<char*>(str.c_str()), 'f'));
	}

	TEST(TestStrFunctions, Consist_Special_Symbols) {
		str = "sad#$!d d#4$12@ f#@525#& &*#@! d$12#";
		EXPECT_STREQ("d#4$12@ d$12# ", str_processing(const_cast<char*>(str.c_str()), 'd'));
	}

	TEST(TestStrFunctions, Empty_Str) {
		str = "\0";
		EXPECT_STREQ("", str_processing(const_cast<char*>(str.c_str()), 's'));
	}

	TEST(TestStrFunctions, One_Symbol_With_Return_Str) {
		str = "s";
		EXPECT_STREQ("s ", str_processing(const_cast<char*>(str.c_str()), 's'));
	}

	TEST(TestStrFunctions, One_Symbol_Without_Return_Str) {
		str = "d";
		EXPECT_STREQ("", str_processing(const_cast<char*>(str.c_str()), 's'));
	}
}

