void __fastcall sub_1B78D8(int a1, int a2)
{
  int v3; // r0
  int v4; // r5
  int i; // r8
  int v6; // r7
  void *v7; // r10
  void *v8; // r4
  int v9; // r0
  int v10; // r1
  _DWORD *v11; // r4
  int v12; // r11
  _DWORD *v13; // r3
  int v14; // r0

  v3 = sub_1B6574(a1, a2);
  v4 = *(_DWORD *)(a1 + 176);
  for ( i = v3; v4; v4 = ((int (__fastcall *)(int, int))loc_1B7330)(a1, v4) )
  {
    v6 = sub_211F64(a1);
    v7 = sub_92564((int)sub_1B6290, v6);
    ((void (__fastcall *)(int, _DWORD))loc_212050)(v6, *(_DWORD *)(v4 + 36));
    v8 = *(void **)(v4 + 148);
    v9 = sub_163074(*(_DWORD *)(v4 + 36));
    if ( v8 != (void *)v9 )
    {
      v14 = sub_94728(
              (int)"objfiles.c",
              921,
              "%s: Assertion `%s' failed.",
              "void objfile_relocate(objfile*, const section_offsets*)",
              "debug_objfile->num_sections == gdb_bfd_count_sections (debug_objfile->obfd)");
      if ( v8 )
        sub_339E8C(v8);
      sub_339024(v14);
    }
    v10 = *(_DWORD *)(v4 + 148);
    v11 = (_DWORD *)(4 * v10);
    if ( 4 * v10 )
    {
      if ( (unsigned int)v11 > 0x3FFFFFFF )
        sub_33D044(v9, v10);
      v12 = 4 * v10;
      v11 = sub_98394(16 * v10);
      v13 = v11;
      do
        *v13++ = 0;
      while ( &v11[v12] != v13 );
      v10 = *(_DWORD *)(v4 + 148);
    }
    sub_212000(v11, v10, v6);
    i |= sub_1B6574(v4, (int)v11);
    sub_92648(v7);
    if ( v11 )
      sub_339E8C(v11);
  }
  if ( i )
    sub_DC44C();
}
