int __fastcall sub_B7740(int result)
{
  int v1; // r5

  if ( dword_48968C == 2 && (!dword_478210 || *(_DWORD *)(dword_487668 + 68)) )
  {
    v1 = dword_46DC04;
    sub_22F070(result);
    result = sub_259880(asc_378518);
    if ( !v1 )
      result = sub_22EFA4(result);
    dword_478210 = 1;
  }
  return result;
}
