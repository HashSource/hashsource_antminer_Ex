int __fastcall sub_CF388(int result)
{
  if ( result )
  {
    while ( !*(_BYTE *)(result + 25) )
    {
      result = *(_DWORD *)result;
      if ( !result )
        return result;
    }
    return 1;
  }
  return result;
}
