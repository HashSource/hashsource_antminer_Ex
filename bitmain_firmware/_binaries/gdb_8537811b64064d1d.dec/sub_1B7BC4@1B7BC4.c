int sub_1B7BC4()
{
  int result; // r0

  result = *(_DWORD *)(dword_487D2C + 36);
  if ( result )
  {
    while ( !*(_DWORD *)(result + 20) )
    {
      result = *(_DWORD *)result;
      if ( !result )
        return result;
    }
    return 1;
  }
  return result;
}
