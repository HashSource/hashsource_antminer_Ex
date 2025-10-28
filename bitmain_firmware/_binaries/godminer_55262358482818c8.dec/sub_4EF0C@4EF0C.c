int __fastcall sub_4EF0C(int result)
{
  if ( result != -64 )
  {
    if ( result < -10 )
    {
      return 20;
    }
    else if ( result <= 34 )
    {
      return 60;
    }
  }
  return result;
}
