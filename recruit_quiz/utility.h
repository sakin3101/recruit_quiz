#pragma once
#include <vector>
#include <string>

//	配列をシャッフルする
void Shuffle(std::vector<int>& indices);

//	シャッフルした番号配列を作成する
std::vector<int> CreateRandomIndices(int n);

//	間違った番号の配列を作成する
//	n				作成する番号の範囲
//	correctIndex	正解の番号
std::vector<int> CreateWrongIndices(int n, int correctIndex);

// 文字列を分割する
// s 分解する文字列
// c 区切り文字
std::vector<std::string> Split(const std::string& s, char c);