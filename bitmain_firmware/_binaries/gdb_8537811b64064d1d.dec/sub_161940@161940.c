void __fastcall sub_161940(_BYTE *a1)
{
  int v2; // r0
  char *v3; // r0
  char *v4; // r4
  int v5; // r0
  _DWORD *v6; // r0
  _DWORD *v7; // r0
  int v8; // [sp+4h] [bp-4h] BYREF

  if ( !sub_22EBE4(a1) )
    sub_22F144();
  if ( a1 && *a1 )
  {
    v3 = (char *)sub_29B938(a1);
    v4 = v3;
  }
  else
  {
    v2 = ps_getpid_0((int)&dword_4878EC);
    v3 = sub_93168("core.%d", v2);
    v4 = v3;
  }
  if ( dword_48A514 )
  {
    v7 = (_DWORD *)sub_242FB4(v3);
    sub_25A440(*v7, "Opening corefile '%s' for output.\n", v4);
  }
  sub_1615E0(&v8, v4);
  v5 = sub_1616D0(v8);
  v6 = (_DWORD *)sub_242FB4(v5);
  sub_25A440(*v6, "Saved corefile %s\n", v4);
  if ( v8 )
    ((void (*)(void))loc_1625D0)();
  if ( v4 )
    free(v4);
}
