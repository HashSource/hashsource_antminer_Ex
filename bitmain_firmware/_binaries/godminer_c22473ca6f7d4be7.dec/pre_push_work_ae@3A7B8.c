int __fastcall pre_push_work_ae(int a1, unsigned __int8 *a2, int a3)
{
  _DWORD *v3; // r0
  unsigned __int8 *v4; // r12
  int v5; // r3
  _BYTE *v6; // r3

  v3 = (_DWORD *)(a1 + 1032);
  v4 = a2;
  do
  {
    v5 = v4[1481];
    v4 += 4;
    *v3++ = (v5 << 16) + (v4[1478] << 8) + v4[1479] + (v4[1476] << 24);
  }
  while ( a2 + 32 != v4 );
  if ( a3 && a2[436] )
  {
    LOWORD(v6) = 24212;
    HIWORD(v6) = (unsigned int)&unk_164D6C >> 16;
    *v6 = 0;
  }
  return 0;
}
