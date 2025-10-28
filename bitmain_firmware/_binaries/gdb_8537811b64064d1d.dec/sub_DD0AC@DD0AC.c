void __fastcall sub_DD0AC(unsigned __int8 *a1, int a2, int a3, unsigned __int8 *a4)
{
  int v6; // r0
  _DWORD *v7; // r4
  int v8; // r1
  unsigned int v9; // r3
  bool v10; // cc
  const char *v11; // r0
  unsigned __int8 *v12; // [sp+4h] [bp-8h] BYREF

  if ( !a1 )
    sub_51EC4("breakpoint number");
  v12 = a1;
  v6 = sub_5ADE4(&v12, a2, a3, a4);
  if ( !v6 )
    sub_94708("Bad breakpoint argument: '%s'", (const char *)a1);
  v7 = (_DWORD *)dword_478348;
  if ( !dword_478348 )
    goto LABEL_13;
  if ( v6 != *(_DWORD *)(dword_478348 + 24) )
  {
    while ( 1 )
    {
      v7 = (_DWORD *)v7[2];
      if ( !v7 )
        break;
      if ( v7[6] == v6 )
        goto LABEL_7;
    }
LABEL_13:
    sub_94708("No breakpoint number %d.", v6);
  }
LABEL_7:
  if ( sub_157F94(v7, 0) )
  {
    v11 = (const char *)sub_157968();
    sub_94708(
      "Only one stop condition allowed.  There is currently a %s stop condition defined for this breakpoint.",
      v11);
  }
  sub_CD434(v7, v12, a2);
  v9 = v7[3];
  v10 = v9 > 0x1E;
  if ( v9 != 30 )
    v10 = v9 - 1 > 1;
  if ( !v10 )
    sub_D7314(1, v8, v9 - 1);
}
