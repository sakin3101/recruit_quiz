#pragma once
#include <string>
#include <vector>

//問題文と答えをまとめる構造体
struct Question
{
	std::string q;	//問題文
	std::string a;	//答え
	std::vector<std::string> b;	//答え（複数ある場合）
};

// 問題の配列をあらわす型
using QuestionList = std::vector<Question>;