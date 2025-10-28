void __fastcall sub_1A0B1C(const void *a1)
{
  void *v1; // r8
  unsigned __int8 *v2; // r3
  int v3; // r0
  int v4; // r0
  char *v5; // r6
  unsigned __int8 *v6; // r3
  int v7; // r0
  char *v8; // r3
  int v9; // r2
  int v10; // r7
  int v11; // r4
  int v12; // r4
  int v13; // r4
  int v14; // r5
  int v15; // r4
  const char *v16; // r9
  char *v17; // r4
  const char *v18; // t1
  unsigned __int8 *i; // r3
  int v21; // r0
  int v22; // r1
  int v23; // r2
  int v24; // r0
  int v25; // r0
  const void *v26[2]; // [sp+Ch] [bp-20h] BYREF
  int v27; // [sp+14h] [bp-18h] BYREF
  int v28; // [sp+18h] [bp-14h] BYREF
  unsigned int v29; // [sp+1Ch] [bp-10h]
  int v30; // [sp+20h] [bp-Ch]
  int v31; // [sp+24h] [bp-8h]

  v26[0] = a1;
  v27 = 0;
  if ( !a1 )
    sub_94708("usage: macro define NAME[(ARGUMENT-LIST)] [REPLACEMENT-LIST]");
  v1 = sub_92564((int)sub_1A01B0, (int)&v28);
  sub_92564((int)sub_2589E0, (int)&v27);
  v2 = (unsigned __int8 *)v26[0];
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v28 = 0;
  while ( sub_1A2840(*v2) )
    v2 = (unsigned __int8 *)++v26[0];
  v27 = (int)sub_1A0994(v26, 0);
  if ( !v27 )
    sub_94708("Invalid macro name.");
  v3 = *(unsigned __int8 *)v26[0];
  if ( v3 == 40 )
  {
    v5 = (char *)sub_93050(0x14u);
    v30 = (int)v5;
    LOBYTE(v29) = v29 | 1;
    v6 = (unsigned __int8 *)++v26[0];
    v29 &= 0x80000001;
    while ( 1 )
    {
      v7 = sub_1A2840(*v6);
      v8 = (char *)v26[0];
      if ( !v7 )
        break;
      v6 = (unsigned __int8 *)++v26[0];
    }
    v9 = *(unsigned __int8 *)v26[0];
    v10 = 5;
    while ( v9 != 41 )
    {
      v11 = (int)(2 * v29) >> 2;
      if ( v11 == v10 )
      {
        v10 *= 2;
        v5 = (char *)sub_93078(v5, 4 * v10);
        v30 = (int)v5;
        v11 = (int)(2 * v29) >> 2;
      }
      *(_DWORD *)&v5[4 * v11] = sub_1A0994(v26, 1);
      v12 = (int)(2 * v29) >> 2;
      if ( !*(_DWORD *)&v5[4 * v12] )
        sub_94708("Macro is missing an argument.");
      v13 = (4 * (v12 + 1)) >> 2;
      v14 = v13 - 2;
      v29 = v29 & 0x80000001 | (2 * (v13 & 0x3FFFFFFF));
      if ( v13 - 2 >= 0 )
      {
        v15 = v13 + 0x3FFFFFFF;
        v16 = *(const char **)&v5[4 * v15];
        v17 = &v5[4 * v15];
        do
        {
          v18 = (const char *)*((_DWORD *)v17 - 1);
          v17 -= 4;
          if ( !strcmp(v18, v16) )
            sub_94708("Two macro arguments with identical names.");
        }
        while ( v14-- != 0 );
      }
      for ( i = (unsigned __int8 *)v26[0]; ; i = (unsigned __int8 *)++v26[0] )
      {
        v21 = sub_1A2840(*i);
        v8 = (char *)v26[0];
        if ( !v21 )
          break;
      }
      v23 = *(unsigned __int8 *)v26[0];
      if ( v23 != 44 )
      {
        if ( v23 != 41 )
          sub_94708("',' or ')' expected at end of macro arguments.", v22, v23, v26[0]);
        break;
      }
      do
      {
        v26[0] = v8 + 1;
        v25 = sub_1A2840((unsigned __int8)v8[1]);
        v8 = (char *)v26[0];
      }
      while ( v25 );
      v9 = *(unsigned __int8 *)v26[0];
    }
    v26[0] = v8 + 1;
    if ( sub_1A2840((unsigned __int8)v8[1]) )
    {
      do
        ++v26[0];
      while ( sub_1A2840(*(unsigned __int8 *)v26[0]) );
    }
    v24 = ((int (__fastcall *)(int))loc_1A34C4)(dword_487A1C);
    sub_1A3BCC(v24, -1, v27, (int)(2 * v29) >> 2, v30, (char *)v26[0]);
    sub_92648(v1);
  }
  else
  {
    while ( sub_1A2840(v3) )
      v3 = *(unsigned __int8 *)++v26[0];
    v4 = ((int (__fastcall *)(int))loc_1A34C4)(dword_487A1C);
    sub_1A3B54(v4, -1, v27, v26[0]);
    sub_92648(v1);
  }
}
