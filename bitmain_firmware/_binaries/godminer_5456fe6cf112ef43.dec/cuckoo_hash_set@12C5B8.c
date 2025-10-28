unsigned int __fastcall cuckoo_hash_set(unsigned int result, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r2
  int v5; // lr
  int v6; // r12
  __int64 v7; // r4
  int *v8; // r12

  v3 = a2 >> 22;
  v4 = a3 | (a2 << 30);
  v5 = cuckoo[result];
  v6 = 8 * (a2 >> 22);
  v7 = *(_QWORD *)(v5 + v6);
  v8 = (int *)(v5 + v6);
  if ( v7 )
  {
    result = (unsigned int)v7 >> 30;
    do
    {
      result |= 4 * HIDWORD(v7);
      if ( a2 == __PAIR64__(HIDWORD(v7) >> 30, result) )
        break;
      v3 = (unsigned __int8)(v3 + 1);
      v7 = *(_QWORD *)(v5 + 8 * v3);
      v8 = (int *)(v5 + 8 * v3);
      result = (unsigned int)v7 >> 30;
    }
    while ( v7 );
  }
  *v8 = v4;
  v8[1] = a2 >> 2;
  return result;
}
