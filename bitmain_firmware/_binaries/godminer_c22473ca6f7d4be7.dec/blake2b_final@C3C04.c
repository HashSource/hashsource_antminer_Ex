unsigned int __fastcall blake2b_final(int a1, int a2)
{
  unsigned int v3; // r12
  __int64 v5; // r6
  __int64 v6; // r0
  int v7; // r3
  unsigned int result; // r0
  int v9; // r4
  unsigned int v10; // r1
  unsigned int v11; // r0
  char v12; // r2
  unsigned int v13; // r3

  v3 = *(_DWORD *)(a1 + 208);
  HIDWORD(v5) = 0;
  v6 = *(_QWORD *)(a1 + 192);
  LODWORD(v5) = __CFADD__(__CFADD__((_DWORD)v6, v3), HIDWORD(v6));
  *(_QWORD *)(a1 + 192) = v6 + v3;
  if ( v5 )
    ++*(_QWORD *)(a1 + 200);
  if ( v3 <= 0x7F )
  {
    v7 = a1 + v3 - 1;
    do
      *(_BYTE *)++v7 = 0;
    while ( v7 != a1 + 127 );
    *(_DWORD *)(a1 + 208) = 128;
  }
  result = sub_C2F28((_DWORD *)a1, 1);
  if ( *(_DWORD *)(a1 + 212) )
  {
    v9 = a2 - 1;
    v10 = 0;
    do
    {
      v11 = v10 >> 3;
      v12 = 8 * (v10++ & 7);
      v13 = v11 + 16;
      result = *(_DWORD *)(a1 + 8 * (v11 + 16) + 4);
      *(_BYTE *)++v9 = __PAIR64__(result, *(_DWORD *)(a1 + 8 * v13)) >> v12;
    }
    while ( *(_DWORD *)(a1 + 212) > v10 );
  }
  return result;
}
