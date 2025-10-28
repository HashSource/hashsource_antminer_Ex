int __fastcall sub_BD2D0(int result, int a2)
{
  int v2; // r4

  v2 = result;
  if ( a2 > 0 )
  {
    sub_C0B84(result, a2, a2, a2 >> 31);
    return sub_C09E0(v2, 2);
  }
  else if ( a2 )
  {
    sub_C0B84(result, a2, -a2, -a2 >> 31);
    return sub_C09E0(v2, 3);
  }
  return result;
}
