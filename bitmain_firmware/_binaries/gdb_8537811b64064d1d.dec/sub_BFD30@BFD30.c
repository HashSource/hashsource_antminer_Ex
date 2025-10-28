_DWORD *__fastcall sub_BFD30(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  _BYTE *v8; // r4
  char v9; // r3
  _DWORD v11[2]; // [sp+0h] [bp-14h] BYREF
  char v12; // [sp+8h] [bp-Ch]

  v8 = sub_98394(0x38u);
  sub_C0928(v8, a3);
  v9 = v8[48];
  *((_DWORD *)v8 + 13) = a5;
  v8[48] = v9 | 1;
  sub_BD35C((int)v8, (int)v11, a4);
  if ( v12 )
  {
    *a1 = 0;
    sub_C0988(v8);
    sub_33AC2C(v8);
  }
  else
  {
    sub_BD9F8((int)v8, v11);
    sub_C09E0(v8, 39);
    *a1 = v8;
  }
  return a1;
}
