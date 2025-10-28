void __fastcall sub_179810(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v6; // r0
  int v7; // r0
  int v8; // r6

  v6 = (_DWORD *)sub_26BC98(*a1);
  v7 = sub_171280(v6);
  if ( **(_BYTE **)(v7 + 24) == 3 )
  {
    v8 = v7;
    sub_170068(v7);
    if ( v8 != a4 )
      *a1 = sub_2647F0(a4, *a1);
    JUMPOUT(0x179750);
  }
  sub_94708("Only classes can have virtual functions.");
}
