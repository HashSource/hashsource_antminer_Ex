int __fastcall sub_31A9C(int a1)
{
  int v2; // r9
  int v3; // r0
  int v4; // r6
  int v5; // r7
  int v6; // r5
  int v7; // r8
  int v8; // r0
  int v9; // r2
  _DWORD *v10; // r10
  int v11; // r4
  int v12; // r0
  int v13; // r0
  int v14; // r0
  const char *v16; // r0
  int v17; // [sp+4h] [bp-10h]
  int v18; // [sp+8h] [bp-Ch] BYREF
  int v19; // [sp+Ch] [bp-8h] BYREF

  v2 = sub_31270();
  v3 = sub_16F67C();
  v4 = *(_DWORD *)(sub_1780DC(v3) + 152);
  v5 = *(_DWORD *)(v4 + 20);
  v6 = sub_93050(v5);
  v7 = sub_92564(198000, v6);
  v8 = sub_31088();
  if ( a1 )
    v9 = 2;
  else
    v9 = 0;
  v10 = (_DWORD *)v8;
  v17 = v9;
  if ( !*(_DWORD *)(dword_487D2C + 32) || (v11 = sub_25A40C("Attempt to reload symbols from process? ")) != 0 )
  {
    *v10 = 0;
    sub_316AC(v10);
    v11 = v12;
    if ( v12 )
    {
      v13 = sub_319EC(v10);
      v11 = v13;
      if ( v13 )
      {
        sub_FA86C(v13 + *(_DWORD *)(v2 + 40), v6, v5);
        v14 = sub_15AED0(v6, v4);
        v11 = v14;
        if ( v14 )
        {
          ((void (__fastcall *)(int, int *, int, int *))loc_2300A0)(v14, &v18, 511, &v19);
          sub_92564(&loc_30570, v18);
          if ( v19 )
          {
            v16 = (const char *)sub_6FFC0(v19);
            v11 = 0;
            sub_946D8("failed to read exec filename from attached file: %s", v16);
            sub_92648(v7);
            return v11;
          }
          v11 = 1;
          sub_213980(v18, v17);
        }
      }
    }
  }
  sub_92648(v7);
  return v11;
}
