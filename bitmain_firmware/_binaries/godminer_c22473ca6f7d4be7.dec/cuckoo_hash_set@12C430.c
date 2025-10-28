unsigned int __fastcall cuckoo_hash_set(unsigned int result, unsigned int a2, int a3)
{
  int v3; // r12
  unsigned int v4; // r3
  unsigned int v5; // r2
  int v6; // lr
  unsigned int v7; // r12
  __int64 v8; // r4
  unsigned int *v9; // r12

  LOWORD(v3) = 7596;
  v4 = a2 >> 22;
  HIWORD(v3) = (unsigned int)&unk_170BAC >> 16;
  v5 = a3 | (a2 << 30);
  v6 = *(_DWORD *)(v3 + 4 * result);
  v7 = 8 * (a2 >> 22);
  v8 = *(_QWORD *)(v6 + v7);
  v9 = (unsigned int *)(v6 + v7);
  if ( v8 )
  {
    result = (unsigned int)v8 >> 30;
    do
    {
      result |= 4 * HIDWORD(v8);
      if ( a2 == __PAIR64__(HIDWORD(v8) >> 30, result) )
        break;
      v4 = (unsigned __int8)(v4 + 1);
      v8 = *(_QWORD *)(v6 + 8 * v4);
      v9 = (unsigned int *)(v6 + 8 * v4);
      result = (unsigned int)v8 >> 30;
    }
    while ( v8 );
  }
  *v9 = v5;
  v9[1] = a2 >> 2;
  return result;
}
