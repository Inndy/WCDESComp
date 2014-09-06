// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'WCDESComp.pas' rev: 6.00

#ifndef WCDESCompHPP
#define WCDESCompHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Wcdescomp
{
//-- type declarations -------------------------------------------------------
typedef Byte TKeyByte[6];

#pragma option push -b-
enum TDesMode { dmEncry, dmDecry };
#pragma option pop

class DELPHICLASS TWCDESComp;
class PASCALIMPLEMENTATION TWCDESComp : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
private:
	Byte subKey[16][6];
	void __fastcall ConversePermutation(Byte * inData, const int inData_Size);
	void __fastcall CycleMove(Byte * inData, const int inData_Size, Byte bitMove);
	void __fastcall DesData(TDesMode desMode, const Byte * inData, const int inData_Size, Byte * outData, const int outData_Size);
	void __fastcall Encry(const Byte * inData, const int inData_Size, const Byte * subKey, const int subKey_Size, Byte * outData, const int outData_Size);
	void __fastcall Expand(const Byte * inData, const int inData_Size, Byte * outData, const int outData_Size);
	void __fastcall InitPermutation(Byte * inData, const int inData_Size);
	void __fastcall MakeKey(const Byte * inKey, const int inKey_Size, Byte * outKey, const int outKey_Size);
	void __fastcall Permutation(Byte * inData, const int inData_Size);
	void __fastcall PermutationChoose1(const Byte * inData, const int inData_Size, Byte * outData, const int outData_Size);
	void __fastcall PermutationChoose2(const Byte * inData, const int inData_Size, Byte * outData, const int outData_Size);
	Byte __fastcall Si(Byte s, Byte inByte);
	
public:
	__fastcall virtual TWCDESComp(Classes::TComponent* AOwner);
	__fastcall virtual ~TWCDESComp(void);
	AnsiString __fastcall EncryStr(AnsiString Str, AnsiString Key);
	AnsiString __fastcall DecryStr(AnsiString Str, AnsiString Key);
	AnsiString __fastcall EncryStrHex(AnsiString Str, AnsiString Key);
	AnsiString __fastcall DecryStrHex(AnsiString StrHex, AnsiString Key);
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE Byte BitIP[64];
extern PACKAGE Byte BitCP[64];
extern PACKAGE int BitExp[48];
extern PACKAGE Byte BitPM[32];
extern PACKAGE Byte sBox[8][64];
extern PACKAGE Byte BitPMC1[56];
extern PACKAGE Byte BitPMC2[48];
extern PACKAGE void __fastcall Register(void);

}	/* namespace Wcdescomp */
using namespace Wcdescomp;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WCDESComp
