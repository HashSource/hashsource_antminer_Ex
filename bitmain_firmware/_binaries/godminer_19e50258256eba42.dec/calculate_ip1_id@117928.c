int __fastcall calculate_ip1_id(int a1)
{
  int v1; // r2

  if ( (unsigned int)a1 >= 8 && (a1 <= 23 || a1 > 31) && (a1 <= 47 || a1 > 55) )
  {
    if ( (a1 <= 7 || a1 > 15) && (a1 <= 31 || a1 > 39) && (a1 <= 55 || a1 > 63) )
    {
      if ( (a1 <= 15 || a1 > 23) && (a1 <= 39 || a1 > 47) && (a1 <= 63 || a1 > 71) )
        return -1;
      else
        return (a1 & 7) + 64 + 20 * (a1 / 40);
    }
    else
    {
      return (a1 & 7) + 32 + 20 * (a1 >> 5);
    }
  }
  else
  {
    v1 = a1 & 7;
    if ( a1 <= 0 )
      v1 = -(-a1 & 7);
    return v1 + 20 * (a1 / 24);
  }
}
