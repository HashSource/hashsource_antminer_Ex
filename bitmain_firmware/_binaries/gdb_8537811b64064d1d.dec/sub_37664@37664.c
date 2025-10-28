int __fastcall sub_37664(int a1, _DWORD *a2, __int64 a3, int a4, int a5)
{
  int v7; // r0
  int v8; // r0
  int v10; // r8
  int v11; // r0
  int v12; // r4
  const char *v13; // r0
  int v14; // r0
  int v15; // r1
  int v16; // [sp+0h] [bp-24h] BYREF

  v16 = HIDWORD(a3);
  v7 = sub_1DD5B4(a1);
  v8 = ((int (__fastcall *)(int))loc_165BE0)(v7);
  if ( !a3 )
    return 0;
  v10 = v8;
  if ( sub_1DC3FC(a4, a2[20]) )
    return -1;
  v11 = sub_230048(a4, &v16, a2[20]);
  if ( v11 )
  {
    if ( dword_487D4C )
    {
      v12 = *(_DWORD *)sub_242FF0(v11);
      v13 = (const char *)sub_98A18(a4, a5, *a2);
      sub_2594D8(v12, "Process record: error reading memory at addr = 0x%s len = %d.\n", v13, a2[20]);
    }
    return -1;
  }
  v14 = sub_15C278(&v16, a2[20], v10);
  v15 = a2[19];
  if ( v14 > 0 && v15 >= v14 )
    v15 = v14;
  return -(sub_1DC3FC(a3, v15) != 0);
}
