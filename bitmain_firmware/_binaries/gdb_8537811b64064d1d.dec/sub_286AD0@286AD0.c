int __fastcall sub_286AD0(int a1)
{
  char *v2; // r0
  char *v3; // r4
  int v4; // r7
  signed int v5; // r6
  int v6; // r5
  int v7; // r0
  char *v8; // t1
  int result; // r0
  const char *v10; // r4
  int v11; // r0
  int v12; // r0
  _BOOL4 v13; // r2

  v2 = (char *)sub_28D034(dword_48AE34);
  v3 = *(char **)(a1 + 4);
  if ( v3 )
  {
    v4 = a1 + 4;
    v5 = 1;
    v6 = 0;
    while ( 1 )
    {
      if ( dword_48ACC0 )
        v3 = sub_285308(v3);
      v7 = sub_2847C0(v3);
      v8 = *(char **)(v4 + 4);
      v4 += 4;
      v3 = v8;
      if ( v6 < v7 )
        v6 = v7;
      if ( !v3 )
        break;
      ++v5;
    }
    if ( off_48AD24 )
      return off_48AD24(a1, v5, v6);
    v13 = dword_470768 <= v5;
    if ( dword_470768 <= 0 )
      v13 = 0;
    if ( !v13
      || (sub_2945D0(v7),
          fprintf((FILE *)dword_48AAB0, "Display all %d possibilities? (y or n)", v5),
          fflush((FILE *)dword_48AAB0),
          sub_2848BC(0)) )
    {
      v12 = sub_286648((const char **)a1, v5, v6);
    }
    else
    {
      v12 = sub_2945D0(0);
    }
  }
  else
  {
    v10 = *(const char **)a1;
    if ( dword_48ACC0 )
    {
      v2 = sub_285308(*(const char **)a1);
      v10 = v2;
    }
    sub_2945D0(v2);
    v11 = sub_285424(v10, *(__int16 **)a1, 0);
    v12 = sub_2945D0(v11);
  }
  result = sub_28CC50(v12);
  dword_48AEF0 = 1;
  return result;
}
