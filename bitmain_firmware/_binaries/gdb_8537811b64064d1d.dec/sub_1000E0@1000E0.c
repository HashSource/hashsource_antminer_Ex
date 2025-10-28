int __fastcall sub_1000E0(int a1)
{
  void *v1; // r4
  int v2; // r1
  int v3; // r5
  _DWORD v5[2]; // [sp+4h] [bp-8h] BYREF

  sub_7F674(v5, a1, 0);
  v1 = (void *)v5[0];
  if ( !v5[0] )
    return 0;
  v2 = sub_FE624(*(_DWORD **)(v5[0] + 4));
  if ( v2 )
  {
    sub_7F58C(v5, v2, 10);
    v3 = v5[0];
  }
  else
  {
    v3 = 0;
  }
  sub_7F5F8((int)v1);
  sub_33AC2C(v1);
  return v3;
}
