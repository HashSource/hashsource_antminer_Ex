int __fastcall sub_23DD2C(int result)
{
  int v1; // r4

  v1 = result;
  if ( result )
  {
    result = *(_DWORD *)(result + 48);
    if ( result )
    {
      result = ((int (*)(void))loc_DB0D8)();
      *(_DWORD *)(v1 + 48) = 0;
    }
  }
  return result;
}
