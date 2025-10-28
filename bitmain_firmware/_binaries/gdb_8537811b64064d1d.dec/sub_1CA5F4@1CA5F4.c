int __fastcall sub_1CA5F4(int a1, int a2, int a3)
{
  int v3; // r7
  int v5; // r6
  int v6; // r0
  int v7; // r4
  unsigned int v8; // r0
  unsigned int v9; // r7
  int v11; // r0
  int v12; // r1
  char *v13; // r0
  int v14; // [sp+8h] [bp-8h] BYREF

  v5 = sub_15F810((_BOOL4)"No frame selected");
  v6 = sub_15DE24(v5);
  if ( a3 < -1 )
  {
    sub_94728(
      (int)"probe.c",
      819,
      "%s: Assertion `%s' failed.",
      "value* compute_probe_arg(gdbarch*, internalvar*, void*)",
      "sel >= -1");
LABEL_8:
    v13 = sub_98E44(v3);
    sub_94708("No probe at PC %s", v13);
  }
  v3 = v6;
  sub_1CA420(&v14, v6);
  v7 = v14;
  if ( !v14 )
    goto LABEL_8;
  v8 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v14 + 12))(v14, v5);
  v9 = v8;
  if ( a3 == -1 )
  {
    sub_1780DC();
    return sub_26DB1C(*(_DWORD *)(v11 + 12), v12, v9, 0);
  }
  else
  {
    if ( a3 >= v8 )
      sub_94708("Invalid probe argument %d -- probe has %u arguments available", a3, v8);
    return (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v7 + 20))(v7, a3, v5);
  }
}
