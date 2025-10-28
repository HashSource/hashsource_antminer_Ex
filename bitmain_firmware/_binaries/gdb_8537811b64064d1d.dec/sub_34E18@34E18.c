int __fastcall sub_34E18(int a1, _DWORD *a2)
{
  int v3; // r7
  int v4; // r4
  int v5; // r3
  int v6; // r3
  int v7; // r1
  int v8; // r0
  int v9; // r2

  v3 = sub_1836B0(a1);
  v4 = sub_1836A8(v3, dword_471ACC);
  if ( !v4 )
  {
    v4 = sub_930BC(1, 0xCu);
    sub_1836A0(v3, dword_471ACC, v4);
  }
  v5 = *(_DWORD *)(v4 + 8);
  if ( v5 )
  {
    if ( v5 < 0 )
      return 0;
LABEL_6:
    v7 = *(_DWORD *)(v4 + 4);
    v6 = 1;
    *a2 = *(_DWORD *)v4;
    a2[1] = v7;
    return v6;
  }
  v8 = sub_34C28((char **)v4);
  v6 = v8;
  if ( v8 )
    v6 = 1;
  else
    v9 = -1;
  if ( v8 )
    *(_DWORD *)(v4 + 8) = v6;
  else
    *(_DWORD *)(v4 + 8) = v9;
  if ( v8 )
    goto LABEL_6;
  return v6;
}
