int __fastcall sub_1889A0(int a1)
{
  int result; // r0

  result = sub_CD2B0(a1);
  if ( !result )
  {
    result = sub_22EBE4(0);
    if ( result )
    {
      result = sub_CDB08();
      if ( result )
      {
        sub_22F070(result);
        return sub_259F38(
                 "Cannot remove breakpoints because program is no longer writable.\n"
                 "Further execution is probably impossible.\n");
      }
    }
  }
  return result;
}
