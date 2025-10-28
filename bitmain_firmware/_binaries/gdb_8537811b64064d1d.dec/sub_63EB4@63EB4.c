int __fastcall sub_63EB4(int a1, const char **a2, unsigned int a3)
{
  const char *v3; // r0
  _DWORD *v5; // r0
  unsigned int v7; // r0
  unsigned int v8; // r5
  int v9; // r0
  char *v10; // [sp+0h] [bp-Ch] BYREF
  int v11; // [sp+4h] [bp-8h] BYREF

  if ( a3 > 1 )
    sub_94708("Usage: -target-detach [pid | thread-group]");
  if ( a3 == 1 )
  {
    v3 = *a2;
    v10 = (char *)v3;
    if ( *v3 == 105 )
    {
      v7 = strtoul(v3 + 1, &v10, 0);
      v8 = v7;
      if ( *v10 )
        sub_94708("Invalid syntax of thread-group id '%s'", *a2);
      v9 = sub_183A20(v7);
      if ( !v9 )
        sub_94708("Non-existent thread-group id '%d'", v8);
      v11 = *(_DWORD *)(v9 + 12);
    }
    else
    {
      v11 = strtol(v3, &v10, 10);
      if ( *v10 )
        sub_94708("Invalid identifier '%s'", *a2);
    }
    v5 = (_DWORD *)sub_23E4C8(sub_62F34, &v11);
    if ( !v5 )
      sub_94708("Thread group is empty");
    sub_23FA18(v5[2], v5[3], v5[4]);
  }
  return sub_17ECD0(0);
}
