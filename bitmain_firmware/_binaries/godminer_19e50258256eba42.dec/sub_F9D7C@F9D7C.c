int __fastcall sub_F9D7C(int a1)
{
  int v3; // [sp+10h] [bp-Ch]
  int i; // [sp+14h] [bp-8h]

  v3 = *(_DWORD *)(a1 + 372);
  for ( i = 0; i < v3; ++i )
    sub_EC60C(a1, i);
  return 12;
}
