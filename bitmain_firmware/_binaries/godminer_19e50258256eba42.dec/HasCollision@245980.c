int __fastcall HasCollision(int a1, int a2, int a3)
{
  int i; // [sp+14h] [bp-8h]

  for ( i = 0; i < a3; ++i )
  {
    if ( *(unsigned __int8 *)(a1 + i) != *(unsigned __int8 *)(a2 + i) )
      return 0;
  }
  return 1;
}
