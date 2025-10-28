int __fastcall sub_A2978(int result)
{
  if ( result )
  {
    if ( (*(_BYTE *)(*(_DWORD *)(result + 24) + 2) & 8) == 0 )
      return sub_A2920(result);
  }
  return result;
}
