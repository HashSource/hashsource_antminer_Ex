int __fastcall sub_1E83BC(int a1, int a2, unsigned __int64 a3, int a4, unsigned __int64 a5, int *a6)
{
  int v9; // r0
  int v10; // r5
  int v11; // r0
  unsigned __int8 **v12; // r8
  int v13; // r0
  size_t v14; // r9
  int v15; // r2
  char *v16; // r5
  int v17; // r3
  int v18; // r3
  char *v19; // r0
  int v20; // r5
  int v21; // r12
  int v23; // r1
  int v24; // r3
  int v25; // [sp+4h] [bp-30h]
  char *v26; // [sp+1Ch] [bp-18h]
  int v27; // [sp+24h] [bp-10h] BYREF
  unsigned int v28[3]; // [sp+28h] [bp-Ch] BYREF

  v9 = sub_16F67C(a1);
  v10 = ((int (__fastcall *)(int))loc_166694)(v9);
  v11 = sub_16F67C(v10);
  ((void (__fastcall *)(int))loc_1E2798)(v11);
  v12 = (unsigned __int8 **)dword_488C94;
  v13 = sub_1E347C((int *)algn_46DB24, &dword_46DB28);
  if ( a5 > a3 )
    return 0;
  if ( !a5 )
  {
    *a6 = a2;
    return 1;
  }
  if ( dword_4889B4 == 1 )
    return sub_230BB8(a1, a2, a3, HIDWORD(a3), a4, v25, a5, HIDWORD(a5), a6);
  v14 = v13;
  if ( dword_4889B4 )
  {
    if ( dword_4889B4 != 2 )
    {
LABEL_23:
      ((void (*)(void))loc_1630C)();
LABEL_24:
      sub_94708("Pattern is too large to transmit to remote target.");
    }
    if ( dword_4889B8 == 2 )
      return sub_230BB8(a1, a2, a3, HIDWORD(a3), a4, v25, a5, HIDWORD(a5), a6);
  }
  sub_1E8344(v13);
  v15 = v10 / 8;
  v16 = (char *)*v12;
  v26 = sub_98A18(a2, 0, v15, v17);
  v19 = sub_98A18(a3, SHIDWORD(a3), 8, v18);
  v20 = snprintf(v16, v14, "qSearch:memory:%s;%s;", v26, v19);
  v21 = sub_9960C(a4, a5, 1, (int)&(*v12)[v20], &v27, v14 - (v20 + 1));
  if ( v27 != a5 )
    goto LABEL_24;
  if ( sub_1E51EC((int)*v12, v20 + v21) < 0
    || sub_1E4EE0((char **)v12, (size_t *)v12 + 1, 0, 0, 0) < 0
    || sub_1E1790(*v12, dword_4889AC) != 1 )
  {
    if ( dword_4889B4 != 1 )
    {
      if ( !dword_4889B4 )
        return -1;
      if ( dword_4889B4 == 2 )
      {
        if ( dword_4889B8 == 2 )
          return sub_230BB8(a1, a2, a3, HIDWORD(a3), a4, v25, a5, HIDWORD(a5), a6);
        return -1;
      }
      goto LABEL_23;
    }
    return sub_230BB8(a1, a2, a3, HIDWORD(a3), a4, v25, a5, HIDWORD(a5), a6);
  }
  v23 = (int)*v12;
  v24 = **v12;
  if ( v24 == 48 )
    return 0;
  if ( v24 != 49 || *(_BYTE *)(v23 + 1) != 44 )
    sub_94708("Unknown qSearch:memory reply: %s", (const char *)v23);
  sub_991B0((unsigned __int8 *)(v23 + 2), v28);
  *a6 = v28[0];
  return 1;
}
