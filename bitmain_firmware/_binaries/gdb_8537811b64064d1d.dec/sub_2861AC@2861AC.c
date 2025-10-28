int __fastcall sub_2861AC(_DWORD *a1)
{
  int v2; // r0
  _DWORD *v3; // r4
  int v4; // t1

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1;
    do
    {
      sub_297780(v2);
      v4 = v3[1];
      ++v3;
      v2 = v4;
    }
    while ( v4 );
  }
  return sub_297780(a1);
}
