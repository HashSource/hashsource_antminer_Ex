int __fastcall push_work_grin29(int a1, __int64 *a2)
{
  __int64 v4; // r0
  __int64 v5; // r6
  int v6; // r2
  void (__fastcall *v7)(int, _QWORD *); // r3
  _QWORD v9[2]; // [sp+0h] [bp-110h] BYREF
  _BYTE dest[238]; // [sp+10h] [bp-100h] BYREF
  int v11; // [sp+FEh] [bp-12h]
  int v12; // [sp+102h] [bp-Eh]
  int v13; // [sp+106h] [bp-Ah]
  int v14; // [sp+10Ah] [bp-6h]

  v4 = strtoll((const char *)*((_DWORD *)a2 + 288), 0, 10);
  v5 = *a2;
  v9[1] = v4;
  v9[0] = v5;
  v12 = dword_167098;
  v11 = 0;
  memcpy(dest, a2 + 1, sizeof(dest));
  dump_target_diff((int)(a2 + 129));
  v6 = *((_DWORD *)a2 + 265);
  v7 = *(void (__fastcall **)(int, _QWORD *))(a1 + 24);
  v13 = *((_DWORD *)a2 + 264);
  v14 = v6;
  v7(a1, v9);
  return 0;
}
