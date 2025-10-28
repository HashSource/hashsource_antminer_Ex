char *__fastcall sub_112288(char *result)
{
  unsigned int v1; // r2
  bool v2; // cc

  v1 = *result;
  v2 = v1 > 8;
  if ( v1 != 8 )
    v2 = (unsigned __int8)(v1 - 20) > 1u;
  if ( v2 )
    sub_94708("integral type expected in DWARF expression");
  return result;
}
