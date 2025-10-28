int __fastcall sub_1AA70(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r2
  int v5; // r6
  int v6; // r0

  v2 = sub_16F67C();
  v3 = sub_163EA0(v2);
  v4 = dword_4714EC;
  if ( !dword_4714EC )
  {
    v5 = v3;
    v6 = sub_16F67C();
    if ( *(_DWORD *)(((int (__fastcall *)(int))loc_163ED8)(v6) + 12) == 39 )
      return sub_25A440(
               a1,
               "The current ARM floating point model is \"auto\" (currently \"%s\").\n",
               (&off_349370)[*(_DWORD *)(v5 + 4) + 78]);
    v4 = dword_4714EC;
  }
  return sub_25A440(a1, "The current ARM floating point model is \"%s\".\n", (&off_349370)[v4 + 78]);
}
