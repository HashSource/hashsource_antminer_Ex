int __fastcall sub_2B3480(int a1)
{
  char *v2; // r0
  char *v3; // r4
  _DWORD *v4; // r3
  _DWORD *v5; // r0
  int v6; // r2
  _DWORD *v8; // r2

  v2 = sub_2AD7D4(a1, ".ARM.exidx");
  v3 = v2;
  if ( !v2 || (*((_DWORD *)v2 + 5) & 2) == 0 )
    return 1;
  v4 = *(_DWORD **)(*(_DWORD *)(a1 + 160) + 2348);
  while ( 1 )
  {
    v4 = (_DWORD *)*v4;
    if ( !v4 )
      break;
    if ( v4[1] == 1879048193 )
      return 1;
  }
  v5 = sub_2AD0C4(a1, 0x2Cu);
  if ( !v5 )
    return 0;
  v6 = *(_DWORD *)(a1 + 160);
  v5[10] = v3;
  v5[1] = 1879048193;
  v8 = *(_DWORD **)(v6 + 2348);
  v5[9] = 1;
  *v5 = *v8;
  *v8 = v5;
  return 1;
}
