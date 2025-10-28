int __fastcall sub_29115C(int result)
{
  if ( dword_48B6BC || (dword_48AAA0 & 0x80000) != 0 )
  {
    dword_48B6BC = 0;
    return sub_291058(result);
  }
  else
  {
    dword_48B6B8 = result;
  }
  return result;
}
