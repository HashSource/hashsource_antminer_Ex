int __fastcall sub_1A9EC(int a1)
{
  int v2; // r0
  int v3; // r0
  _DWORD *v4; // r5
  int v5; // r0

  v2 = sub_16F67C();
  v3 = sub_163EA0(v2);
  if ( !dword_4714E8
    && (v4 = (_DWORD *)v3, v5 = sub_16F67C(), *(_DWORD *)(((int (__fastcall *)(int))loc_163ED8)(v5) + 12) == 39) )
  {
    return sub_25A440(a1, "The current ARM ABI is \"auto\" (currently \"%s\").\n", (&off_349370)[*v4 + 74]);
  }
  else
  {
    return sub_25A440(a1, "The current ARM ABI is \"%s\".\n", off_469624);
  }
}
