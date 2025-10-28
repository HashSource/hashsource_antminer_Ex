_DWORD *sub_2835BC()
{
  _DWORD *result; // r0
  _DWORD *v1; // r3
  _DWORD *v2; // r2

  result = sub_28354C();
  v1 = result;
  v2 = result;
  do
  {
    v2[65] = sub_295ED0;
    v2 += 2;
  }
  while ( v2 != result + 190 );
  result[19] = sub_295ED0;
  result[255] = sub_29603C;
  result[17] = sub_29603C;
  do
  {
    v1[257] = sub_295ED0;
    v1 += 2;
  }
  while ( result + 256 != v1 );
  return result;
}
