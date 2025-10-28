int __fastcall cuckoo_hash_operator(int a1, unsigned int a2)
{
  int v2; // r3
  unsigned int v3; // r12
  int v5; // lr
  __int64 v6; // r0
  unsigned int v7; // r2
  int v8; // r2
  bool v9; // zf

  LOWORD(v2) = 7596;
  v3 = a2 >> 22;
  HIWORD(v2) = (unsigned int)&unk_170BAC >> 16;
  v5 = *(_DWORD *)(v2 + 4 * a1);
  v6 = *(_QWORD *)(v5 + 8 * (a2 >> 22));
  if ( !v6 )
    return 0;
  v7 = (unsigned int)v6 >> 30;
  while ( 1 )
  {
    v8 = v7 | (4 * HIDWORD(v6));
    v9 = HIDWORD(v6) >> 30 == 0;
    if ( !(HIDWORD(v6) >> 30) )
      v9 = v8 == a2;
    if ( v9 )
      break;
    v3 = (unsigned __int8)(v3 + 1);
    v6 = *(_QWORD *)(8 * v3 + v5);
    v7 = (unsigned int)v6 >> 30;
    if ( !v6 )
      return 0;
  }
  return v6 & 0x3FFFFFFF;
}
