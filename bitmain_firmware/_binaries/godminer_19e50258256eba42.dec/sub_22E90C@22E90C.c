_BYTE *__fastcall sub_22E90C(_BYTE *result, int a2)
{
  _BYTE *v2; // r3
  _BYTE *i; // [sp+Ch] [bp-8h]

  for ( i = result; a2--; ++i )
  {
    v2 = i;
    *v2 = 0;
  }
  return result;
}
