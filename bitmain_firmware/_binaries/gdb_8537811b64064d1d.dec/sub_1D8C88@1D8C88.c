const char *__fastcall sub_1D8C88(int a1)
{
  char *v1; // r0
  int v2; // r0
  const char *v3; // r4
  _DWORD *v4; // r0
  _DWORD *v6; // r0

  if ( off_46DAB8 && !off_46DAB8[2] )
  {
    v1 = sub_988A8(off_46DAB8[6], off_46DAB8[7]);
    v2 = sub_32727C(v1);
    v3 = (const char *)v2;
    if ( dword_487D4C )
    {
      v4 = (_DWORD *)sub_242FF0(v2);
      sub_2594D8(*v4, "record_full_get_bookmark returns %s\n", v3);
    }
    return v3;
  }
  v3 = (const char *)dword_487D4C;
  if ( !dword_487D4C )
    return v3;
  v6 = (_DWORD *)sub_242FF0(a1);
  sub_2594D8(*v6, "record_full_get_bookmark returns NULL\n");
  return 0;
}
