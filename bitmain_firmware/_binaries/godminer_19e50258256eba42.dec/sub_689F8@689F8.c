int __fastcall sub_689F8(int result, int a2, int a3)
{
  int i; // [sp+14h] [bp-8h]

  for ( i = 0; i < a3; ++i )
    *(_BYTE *)(result + i) = *(_BYTE *)(a2 + a3 - 1 - i);
  return result;
}
