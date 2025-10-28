char *__fastcall sub_15E0B4(int a1)
{
  char *result; // r0
  char *v2; // r4
  int v3; // r0
  int v4; // [sp+4h] [bp-4h] BYREF

  result = (char *)sub_15DEE4(a1, &v4);
  if ( result )
  {
    result = (char *)sub_21DDD4(v4);
    v2 = result;
    if ( result )
    {
      result = (char *)sub_21A700(result);
      if ( result != off_46D5A4[0][2] )
      {
        result = (char *)sub_21A700(v2);
        if ( result )
        {
          if ( !dword_487A04 )
          {
            v3 = sub_21A700(v2);
            return (char *)sub_19422C(v3);
          }
        }
      }
    }
  }
  return result;
}
