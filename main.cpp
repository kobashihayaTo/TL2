#include <cstdio>
#include <cstdlib>
#include <DirectXTex.h>
#include "TextureConverter.h"

//コマンドライン引数
enum Argument {
	kApplicationPath,
	kFilePath,

	NumArgument
};

int main(int argc,char* argv[]) {

	assert(argc >= NumArgument);
	//comライブラリの初期化
	HRESULT hr = CoInitializeEx(nullptr, COINIT_MULTITHREADED);
	assert(SUCCEEDED(hr));

	//テクスチャコンバータ
	TextureConverter converter;

	//テクスチャ変換
	converter.ConvertTextureWICToDDS(argv[kFilePath]);

	//comライブラリの終了
	CoUninitialize();

	system("pause");
	return 0;
}