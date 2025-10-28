int __fastcall sub_23DD54(int result)
{
  int v1; // r4

  v1 = result;
  if ( result )
  {
    result = *(_DWORD *)(result + 52);
    if ( result )
    {
      result = ((int (*)(void))loc_DB0D8)();
      *(_DWORD *)(v1 + 52) = 0;
    }
  }
  return result;
}
