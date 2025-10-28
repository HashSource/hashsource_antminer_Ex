int __fastcall sub_1E2764(int result, int a2, int a3)
{
  if ( a3 )
    return sub_946D8("Remote qSupported response supplied an unexpected value for \"%s\".", *(const char **)result);
  dword_4886E4[4 * *(_DWORD *)(result + 12) + 5] = a2;
  return result;
}
