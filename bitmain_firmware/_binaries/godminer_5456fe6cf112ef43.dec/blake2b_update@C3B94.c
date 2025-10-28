int __fastcall blake2b_update(int result, int a2, int a3)
{
  int v3; // r5
  int v4; // r4
  int v5; // r3
  int v6; // r8
  char v7; // t1
  bool v8; // zf
  int v9; // r2
  __int64 v10; // r6
  bool v11; // cc

  if ( a3 )
  {
    v3 = a2 - 1;
    v4 = result;
    v5 = *(_DWORD *)(result + 208);
    v6 = a2 - 1 + a3;
    do
    {
      v8 = v5 == 128;
      v9 = v5++;
      if ( v8 )
      {
        v10 = *(_QWORD *)(v4 + 192) + 128LL;
        v11 = HIDWORD(v10) != 0;
        *(_QWORD *)(v4 + 192) = v10;
        if ( !HIDWORD(v10) )
          v11 = (unsigned int)v10 > 0x7F;
        if ( !v11 )
          ++*(_QWORD *)(v4 + 200);
        result = sub_C3018((_DWORD *)v4, 0);
        v5 = 1;
        v9 = 0;
      }
      *(_DWORD *)(v4 + 208) = v5;
      v7 = *(_BYTE *)++v3;
      *(_BYTE *)(v4 + v9) = v7;
    }
    while ( v3 != v6 );
  }
  return result;
}
