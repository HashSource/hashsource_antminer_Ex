int __fastcall blake2b_init_param(char *a1, int a2)
{
  int *v4; // r3
  __int64 *v5; // r1
  __int64 v6; // r6
  int *v7; // r2
  __int64 v8; // t1
  int v9; // r1
  int v10; // t1
  int v11; // lr
  int v12; // r0

  memset(a1, 0, 0x168u);
  v4 = (int *)(a1 - 8);
  v5 = (__int64 *)&unk_157B60;
  v6 = 0x6A09E667F3BCC908LL;
  v7 = (int *)(a1 - 8);
  while ( 1 )
  {
    *((_QWORD *)v7 + 1) = v6;
    v7 += 2;
    if ( v7 == (int *)(a1 + 56) )
      break;
    v8 = *v5++;
    v6 = v8;
  }
  v9 = a2;
  do
  {
    v10 = v4[2];
    v4 += 2;
    v9 += 8;
    v11 = *(_DWORD *)(v9 - 4);
    v12 = v4[1];
    *v4 = v10 ^ *(_DWORD *)(v9 - 8);
    v4[1] = v12 ^ v11;
  }
  while ( v4 != v7 );
  return 0;
}
