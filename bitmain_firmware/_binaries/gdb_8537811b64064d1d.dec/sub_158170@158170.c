_DWORD *__fastcall sub_158170(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  _DWORD *v4; // r4
  char *v5; // r2
  int (__fastcall *v7)(int); // r0

  v2 = sub_930BC(1u, 0xCu);
  v3 = dword_46DC04;
  v4 = v2;
  v5 = (char *)off_46D45C;
  v2[1] = 0;
  off_46D45C = (char (*)[28])a1;
  *v2 = v5;
  if ( v3 != 2 )
    return v4;
  if ( *(_DWORD *)a1 == 1 || *(_DWORD *)(*(_DWORD *)(a1 + 28) + 48) )
  {
    v7 = (int (__fastcall *)(int))signal(2, (__sighandler_t)sub_153A1C);
    v4[2] = v7;
    v4[1] = v7 != sub_153A1C;
  }
  if ( !sub_1580E8() )
    return v4;
  sub_1580AC();
  return v4;
}
