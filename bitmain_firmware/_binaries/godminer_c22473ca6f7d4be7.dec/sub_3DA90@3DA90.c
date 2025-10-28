int __fastcall sub_3DA90(int a1, _DWORD *a2, int a3)
{
  unsigned int v3; // r12
  _DWORD *v5; // r3
  int v6; // r2
  int v7; // t1
  int v8; // r1
  int v9; // r2

  v3 = *(_DWORD *)(a3 + 48);
  a2[285] = 0;
  v5 = (_DWORD *)a2[290];
  a2[284] = bswap32(v3);
  v7 = *(_DWORD *)(a3 + 52);
  v6 = a3 + 52;
  v8 = *(_DWORD *)(v6 + 4);
  v9 = *(_DWORD *)(v6 + 8);
  *v5 = v7;
  v5[1] = v8;
  v5[2] = v9;
  return 0;
}
