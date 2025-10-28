int __fastcall row_bitCount2(int result)
{
  int v1; // r3

  v1 = result;
  if ( result )
  {
    result = 0;
    do
    {
      ++result;
      v1 &= v1 - 1;
    }
    while ( v1 );
  }
  return result;
}
