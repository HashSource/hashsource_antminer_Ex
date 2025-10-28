int sub_B89E8()
{
  int v0; // r6
  int v1; // r0
  int *v2; // r0
  int v4; // r6
  int v5; // r0
  int v6; // r4
  int v7; // r0

  v0 = dword_478218;
  if ( !strcmp((const char *)dword_478218, "auto") )
  {
    dword_478214 = 0;
    v1 = sub_B81D0(0, 2, 2, 0, 0, -1, 0);
    if ( v1 )
    {
LABEL_3:
      v2 = (int *)sub_242FB4(v1);
      return sub_B899C(*v2);
    }
    sub_94728((int)"arch-utils.c", 504, "could not select an architecture automatically");
  }
  else
  {
    v4 = sub_2A65A4(v0);
    if ( v4 )
    {
      v1 = sub_B81D0(v4, 2, 2, 0, 0, -1, 0);
      if ( v1 )
        dword_478214 = v4;
      else
        v1 = sub_259880("Architecture `%s' not recognized.\n", (const char *)dword_478218);
      goto LABEL_3;
    }
  }
  v5 = sub_94728((int)"arch-utils.c", 511, "set_architecture: bfd_scan_arch failed");
  if ( dword_46BC0C == 2 )
  {
    v6 = v5;
    v7 = sub_B8974(v5);
    if ( ((int (__fastcall *)(int))loc_165BE0)(v7) )
      return sub_2594D8(v6, "The target endianness is set automatically (currently little endian)\n");
    else
      return sub_2594D8(v6, "The target endianness is set automatically (currently big endian)\n");
  }
  else if ( dword_46BC0C )
  {
    return sub_2594D8(v5, "The target is assumed to be little endian\n");
  }
  else
  {
    return sub_2594D8(v5, "The target is assumed to be big endian\n");
  }
}
