#include "pch.h"
#include ".\..\entrance-test\functions.c"


namespace str_tests{

	// 	dddddd
	char Simple_Test_str[] = { 'd', 'd', 'd', 'd', 'd', 'd', '\0'};
	
	// dd ss aa rr rrw
	char Words_In_Start_str[] = { 'd', 'd', ' ', 's', 's', ' ', 'a', 'a', ' ', 'r', 'r', ' ', 'r', 'r', 'w', '\0'};
	
	// sggs aasfa gs r gsg
	char Words_In_Middle_str[] = { 's', 'g', 'g', 's', ' ', 'a', 'a', 's', 'f', 'a', ' ', 'g', 's', ' ', 'r', ' ', 'g', 's', 'g', '\0'};
	
	// tjs dsDGER asfs teer ew d trref
	char Words_Few_str[] = { 't', 'j', 's', ' ', 'd', 's', 'D', 'G', 'E', 'R', ' ', 'a', 's', 'f', 's', ' ', 't', 'e', 'e', 'r', ' ', 'e', 'w', ' ', 'd', ' ', 't', 'r', 'r', 'e', 'f', '\0'};
	
	// asf hrtf v sfrewer f dssa r
	char Words_In_End_str[] = { 'a', 's', 'f', ' ', 'h', 'r', 't', 'f', ' ', 'v', ' ', 's', 'f', 'r', 'e', 'w', 'e', 'r', ' ', 'f', ' ', 'd', 's', 's', 'a', ' ', 'r', '\0' };
	
	//       rewe dasda rbtr zxcr
	char Spaces_In_Starts_str[] = { ' ', ' ', ' ', ' ', ' ', ' ', 'r', 'e', 'w', 'e', ' ', 'd', 'a', 's', 'd', 'a', ' ', 'r', 'b', 't', 'r', ' ', 'z', 'x', 'c', 'r', '\0' };
	
	// rege    qwdwqd wqwqd     fetgr
	char Spaces_In_Middle_str[] = { 'r', 'e', 'g', 'e', ' ', ' ', ' ', ' ', 'q', 'w', 'd', 'w', 'q', 'd', ' ', 'w', 'q', 'w', 'q', 'd', ' ', ' ', ' ', ' ', ' ', 'f', 'e', 't', 'g', 'r', '\0'};
	
	// saf ryhrw f sdr4    dqdq         
	char Spaces_In_End_str[] = { 's', 'a', 'f', ' ', 'r', 'y', 'h', 'r', 'w', ' ', 'f', ' ', 's', 'd', 'r', '4', ' ', ' ', ' ', ' ', 'd', 'q', 'd', 'q', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '\0' };
	
	// ad%2%2fg4 \\ewfxew dw$dw 0 d%qdt ge$@g35
	char Consist_Special_Symbols_str[] = { 'a', 'd', '%', '2', '%', '2', 'f', 'g', '4', ' ', '\\', '0', 'e', 'w', 'f', 'x', 'e', 'w', ' ', 'd', 'w', '$', 'd', 'w', ' ', '0', ' ', 'd', ' % ', 'q', 'd', 't', ' ', 'g', 'e', '$', '@', 'g', '3', '5', '\0'};

	// \0
	char Empty_Str_str[] = {'\0'};

	// s
	char One_Symbol_With_Return_Str_str[] = {'s', '\0'};

	// d
	char One_Symbol_Without_Return_Str_str[] = {'d', '\0'};

	TEST(TestStrFunctions, Simple_Test) {
			
		EXPECT_STREQ("dddddd ", str_processing(Simple_Test_str, 'd'));
	}

	TEST(TestStrFunctions, Words_In_Start) {

		EXPECT_STREQ("dd ", str_processing(Words_In_Start_str, 'd'));
	}

	TEST(TestStrFunctions, Words_In_Middle) {

		EXPECT_STREQ("aasfa ", str_processing(Words_In_Middle_str, 'a'));
	}

	TEST(TestStrFunctions, Words_Few) {

		EXPECT_STREQ("tjs teer trref ", str_processing(Words_Few_str, 't'));
	}

	TEST(TestStrFunctions, Words_In_End) {

		EXPECT_STREQ("r ", str_processing(Words_In_End_str, 'r'));
	}

	TEST(TestStrFunctions, Spaces_In_Starts) {

		EXPECT_STREQ("dasda ", str_processing(Spaces_In_Starts_str, 'd'));
	}

	TEST(TestStrFunctions, Spaces_In_Middle) {

		EXPECT_STREQ("wqwqd ", str_processing(Spaces_In_Middle_str, 'w'));
	}

	TEST(TestStrFunctions, Spaces_In_End) {

		EXPECT_STREQ("f ", str_processing(Spaces_In_End_str, 'f'));
	}

	TEST(TestStrFunctions, Consist_Special_Symbols) {

		EXPECT_STREQ("dw$dw ", str_processing(Consist_Special_Symbols_str, 'd'));
	}

	TEST(TestStrFunctions, Empty_Str) {

		EXPECT_STREQ("", str_processing(Empty_Str_str, 's'));
	}

	TEST(TestStrFunctions, One_Symbol_With_Return_Str) {

		EXPECT_STREQ("s ", str_processing(One_Symbol_With_Return_Str_str, 's'));
	}

	TEST(TestStrFunctions, One_Symbol_Without_Return_Str) {

		EXPECT_STREQ("", str_processing(One_Symbol_Without_Return_Str_str, 's'));
	}
}

