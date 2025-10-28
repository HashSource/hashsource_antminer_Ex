unsigned __int64 *__fastcall sub_22DF18(int a1, char a2, int a3, int a4, unsigned int a5)
{
  unsigned __int64 *result; // r0
  char s[112]; // [sp+18h] [bp-C4h] BYREF
  unsigned __int64 v9; // [sp+88h] [bp-54h] BYREF
  unsigned __int64 v10; // [sp+90h] [bp-4Ch] BYREF
  int v11; // [sp+9Ch] [bp-40h]
  __int64 v12; // [sp+A0h] [bp-3Ch]
  __int64 v13; // [sp+A8h] [bp-34h]
  int v14; // [sp+B0h] [bp-2Ch]
  unsigned int v15; // [sp+B4h] [bp-28h]
  int v16; // [sp+B8h] [bp-24h]
  unsigned int i; // [sp+BCh] [bp-20h]

  v16 = *(_DWORD *)(a1 + 128);
  v15 = a3 + 8 * v16;
  v14 = 128 >> a3;
  s[v16] = a2 & -(128 >> a3) | (128 >> a3);
  v13 = *(_QWORD *)(a1 + 232) + v15;
  v12 = *(_QWORD *)(a1 + 240);
  if ( v16 || a3 )
  {
    if ( *(_QWORD *)(a1 + 232) )
    {
      *(_QWORD *)(a1 + 232) -= 1024 - v15;
    }
    else
    {
      *(_QWORD *)(a1 + 232) = v15 - 1024LL;
      --*(_QWORD *)(a1 + 240);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 232) = -1024;
    *(_QWORD *)(a1 + 240) = -1;
  }
  if ( v15 > 0x37E )
  {
    memset(&s[v16 + 1], 0, 127 - v16);
    sub_22BC4C((unsigned __int64 *)a1, &s[v16], 128 - v16);
    *(_QWORD *)(a1 + 232) = -1024;
    *(_QWORD *)(a1 + 240) = -1;
    memset(s, 0, sizeof(s));
    if ( a5 == 8 )
      s[111] = 1;
    sub_226190(&v9, (int)&v9, v12, HIDWORD(v12));
    sub_226190(&v10, (int)&v10, v13, HIDWORD(v13));
    result = sub_22BC4C((unsigned __int64 *)a1, s, 0x80u);
  }
  else
  {
    memset(&s[v16 + 1], 0, 111 - v16);
    if ( a5 == 8 )
      s[111] |= 1u;
    sub_226190(&v9, (int)&v9, v12, HIDWORD(v12));
    sub_226190(&v10, (int)&v10, v13, HIDWORD(v13));
    result = sub_22BC4C((unsigned __int64 *)a1, &s[v16], 128 - v16);
  }
  v11 = a4;
  for ( i = 0; i < a5; ++i )
    result = (unsigned __int64 *)sub_226058(
                                   (_BYTE *)(v11 + 8 * i),
                                   v11 + 8 * i,
                                   *(_DWORD *)(a1 + 8 * (i + 17)),
                                   *(_DWORD *)(a1 + 8 * (i + 17) + 4));
  return result;
}
