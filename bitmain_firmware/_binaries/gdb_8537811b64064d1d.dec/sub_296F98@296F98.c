int sub_296F98()
{
  int result; // r0
  int v1; // r0

  while ( dword_46DEDC <= (int)&loc_F4240 || !sub_296C14() )
  {
    v1 = sub_296D1C();
    if ( v1 < 0 )
      sub_291244(v1, v1);
    result = sub_296D70(dword_490154, v1);
    if ( result <= 0 || (dword_48AAA0 & 0x400) == 0 )
      return result;
  }
  return 1;
}
