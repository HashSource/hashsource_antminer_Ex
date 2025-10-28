void __fastcall sub_10B8C0(int a1, int a2, const char *a3, int a4)
{
  int v7; // r0
  const char ***v8; // r6
  char *v9; // r0
  char *v10; // r0

  v7 = sub_B8974(a1);
  v8 = (const char ***)((int (__fastcall *)(int))loc_16EB68)(v7);
  if ( v8 )
  {
    v9 = strrchr(a3, 44);
    if ( v9 )
      a3 = v9 + 1;
    v10 = (char *)sub_93634(a3);
    sub_54BA8(a2, *v8, v10, a4);
  }
}
