// �ȉ��� ifdef �u���b�N�� DLL ����̃G�N�X�|�[�g��e�Ղɂ���}�N�����쐬���邽�߂� 
// ��ʓI�ȕ��@�ł��B���� DLL ���̂��ׂẴt�@�C���́A�R�}���h ���C���Œ�`���ꂽ WINPIPE_EXPORTS
// �V���{�����g�p���ăR���p�C������܂��B���̃V���{���́A���� DLL ���g�p����v���W�F�N�g�ł͒�`�ł��܂���B
// �\�[�X�t�@�C�������̃t�@�C�����܂�ł��鑼�̃v���W�F�N�g�́A 
// WINPIPE_API �֐��� DLL ����C���|�[�g���ꂽ�ƌ��Ȃ��̂ɑ΂��A���� DLL �́A���̃}�N���Œ�`���ꂽ
// �V���{�����G�N�X�|�[�g���ꂽ�ƌ��Ȃ��܂��B
#ifdef WINPIPE_EXPORTS
#define WINPIPE_API __declspec(dllexport)
#else
#define WINPIPE_API __declspec(dllimport)
#endif

#include "Pipe.h"

extern "C" WINPIPE_API Pipe *g_pipe;
extern "C" WINPIPE_API char  *g_buf;

extern "C" WINPIPE_API void create(int *readpipename, int *writepipename);
extern "C" WINPIPE_API void destroy();
extern "C" WINPIPE_API int read();
extern "C" WINPIPE_API void write(int *);

extern "C" WINPIPE_API int *get_buf();
