_DWORD *__fastcall sub_2ACA40(int a1, int a2)
{
  _DWORD *v4; // r4

  v4 = sub_2AC49C();
  if ( v4 )
  {
    *v4 = sub_32727C(a1);
    if ( a2 )
      v4[1] = *(_DWORD *)(a2 + 4);
    *((_BYTE *)v4 + 40) &= 0xE7u;
    sub_2AA89C((int)v4, 1);
  }
  return v4;
}
