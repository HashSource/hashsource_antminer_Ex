void __noreturn sub_639F8()
{
  int v0; // r4
  int v1; // r0
  _DWORD *v2; // r0

  v0 = sub_191AF8();
  if ( dword_474874 )
    sub_256878(dword_474874, *(_DWORD *)(v0 + 36));
  v1 = sub_256878("^exit\n", *(_DWORD *)(v0 + 36));
  v2 = (_DWORD *)sub_243004(v1);
  sub_690D0(*v2, *(_DWORD *)(v0 + 36));
  sub_256834(*(_DWORD *)(v0 + 36));
  sub_2446E0(0, 0);
}
