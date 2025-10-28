_DWORD *__fastcall set_chip_freq_in_low_temp(_DWORD *result, _WORD *a2, _BYTE *a3)
{
  int v3; // r3
  int v4; // r3
  int v5; // r3
  int v6; // r3
  int i; // [sp+10h] [bp-Ch]
  float v8; // [sp+14h] [bp-8h]

  v8 = freq_array_f[6 * result[68]];
  *a3 = 0;
  if ( dword_59B6B4[result[68]] == 100 )
  {
    dword_59B6B4[result[68]] = result[305];
    if ( v8 < 100.0 )
    {
      v8 = 100.0;
      *a3 = 1;
    }
  }
  else if ( result[305] - dword_59B6B4[result[68]] > 1 || (int)result[305] >= -15 )
  {
    if ( v8 >= 200.0 )
    {
      v3 = result[305];
      if ( result[304] >= v3 )
        v3 = result[304];
      if ( v3 < -5 || v8 >= 240.0 )
      {
        v4 = result[305];
        if ( result[304] >= v4 )
          v4 = result[304];
        if ( v4 <= 4 || v8 >= 280.0 )
        {
          v5 = result[305];
          if ( result[304] >= v5 )
            v5 = result[304];
          if ( v5 <= 9 || v8 >= 300.0 )
          {
            v6 = result[305];
            if ( result[304] >= v6 )
              v6 = result[304];
            if ( v6 > 12 && v8 < 400.0 )
            {
              v8 = v8 + 6.25;
              *a3 = 1;
            }
          }
          else
          {
            v8 = v8 + 6.25;
            *a3 = 1;
          }
        }
        else
        {
          v8 = v8 + 6.25;
          *a3 = 1;
        }
      }
      else
      {
        v8 = v8 + 6.25;
        *a3 = 1;
      }
    }
    else
    {
      v8 = v8 + 6.25;
      *a3 = 1;
    }
    dword_59B6B4[result[68]] = result[305];
  }
  for ( i = 0; i <= 5; ++i )
    freq_array_f[6 * result[68] + i] = v8;
  *a2 = (unsigned int)v8;
  return result;
}
