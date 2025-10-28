int __fastcall sub_1890C8(int result)
{
  if ( (unsigned int)(result - 1) > 0xE )
    sub_94708("Only signals 1-15 are valid as numeric signals.\nUse \"info signals\" for a list of symbolic signals.");
  return result;
}
