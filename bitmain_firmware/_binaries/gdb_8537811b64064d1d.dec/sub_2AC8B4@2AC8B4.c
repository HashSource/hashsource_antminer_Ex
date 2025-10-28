_DWORD *__fastcall sub_2AC8B4(int a1, int a2)
{
  _DWORD *v4; // r4
  int v5; // r0
  char v6; // r3
  void **v8; // r0
  void **v9; // r0

  v4 = sub_2AC49C();
  if ( v4 )
  {
    if ( sub_2AE48C(a2, v4) )
    {
      v5 = sub_32727C(a1);
      v6 = *((_BYTE *)v4 + 40);
      *v4 = v5;
      *((_BYTE *)v4 + 40) = v6 & 0xE7 | 0x10;
      if ( !sub_2A8FF8(v4) )
      {
        ((void (__fastcall *)(int))loc_2A6C70)(1);
        v9 = (void **)v4;
        v4 = 0;
        sub_2ABEA4(v9);
      }
    }
    else
    {
      v8 = (void **)v4;
      v4 = 0;
      sub_2ABEA4(v8);
    }
  }
  return v4;
}
