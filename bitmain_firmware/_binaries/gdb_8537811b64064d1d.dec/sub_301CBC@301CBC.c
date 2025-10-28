int __fastcall sub_301CBC(int result, int a2)
{
  if ( result || (result = sub_2AAEF0(a2, 16)) != 0 )
  {
    result = sub_2AAFA4(result, a2);
    if ( result )
      *(_DWORD *)(result + 12) = 0;
  }
  return result;
}
