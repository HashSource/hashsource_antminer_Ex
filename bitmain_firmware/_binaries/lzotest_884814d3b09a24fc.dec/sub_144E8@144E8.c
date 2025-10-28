char *__fastcall sub_144E8(char *result)
{
  double v1; // d0
  int v2; // r2

  if ( v1 <= 0.0 )
  {
    *(_DWORD *)result = 3157552;
  }
  else if ( v1 <= 99.9375 )
  {
    return (char *)sprintf(result, "%4.1f", v1);
  }
  else
  {
    v2 = (int)(v1 + 0.5);
    if ( v2 <= 99 )
    {
      *(_DWORD *)result = 4144959;
    }
    else if ( v2 > 9998 )
    {
      strcpy(result, "9999");
      return *(char **)"9999";
    }
    else
    {
      return (char *)sprintf(result, "%ld", v2);
    }
  }
  return result;
}
