_BYTE *__fastcall sub_75D70(_BYTE *result)
{
  _BYTE *v1; // r3
  _BYTE *v2; // [sp+4h] [bp-8h]

  v2 = result;
  if ( *result )
  {
    v2 = result + 1;
    *result = 120;
  }
  while ( *v2 )
  {
    v1 = v2++;
    *v1 = 0;
  }
  return result;
}
