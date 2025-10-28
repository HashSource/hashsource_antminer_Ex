int __fastcall sub_25DDA8(int a1)
{
  _DWORD *v1; // r0
  _DWORD *v2; // r9
  int v3; // r2
  int v4; // r8
  int v5; // r9
  __int64 v6; // r4
  int v7; // r0
  int v8; // r10
  void *v9; // r11
  const void *v10; // r0
  __int64 v12; // r0
  int v13; // [sp+4h] [bp-18h]
  __int64 v14; // [sp+8h] [bp-14h] BYREF
  __int64 v15; // [sp+10h] [bp-Ch] BYREF

  v13 = sub_26EA4C(a1);
  v1 = (_DWORD *)sub_26BC98(v13);
  v2 = (_DWORD *)sub_171280(v1);
  if ( sub_173704(v2) )
  {
    v12 = sub_26EB44(v13);
    return sub_26DB1C(v2, HIDWORD(v12), ~(_DWORD)v12, ~HIDWORD(v12));
  }
  else
  {
    v3 = v2[6];
    if ( (*(_DWORD *)v3 & 0x100FF) != 0x10002 )
      sub_94708("Argument to complement operation not an integer, boolean.");
    v4 = sub_171280(*(_DWORD **)(v3 + 20));
    if ( !sub_171B58((int)v2, &v14, &v15) )
      sub_94708("Could not determine the vector bounds");
    v5 = sub_26BBA8(v2);
    if ( (((unsigned __int64)(v15 - v14) >> 32) & 0x80000000) == 0LL )
    {
      v6 = 0;
      do
      {
        v7 = sub_25CE34(v13, v6);
        v8 = sub_25DDA8(v7);
        v9 = (void *)(sub_26E97C(v5) + *(_DWORD *)(v4 + 20) * v6);
        v10 = (const void *)sub_26E760(v8);
        memcpy(v9, v10, *(_DWORD *)(v4 + 20));
        ++v6;
      }
      while ( v15 - v14 >= v6 );
    }
    return v5;
  }
}
