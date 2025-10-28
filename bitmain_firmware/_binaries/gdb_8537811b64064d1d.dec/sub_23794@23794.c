bool __fastcall sub_23794(int a1)
{
  int v2; // r0
  int v3; // r3
  int v4; // r0
  int v5; // r4

  v2 = sub_15ECDC(a1);
  v3 = *(_DWORD *)(sub_163EA0(v2) + 32);
  v4 = a1;
  if ( v3 )
    v5 = 0x1000000;
  else
    v5 = 32;
  return (sub_15ECD4(v4, 25) & v5) != 0;
}
