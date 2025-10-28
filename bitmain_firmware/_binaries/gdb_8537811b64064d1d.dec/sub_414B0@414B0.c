int __fastcall sub_414B0(_DWORD *a1)
{
  _DWORD *v1; // r4
  int v2; // r5
  int v4; // r0
  _DWORD *v5; // r6
  int v6; // r0
  int v7; // r7
  const char *v8; // r4
  const char *v9; // r0
  int v10; // r6
  const char *v11; // r0
  int v12; // r5
  int v13; // r5
  const char *v14; // r4
  const char *v15; // r0
  _BYTE v16[12]; // [sp+4h] [bp-20h] BYREF
  _BYTE v17[20]; // [sp+10h] [bp-14h] BYREF

  v1 = a1;
  if ( a1[15] != 11 )
    goto LABEL_2;
  v4 = a1[8];
  if ( v4 )
  {
    a1 = (_DWORD *)sub_99B14(BYTE1(v4));
    v5 = a1;
    goto LABEL_7;
  }
  if ( !sub_232978() || ((int (__fastcall *)(_DWORD, _DWORD, _DWORD))loc_23F224)(*v1, v1[1], v1[2]) )
  {
    a1 = (_DWORD *)sub_232978();
    if ( a1 )
      goto LABEL_2;
    sub_1882AC(v16, v17);
    v12 = sub_98F90(v1);
    a1 = (_DWORD *)sub_98F90(v16);
    if ( (_DWORD *)v12 != a1 )
      goto LABEL_2;
    a1 = (_DWORD *)sub_23E430(*v1, v1[1], v1[2]);
    goto LABEL_17;
  }
  a1 = (_DWORD *)sub_23E430(*v1, v1[1], v1[2]);
  if ( !a1[42] )
  {
LABEL_17:
    v5 = (_DWORD *)a1[36];
    goto LABEL_7;
  }
  v5 = (_DWORD *)a1[39];
LABEL_7:
  if ( v5 )
  {
    v6 = sub_189000(v5);
    v2 = v6;
    if ( v6 )
    {
      if ( dword_47202C )
      {
        v13 = *(_DWORD *)sub_242FF0(v6);
        v14 = (const char *)sub_230984(*v1, v1[1], v1[2]);
        v15 = (const char *)sub_99A50(v5);
        sub_2594D8(v13, "GPT: lwp %s has pending signal %s\n", v14, v15);
      }
      return sub_99CF4(v5);
    }
    if ( dword_47202C )
    {
      v7 = *(_DWORD *)sub_242FF0(0);
      v8 = (const char *)sub_230984(*v1, v1[1], v1[2]);
      v9 = (const char *)sub_99A50(v5);
      sub_2594D8(v7, "GPT: lwp %s had signal %s, but it is in no pass state\n", v8, v9);
      return v2;
    }
    return 0;
  }
LABEL_2:
  if ( !dword_47202C )
    return 0;
  v10 = *(_DWORD *)sub_242FF0(a1);
  v11 = (const char *)sub_230984(*v1, v1[1], v1[2]);
  sub_2594D8(v10, "GPT: lwp %s has no pending signal\n", v11);
  return 0;
}
