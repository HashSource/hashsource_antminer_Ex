int __fastcall sub_260E0C(_DWORD *a1)
{
  _DWORD *v2; // r5
  int v3; // r1
  int v4; // r5
  __int64 v6; // r0
  int v7; // r10
  int v8; // r1
  __int64 v9; // kr00_8
  int v10; // r11
  void *v11; // r8
  const void *v12; // r0
  __int64 v13; // r2
  __int64 v14; // [sp+8h] [bp-14h] BYREF
  __int64 v15; // [sp+10h] [bp-Ch] BYREF

  v2 = (_DWORD *)sub_171280(a1);
  if ( sub_173704(v2) || sub_173748(v2) )
  {
    v4 = sub_26DB1C(a1, v3, 1, 0);
  }
  else
  {
    HIDWORD(v6) = v2[6];
    if ( (*(_DWORD *)HIDWORD(v6) & 0x100FF) != 0x10002 )
      goto LABEL_13;
    v7 = sub_171280(*(_DWORD **)(HIDWORD(v6) + 20));
    if ( !sub_171B58((int)v2, &v14, &v15) )
      sub_94708("Could not determine the vector bounds");
    v4 = sub_26BBA8(a1);
    v8 = HIDWORD(v14);
    if ( (((unsigned __int64)(v15 - v14) >> 32) & 0x80000000) == 0LL )
    {
      v9 = 1;
      do
      {
        v10 = sub_260E0C(v7, v8);
        v11 = (void *)(sub_26E97C(v4) + *(_DWORD *)(v7 + 20) * (v9 - 1));
        v12 = (const void *)sub_26E760(v10);
        memcpy(v11, v12, *(_DWORD *)(v7 + 20));
        v13 = v9;
        v8 = v14;
        ++v9;
      }
      while ( v15 - v14 >= v13 );
    }
  }
  if ( *(_DWORD *)nullsub_31(v4) )
  {
    v6 = sub_94728(
           (int)"valops.c",
           891,
           "%s: Assertion `%s' failed.",
           "value* value_one(type*)",
           "VALUE_LVAL (val) == not_lval");
LABEL_13:
    sub_94708("Not a numeric type.", HIDWORD(v6));
  }
  return v4;
}
