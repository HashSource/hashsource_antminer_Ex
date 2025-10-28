int __fastcall sub_2916A4(int a1)
{
  if ( (a1 & 0xFFFFFF00) != 0 )
    return 0;
  else
    return ((*_ctype_b_loc())[a1] >> 10) & 1;
}
