int __fastcall sub_B7B70(const char *a1, int a2, int a3, int a4, int a5, int a6)
{
  const char *v10; // r4
  const char *v11; // r0
  const char *v12; // r0

  v10 = "beg";
  if ( dword_48968C <= 1 )
    LOWORD(v11) = -30952;
  else
    LOWORD(v11) = -30964;
  HIWORD(v11) = 55;
  sub_259F38(v11);
  if ( a4 )
    v10 = "middle";
  v12 = (const char *)sub_25ACB4(a5, a6);
  return sub_259F38("%s:%d:%d:%s:%s\n", a1, a2, a3, v10, v12);
}
