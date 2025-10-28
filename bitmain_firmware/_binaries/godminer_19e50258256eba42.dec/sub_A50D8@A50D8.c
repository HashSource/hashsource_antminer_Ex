void __fastcall sub_A50D8(int a1)
{
  time_t v1; // r0
  int v2; // r0
  int v3; // r3
  time_t timer; // [sp+8h] [bp-Ch] BYREF
  int i; // [sp+Ch] [bp-8h]

  v1 = time(&timer);
  srand(v1);
  for ( i = 0; i <= 285; ++i )
  {
    v2 = rand();
    LOBYTE(v3) = v2;
    if ( v2 <= 0 )
      v3 = -(unsigned __int8)-(char)v2;
    *(_BYTE *)(a1 + i) = v3;
  }
}
