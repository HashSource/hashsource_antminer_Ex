int __fastcall sub_281A30(int a1, int a2)
{
  if ( a1 < 0 )
    return sub_281AB0(-a1);
  if ( dword_4900D8 )
  {
    if ( (a2 & 0xFFFFFF00) == 0 && ((*_ctype_b_loc())[a2] & 0x100) != 0 )
      sub_2814B0(a1);
    else
      sub_281844(a1);
    return 0;
  }
  else
  {
    sub_2945F0();
    return 0;
  }
}
