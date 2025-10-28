int __fastcall push_work_grin32(int a1, __int64 *a2)
{
  __int64 v4; // r0
  __int64 v5; // r6
  void *v6; // r0
  int v7; // r2
  void (__fastcall *v8)(int, _QWORD *); // r3
  _QWORD v10[2]; // [sp+0h] [bp-110h] BYREF
  _BYTE dest[238]; // [sp+10h] [bp-100h] BYREF
  int v12; // [sp+FEh] [bp-12h]
  int v13; // [sp+102h] [bp-Eh]
  int v14; // [sp+106h] [bp-Ah]
  int v15; // [sp+10Ah] [bp-6h]

  v4 = strtoll((const char *)*((_DWORD *)a2 + 288), 0, 10);
  v5 = *a2;
  v10[1] = v4;
  v10[0] = v5;
  v13 = dword_1670FC;
  v12 = 0;
  v6 = memcpy(dest, a2 + 1, sizeof(dest));
  sub_43978((int)v6);
  v7 = *((_DWORD *)a2 + 265);
  v8 = *(void (__fastcall **)(int, _QWORD *))(a1 + 24);
  v14 = *((_DWORD *)a2 + 264);
  v15 = v7;
  v8(a1, v10);
  return 0;
}
