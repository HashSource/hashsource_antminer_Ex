int __fastcall sub_288264(const char *a1, int a2, int a3)
{
  const char *v3; // r3
  int v4; // r0

  v3 = a1;
  if ( !a1 || (v3 = (const char *)*(unsigned __int8 *)a1, !*a1) )
  {
    v4 = 500;
LABEL_4:
    sub_297F0C(v4, a2, a3, v3);
    return 0;
  }
  v4 = strtol(a1, 0, 10);
  if ( v4 >= 0 )
    goto LABEL_4;
  return 1;
}
