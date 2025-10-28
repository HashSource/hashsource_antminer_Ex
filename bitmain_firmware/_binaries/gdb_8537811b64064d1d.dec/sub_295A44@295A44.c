int __fastcall sub_295A44(int a1)
{
  if ( (dword_48AAA0 & 0x80000) == 0 )
  {
    sub_284674();
    if ( (dword_48AAA0 & 0x80000) == 0 )
      return sub_294ED0(a1);
  }
  dword_48BAA4 = (int)sub_293AEC(a1);
  off_48BAA0 = (int (__fastcall *)(_DWORD))sub_294F3C;
  return 0;
}
