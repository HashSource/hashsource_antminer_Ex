int __fastcall push_work_grin32(int a1, __int64 *a2)
{
  __int64 v4; // r0
  int *v5; // r3
  __int64 v6; // r6
  int v7; // r3
  int v8; // r2
  void (__fastcall *v9)(int, _QWORD *); // r3
  _QWORD v11[2]; // [sp+0h] [bp-110h] BYREF
  _BYTE dest[238]; // [sp+10h] [bp-100h] BYREF
  int v13; // [sp+FEh] [bp-12h]
  int v14; // [sp+102h] [bp-Eh]
  int v15; // [sp+106h] [bp-Ah]
  int v16; // [sp+10Ah] [bp-6h]

  v4 = strtoll((const char *)*((_DWORD *)a2 + 288), 0, 10);
  LOWORD(v5) = 24812;
  v6 = *a2;
  HIWORD(v5) = (unsigned int)&byte_164FC4 >> 16;
  v11[1] = v4;
  v7 = *v5;
  v11[0] = v6;
  v14 = v7;
  v13 = 0;
  memcpy(dest, a2 + 1, sizeof(dest));
  sub_43154();
  v8 = *((_DWORD *)a2 + 265);
  v9 = *(void (__fastcall **)(int, _QWORD *))(a1 + 24);
  v15 = *((_DWORD *)a2 + 264);
  v16 = v8;
  v9(a1, v11);
  return 0;
}
