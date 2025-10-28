int sub_B1B18()
{
  int v0; // r2
  int v1; // r3
  signed int temp; // [sp+4h] [bp-18h]
  int v4; // [sp+14h] [bp-8h]

  temp = get_temp(1);
  if ( temp > 18 )
  {
    if ( temp > 33 )
    {
      if ( temp > 38 )
      {
        if ( temp > 48 )
        {
          if ( temp > 55 )
            v4 = 100;
          else
            v4 = (int)((double)(temp - 48) * 5.71428571 + 60.0);
        }
        else
        {
          v4 = (int)((double)(temp - 38) + 50.0);
        }
      }
      else
      {
        v4 = 50;
      }
    }
    else
    {
      v4 = (int)((double)(temp - 18) * 0.666666667 + 40.0);
    }
  }
  else
  {
    v4 = 40;
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
