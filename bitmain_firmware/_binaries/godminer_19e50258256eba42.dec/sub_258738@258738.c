int __fastcall sub_258738(int a1)
{
  __int64 v1; // r4
  __int64 v2; // r8
  __int64 v3; // r0
  _QWORD v6[5]; // [sp+88h] [bp-74h]
  __int64 v7; // [sp+B0h] [bp-4Ch]
  __int64 v8; // [sp+B8h] [bp-44h]
  __int64 v9; // [sp+C0h] [bp-3Ch]
  __int64 v10; // [sp+C8h] [bp-34h]
  __int64 v11; // [sp+D0h] [bp-2Ch]
  unsigned int i; // [sp+DCh] [bp-20h]

  for ( i = 0; i <= 4; ++i )
    *(&v7 + i) = *(_QWORD *)(a1 + 8 * i)
               ^ *(_QWORD *)(a1 + 8 * (i + 5))
               ^ *(_QWORD *)(a1 + 8 * (i + 10))
               ^ *(_QWORD *)(a1 + 8 * (i + 15))
               ^ *(_QWORD *)(a1 + 8 * (i + 20));
  HIDWORD(v1) = v8 >> 31;
  LODWORD(v1) = (HIDWORD(v8) >> 31) | (2 * v8);
  v6[0] = v1 ^ v11;
  HIDWORD(v2) = v9 >> 31;
  LODWORD(v2) = (HIDWORD(v9) >> 31) | (2 * v9);
  v6[1] = v2 ^ v7;
  v6[2] = ((2 * v10) | (HIDWORD(v10) >> 31)) ^ v8;
  v6[3] = ((2 * v11) | (HIDWORD(v11) >> 31)) ^ v9;
  LODWORD(v3) = (HIDWORD(v7) >> 31) | (2 * v7);
  v6[4] = ((2 * v7) | (HIDWORD(v7) >> 31)) ^ v10;
  for ( i = 0; i <= 4; ++i )
  {
    *(_QWORD *)(a1 + 8 * i) ^= v6[i];
    *(_QWORD *)(a1 + 8 * (i + 5)) ^= v6[i];
    *(_QWORD *)(a1 + 8 * (i + 10)) ^= v6[i];
    *(_QWORD *)(a1 + 8 * (i + 15)) ^= v6[i];
    v3 = *(_QWORD *)(a1 + 8 * (i + 20)) ^ v6[i];
    *(_QWORD *)(a1 + 8 * (i + 20)) = v3;
  }
  return v3;
}
