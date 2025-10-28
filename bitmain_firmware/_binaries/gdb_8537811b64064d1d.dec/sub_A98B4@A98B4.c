int __fastcall sub_A98B4(int a1)
{
  char *v1; // r0
  const char *v2; // r0
  char *v3; // r0

  v1 = sub_A972C(a1);
  if ( v1 && (v2 = sub_9DC24(v1, 1), (v3 = sub_9D234(v2)) != 0) )
    return *((_DWORD *)v3 + 6);
  else
    return 0;
}
