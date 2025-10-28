void __fastcall sub_F73F8(_DWORD *a1, _BYTE *a2)
{
  char *v2; // r4
  char *v4; // r0

  if ( *a2 == 42 )
  {
    v2 = a2 + 1;
    ++a1[23];
    v4 = sub_F549C((int)a1, a2 + 1);
    sub_F6E70(a1, v2, (int)v4);
  }
  else
  {
    sub_19B1EC();
  }
}
