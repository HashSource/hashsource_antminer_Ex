int __fastcall sub_1AC24(int a1)
{
  int v1; // r2
  int v3; // [sp+4h] [bp-8h] BYREF

  v1 = *(_DWORD *)(a1 + 160);
  v3 = 0;
  if ( *(_BYTE *)(v1 + 7) != 97 )
    return 0;
  sub_2ADD24(a1, sub_1BD6C4, &v3);
  return v3;
}
