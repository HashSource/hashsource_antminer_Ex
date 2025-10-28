unsigned int *__fastcall sub_1A88D8(unsigned int *result)
{
  float v1; // s0
  int v2; // r0
  int v3; // r0
  unsigned int v4; // [sp+10h] [bp-Ch]
  unsigned __int8 v5; // [sp+14h] [bp-8h]
  unsigned __int8 j; // [sp+16h] [bp-6h]
  unsigned __int8 i; // [sp+17h] [bp-5h]

  for ( i = 7; i; --i )
  {
    for ( j = i; j; --j )
    {
      v4 = (unsigned int)(float)((float)((float)i * v1) * (float)j);
      if ( v4 <= 0x960 && v4 >= 0x320 )
      {
        v5 = v4 / 0x19;
        *result = (v5 << 16) | 0xA0000100 | (16 * i) & 0x70 | j & 7;
        v2 = sub_344EB8(25 * v5, 1u);
        v3 = sub_344EB8(v2, i);
        return (unsigned int *)sub_344EB8(v3, j);
      }
    }
  }
  return result;
}
