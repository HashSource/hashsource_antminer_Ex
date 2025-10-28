int __fastcall sub_40138(int result)
{
  int v1; // r0

  if ( result )
  {
    if ( !*(_DWORD *)(result + 180) )
    {
      if ( (*(_DWORD *)(result + 12) & 0x20) != 0 )
        return sub_3FD3C();
      v1 = sub_1B87D0(result);
      result = sub_201670(v1);
      if ( result )
        return sub_3FD3C();
    }
  }
  return result;
}
