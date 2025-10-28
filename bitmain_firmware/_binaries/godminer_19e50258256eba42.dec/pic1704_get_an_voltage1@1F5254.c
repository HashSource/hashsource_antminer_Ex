int __fastcall pic1704_get_an_voltage1(char a1)
{
  int result; // r0
  unsigned int v2; // [sp+8h] [bp-14h] BYREF
  char v3; // [sp+Fh] [bp-Dh]
  double v4; // [sp+10h] [bp-Ch]

  v2 = 0;
  v4 = 0.0;
  result = pic1704_get_single_voltage(a1, (int *)&v2);
  v3 = result;
  if ( (_BYTE)result )
    return sub_1F505C(v2);
  return result;
}
