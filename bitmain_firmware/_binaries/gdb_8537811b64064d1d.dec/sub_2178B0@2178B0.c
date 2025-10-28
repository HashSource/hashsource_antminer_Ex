int __fastcall sub_2178B0(int a1)
{
  int v1; // r0
  int v2; // r3
  int v3; // r0
  _DWORD *v4; // r5
  _DWORD *i; // r4
  int v6; // r3
  int v7; // r2
  int (__fastcall *v8)(_DWORD *, int **, int (*)(), int, char *, int (*)(), _DWORD, _DWORD, int); // r9
  int v9; // r0
  char v11[4]; // [sp+18h] [bp-2Ch] BYREF
  int v12; // [sp+1Ch] [bp-28h] BYREF
  int *v13; // [sp+20h] [bp-24h] BYREF
  int *v14; // [sp+24h] [bp-20h] BYREF
  int **v15; // [sp+28h] [bp-1Ch]
  int (*v16)(); // [sp+2Ch] [bp-18h]
  char *v17; // [sp+30h] [bp-14h]
  int (*v18)(); // [sp+34h] [bp-10h]
  int v19; // [sp+38h] [bp-Ch]
  int v20; // [sp+3Ch] [bp-8h]

  v13 = 0;
  v12 = 0;
  sub_25B104(&v13, a1);
  if ( v13 && (v1 = *v13) != 0 )
  {
    v2 = v13[1];
    v12 = *v13;
    if ( v2 )
      sub_94708("Extra arguments after regexp.");
    v3 = re_comp(v1);
  }
  else
  {
    v3 = v12;
  }
  v4 = (_DWORD *)dword_487D28;
  if ( dword_487D28 )
  {
    do
    {
      for ( i = (_DWORD *)v4[9]; i; i = (_DWORD *)*i )
      {
        v6 = i[33];
        if ( v6 )
        {
          v7 = *(_DWORD *)(v6 + 40);
          v14 = &v12;
          v16 = sub_218B54;
          v8 = *(int (__fastcall **)(_DWORD *, int **, int (*)(), int, char *, int (*)(), _DWORD, _DWORD, int))(v7 + 48);
          v15 = &v14;
          v9 = sub_21C810(v3);
          v19 = 0;
          v20 = 0;
          v18 = sub_2178A8;
          v17 = v11;
          v3 = v8(i, v15, v16, v9, v11, sub_2178A8, 0, 0, 3);
        }
      }
      v4 = (_DWORD *)*v4;
    }
    while ( v4 );
  }
  return sub_31DAF8(v13);
}
