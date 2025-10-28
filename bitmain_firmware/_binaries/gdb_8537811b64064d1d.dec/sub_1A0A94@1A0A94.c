void __fastcall sub_1A0A94(char *a1, int a2, int a3)
{
  char *v3; // r3
  _BYTE *v4; // r4
  int v5; // r0
  char *v6; // [sp+4h] [bp-4h] BYREF

  v3 = a1;
  v6 = a1;
  if ( !a1 )
    sub_94708("usage: macro undef NAME", a2, a3, 0);
  while ( sub_1A2840((unsigned __int8)*v3) )
    v3 = ++v6;
  v4 = sub_1A0994((const void **)&v6, 0);
  if ( !v4 )
    sub_94708("Invalid macro name.");
  v5 = ((int (__fastcall *)(int))loc_1A34C4)(dword_487A1C);
  sub_1A3C7C(v5, -1, v4);
  free(v4);
}
