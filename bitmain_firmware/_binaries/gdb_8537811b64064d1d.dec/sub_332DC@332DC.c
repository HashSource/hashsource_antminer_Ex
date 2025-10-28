int __fastcall sub_332DC(int a1)
{
  int v1; // r0
  int result; // r0
  int v3; // r4
  int v4; // r0
  const char *v5; // r0
  int v6; // r6
  int v7; // r5
  int v8[2]; // [sp+8h] [bp-8h] BYREF

  v1 = sub_16F67C(a1);
  result = ((int (__fastcall *)(int, int *))loc_16E698)(v1, v8);
  if ( result )
  {
    v3 = dword_47ACB8;
    if ( dword_47ACB8 || (v3 = *(_DWORD *)(dword_487D2C + 8)) != 0 )
    {
      v4 = sub_16F67C(result);
      v5 = (const char *)sub_25ACB4(v4, v8[0]);
      v6 = sub_93168("system-supplied DSO at %s", v5);
      v7 = sub_92E50();
      sub_33150(v3, v8[0], v8[1], v6, 0);
      return sub_92E68(v7);
    }
    else
    {
      return sub_946D8("Could not load vsyscall page because no executable was specified");
    }
  }
  return result;
}
