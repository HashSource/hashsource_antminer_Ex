_DWORD *__fastcall sub_C0B4C(_DWORD *result, int a2, unsigned int a3)
{
  if ( a3 > 0xFFFE )
    sub_94708("GDB bug: ax-general.c (ax_label): label target out of range");
  *(_BYTE *)(*result + a2) = BYTE1(a3);
  *(_BYTE *)(*result + a2 + 1) = a3;
  return result;
}
