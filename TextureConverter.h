#pragma once
#include <DirectXTex.h>
#include <string>
class TextureConverter
{
public:
	/// <summary>
	///テクスチャをWICからDDSに変換する
	/// </summary>
	/// <param name="filePath">ファイルパス<param>
	void ConvertTextureWICToDDS(const std::string& filePath);

private:
	/// <summary>
	///テクスチャ読み込み
	/// </summary>
	/// <param name="filePath">ファイルパス<param>
	void LoadWICTextureFromFile(const std::string& filePath);
	
	/// <summary>
	/// マルチバイト文字列をワイド文字列に変換
	/// </summary>
	/// <param name="filePath">マルチバイト文字列<param>
	///<returns>ワイド文字列</returns>
	static std::wstring ConvertMultiByteStringToWideString(const std::string& mString);
};

