int sub_B1D10()
{
  int v0; // r2
  int v1; // r3
  signed int temp; // [sp+4h] [bp-18h]
  int v4; // [sp+14h] [bp-8h]

  temp = get_temp(1);
  if ( temp > 13 )
  {
    if ( temp > 32 )
      v4 = (int)((double)(temp - 32) * 1.42857143 + 60.0);
    else
      v4 = (int)((double)(temp - 13) * 2.10526316 + 20.0);
  }
  else
  {
    v4 = 20;
  }
  if ( get_temp(dword_59B1C4) >= dword_59B1C8 )
    v4 = 100;
  v0 = dword_59B1BC;
  if ( dword_59B1BC < v4 )
    v0 = v4;
  v1 = dword_59B1C0;
  if ( v0 < dword_59B1C0 )
    return v0;
  return v1;
}
