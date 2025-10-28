FILE *__fastcall sub_1F0CD4(const char *a1, int a2, int a3)
{
  int v5; // r0
  int v6; // r0
  FILE **v7; // r0
  size_t v8; // r8
  void *v9; // r6
  _DWORD *v10; // r11
  unsigned __int64 v11; // r4
  int v12; // r0
  signed int v13; // r0
  int v14; // r0
  FILE *result; // r0
  void *v16; // [sp+10h] [bp-1Ch]
  int v18; // [sp+1Ch] [bp-10h] BYREF
  int v19; // [sp+20h] [bp-Ch] BYREF
  FILE *s; // [sp+24h] [bp-8h] BYREF

  v5 = sub_16F67C((int)a1);
  ((void (__fastcall *)(int))loc_1E2798)(v5);
  if ( !*(_DWORD *)(dword_488C94 + 56) )
    sub_94708("command can only be used with remote target");
  v6 = sub_23195C(2);
  v18 = sub_1E6320(v6, 0, a1, 0, 0, 0, &v19);
  if ( v18 == -1 )
    sub_1E1554(v19);
  v7 = sub_96818(&s, a2, "wb");
  if ( !s )
    sub_258B2C(a2);
  v8 = sub_1E28B8((int)v7);
  v9 = sub_93050(v8);
  v16 = sub_92564((int)sub_1E12DC, (int)v9);
  v10 = sub_92564((int)sub_1E6604, (int)&v18);
  v11 = 0;
  while ( 1 )
  {
    v12 = sub_23195C(2);
    v13 = sub_1E703C(v12, v18, v9, v8, v11, &v19);
    if ( !v13 )
      break;
    if ( v13 == -1 )
      sub_1E1554(v19);
    v11 += v13;
    if ( !fwrite(v9, 1u, v13, s) )
      sub_258B2C(a2);
  }
  sub_92668(v10);
  v14 = sub_23195C(2);
  if ( sub_1E6570(v14, v18, &v19) )
    sub_1E1554(v19);
  if ( a3 )
    sub_259F38("Successfully fetched file \"%s\".\n", a1);
  sub_92648(v16);
  result = s;
  if ( s )
    return (FILE *)fclose(s);
  return result;
}
