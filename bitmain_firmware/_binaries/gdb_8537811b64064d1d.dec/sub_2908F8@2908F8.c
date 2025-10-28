int sub_2908F8()
{
  int *v0; // r3
  int v1; // r0

  v0 = &dword_48AE00;
  if ( dword_48AE3C == dword_48AAA4 )
    v0 = (int *)dword_48AAA8;
  v1 = dword_48AE04 - dword_490144;
  if ( dword_48AE3C == dword_48AAA4 )
    v1 -= (int)v0;
  if ( v1 <= 0 )
    return 0;
  else
    return sub_3476B8(v1) + 1;
}
