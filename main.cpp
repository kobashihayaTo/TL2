#include <cstdio>
#include <cstdlib>
#include <DirectXTex.h>
#include "TextureConverter.h"

//�R�}���h���C������
enum Argument {
	kApplicationPath,
	kFilePath,

	NumArgument
};

int main(int argc,char* argv[]) {

	assert(argc >= NumArgument);
	//com���C�u�����̏�����
	HRESULT hr = CoInitializeEx(nullptr, COINIT_MULTITHREADED);
	assert(SUCCEEDED(hr));

	//�e�N�X�`���R���o�[�^
	TextureConverter converter;

	//�e�N�X�`���ϊ�
	converter.ConvertTextureWICToDDS(argv[kFilePath]);

	//com���C�u�����̏I��
	CoUninitialize();

	system("pause");
	return 0;
}