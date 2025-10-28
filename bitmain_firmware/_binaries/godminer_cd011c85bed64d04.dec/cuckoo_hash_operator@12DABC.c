int __fastcall cuckoo_hash_operator(int a1, unsigned int a2)
{
  unsigned int v2; // r12
  int v4; // lr
  __int64 v5; // r0
  unsigned int v6; // r2
  int v7; // r2
  bool v8; // zf

  v2 = a2 >> 22;
  v4 = cuckoo[a1];
  v5 = *(_QWORD *)(v4 + 8 * (a2 >> 22));
  if ( !v5 )
    return 0;
  v6 = (unsigned int)v5 >> 30;
  while ( 1 )
  {
    v7 = v6 | (4 * HIDWORD(v5));
    v8 = HIDWORD(v5) >> 30 == 0;
    if ( !(HIDWORD(v5) >> 30) )
      v8 = v7 == a2;
    if ( v8 )
      break;
    v2 = (unsigned __int8)(v2 + 1);
    v5 = *(_QWORD *)(8 * v2 + v4);
    v6 = (unsigned int)v5 >> 30;
    if ( !v5 )
      return 0;
  }
  return v5 & 0x3FFFFFFF;
}
