int __fastcall sub_23DD7C(int result)
{
  int v1; // r4

  v1 = result;
  if ( result )
  {
    result = *(_DWORD *)(result + 56);
    if ( result )
    {
      result = ((int (*)(void))loc_DB0D8)();
      *(_DWORD *)(v1 + 56) = 0;
    }
  }
  return result;
}
