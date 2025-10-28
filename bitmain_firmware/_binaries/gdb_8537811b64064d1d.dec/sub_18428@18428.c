int __fastcall sub_18428(char a1)
{
  int result; // r0

  result = a1 & 0xE0 | (2 * a1) & 0x1F;
  if ( (result & 0xE) == 0 )
    return 0;
  return result;
}
