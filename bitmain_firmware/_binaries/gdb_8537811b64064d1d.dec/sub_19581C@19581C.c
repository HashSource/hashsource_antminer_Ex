int __fastcall sub_19581C(int a1, const void *a2, size_t a3)
{
  _BYTE *v3; // r4

  if ( !a1 )
    return sub_32727C(a2);
  v3 = sub_93358(a2, a3);
  *(_BYTE *)sub_5B030((unsigned int)v3, (unsigned int)&v3[a3]) = 0;
  return (int)v3;
}
