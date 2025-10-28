int __fastcall sub_7A8C4(int a1)
{
  int v1; // r3

  v1 = a1;
  if ( a1 != -64 )
  {
    if ( a1 >= 0 )
    {
      if ( a1 > 34 )
        return 60;
      else
        return 40;
    }
    else
    {
      return 20;
    }
  }
  return v1;
}
