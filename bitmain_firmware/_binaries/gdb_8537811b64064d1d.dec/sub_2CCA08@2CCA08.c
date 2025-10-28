int __fastcall sub_2CCA08(int a1, char *a2, int a3)
{
  int v7; // r1
  __int64 v8; // r2
  int v9; // r12

  if ( sub_2AD7D4(a1, a2) )
    return 1;
  v7 = sub_2ADC10(a1, a2, *(_DWORD *)(a3 + 20));
  if ( !v7 )
    return 0;
  v8 = *(_QWORD *)(a3 + 80);
  v9 = *(_DWORD *)(a3 + 64);
  *(_DWORD *)(v7 + 36) = *(_DWORD *)(a3 + 36);
  *(_QWORD *)(v7 + 80) = v8;
  *(_DWORD *)(v7 + 64) = v9;
  return 1;
}
