int __fastcall sub_B7414(int result)
{
  int v1; // r5

  if ( *(int *)(result + 24) > 0 && dword_48968C == 2 && (!dword_478204 || *(_DWORD *)(dword_487668 + 68)) )
  {
    v1 = dword_46DC04;
    sub_22F070(result);
    result = sub_259880(asc_3783C4);
    if ( !v1 )
      result = sub_22EFA4(result);
    dword_478204 = 1;
  }
  return result;
}
