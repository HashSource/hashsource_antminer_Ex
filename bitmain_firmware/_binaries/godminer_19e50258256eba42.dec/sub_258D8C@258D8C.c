int __fastcall sub_258D8C(__int64 a1)
{
  int v2; // [sp+64h] [bp-38h]
  __int64 v3; // [sp+68h] [bp-34h]
  __int64 v4; // [sp+70h] [bp-2Ch]
  int i; // [sp+7Ch] [bp-20h]

  v2 = a1;
  for ( i = 0; i <= 24; i += 5 )
  {
    v4 = *(_QWORD *)(v2 + 8 * i);
    v3 = *(_QWORD *)(v2 + 8 * (i + 1));
    *(_QWORD *)(v2 + 8 * i) = v4 ^ ~v3 & *(_QWORD *)(v2 + 8 * (i + 2));
    *(_QWORD *)(v2 + 8 * (i + 1)) ^= ~*(_QWORD *)(v2 + 8 * (i + 2)) & *(_QWORD *)(v2 + 8 * (i + 3));
    *(_QWORD *)(v2 + 8 * (i + 2)) ^= ~*(_QWORD *)(v2 + 8 * (i + 3)) & *(_QWORD *)(v2 + 8 * (i + 4));
    *(_QWORD *)(v2 + 8 * (i + 3)) ^= ~*(_QWORD *)(v2 + 8 * (i + 4)) & v4;
    a1 = *(_QWORD *)(v2 + 8 * (i + 4)) ^ ~v4 & v3;
    *(_QWORD *)(v2 + 8 * (i + 4)) = a1;
  }
  return a1;
}
