int __fastcall BM_CRC16(char *a1, int a2)
{
  char *v2; // r3
  unsigned __int16 i; // [sp+Eh] [bp-6h]

  for ( i = -1; a2--; i = sub_2C6E60(i, *v2) )
    v2 = a1++;
  return i;
}
