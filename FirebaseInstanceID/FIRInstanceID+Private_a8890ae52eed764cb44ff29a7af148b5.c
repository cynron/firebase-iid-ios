/* This file has been generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2015 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

int __fastcall _FIRInstanceID_Private__cachedCheckinPreferences_(void *a1);
int __fastcall _FIRInstanceID_Private__fetchCheckinInfoWithHandler__(void *a1, __int64 a2, __int64 a3);
// int __usercall _FIRInstanceID_Private__appInstanceID__@<eax>(__int64 a1@<rax>, __int64 a2@<rdx>, void *a3@<rdi>);
// int __fastcall objc_autoreleaseReturnValue(_QWORD); weak
// void *objc_msgSend(void *, const char *, ...); idb
// int __fastcall objc_release(_QWORD); weak
// int __fastcall objc_retainAutoreleasedReturnValue(_QWORD); weak

//-------------------------------------------------------------------------
// Data declarations

__int64 (__fastcall *paTokenmanager)() = &aTokenmanager; // weak
// extern int (__fastcall *objc_retain)(_QWORD); weak


//----- (0000000000000000) ----------------------------------------------------
int __fastcall _FIRInstanceID_Private__cachedCheckinPreferences_(void *a1)
{
  void *v1; // rax@1
  void *v2; // rax@1
  void *v3; // r14@1
  void *v4; // rax@1
  void *v5; // rax@1
  void *v6; // rbx@1
  void *v7; // rax@1
  __int64 v8; // rax@1
  __int64 v9; // r15@1

  v1 = objc_msgSend(a1, (const char *)paTokenmanager);
  LODWORD(v2) = objc_retainAutoreleasedReturnValue(v1);
  v3 = v2;
  v4 = objc_msgSend(v2, (const char *)*(&paTokenmanager + 1));
  LODWORD(v5) = objc_retainAutoreleasedReturnValue(v4);
  v6 = v5;
  v7 = objc_msgSend(v5, (const char *)*(&paTokenmanager + 2));
  LODWORD(v8) = objc_retainAutoreleasedReturnValue(v7);
  v9 = v8;
  objc_release(v6);
  objc_release(v3);
  return objc_autoreleaseReturnValue(v9);
}
// 1F8: using guessed type __int64 (__fastcall *paTokenmanager)();
// 1798: using guessed type int __fastcall objc_autoreleaseReturnValue(_QWORD);
// 17A8: using guessed type int __fastcall objc_release(_QWORD);
// 17B8: using guessed type int __fastcall objc_retainAutoreleasedReturnValue(_QWORD);

//----- (000000000000007A) ----------------------------------------------------
int __fastcall _FIRInstanceID_Private__fetchCheckinInfoWithHandler__(void *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax@1
  __int64 v4; // r15@1
  void *v5; // rax@1
  void *v6; // rax@1
  void *v7; // r14@1
  void *v8; // rax@1
  void *v9; // rax@1
  void *v10; // rbx@1

  LODWORD(v3) = objc_retain(a3);
  v4 = v3;
  v5 = objc_msgSend(a1, (const char *)paTokenmanager);
  LODWORD(v6) = objc_retainAutoreleasedReturnValue(v5);
  v7 = v6;
  v8 = objc_msgSend(v6, (const char *)*(&paTokenmanager + 1));
  LODWORD(v9) = objc_retainAutoreleasedReturnValue(v8);
  v10 = v9;
  objc_msgSend(v9, (const char *)*(&paTokenmanager + 3), v4);
  objc_release(v4);
  objc_release(v10);
  return objc_release(v7);
}
// 1F8: using guessed type __int64 (__fastcall *paTokenmanager)();
// 17A8: using guessed type int __fastcall objc_release(_QWORD);
// 17B0: using guessed type int (__fastcall *objc_retain)(_QWORD);
// 17B8: using guessed type int __fastcall objc_retainAutoreleasedReturnValue(_QWORD);

//----- (0000000000000101) ----------------------------------------------------
int __usercall _FIRInstanceID_Private__appInstanceID__@<eax>(__int64 a1@<rax>, __int64 a2@<rdx>, void *a3@<rdi>)
{
  __int64 v3; // r14@1
  void *v4; // rax@1
  void *v5; // rax@1
  void *v6; // rbx@1
  void *v7; // rax@1
  __int64 v8; // rax@1
  __int64 v9; // r14@1

  v3 = a2;
  v4 = objc_msgSend(a3, (const char *)*(&paTokenmanager + 4), a1);
  LODWORD(v5) = objc_retainAutoreleasedReturnValue(v4);
  v6 = v5;
  v7 = objc_msgSend(v5, (const char *)*(&paTokenmanager + 5), v3);
  LODWORD(v8) = objc_retainAutoreleasedReturnValue(v7);
  v9 = v8;
  objc_release(v6);
  return objc_autoreleaseReturnValue(v9);
}
// 1F8: using guessed type __int64 (__fastcall *paTokenmanager)();
// 1798: using guessed type int __fastcall objc_autoreleaseReturnValue(_QWORD);
// 17A8: using guessed type int __fastcall objc_release(_QWORD);
// 17B8: using guessed type int __fastcall objc_retainAutoreleasedReturnValue(_QWORD);

// ALL OK, 3 function(s) have been successfully decompiled
