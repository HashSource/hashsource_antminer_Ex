int __fastcall sub_A0F84(int a1)
{
  int v1; // r0
  int v2; // r4
  int v3; // r3
  const char *v4; // r0
  int v5; // r0

  v1 = sub_A0A88(a1);
  v2 = v1;
  if ( v1 )
  {
    v3 = *(_DWORD *)(v1 + 24);
    v4 = *(const char **)(v3 + 8);
    if ( !v4 )
      v4 = *(const char **)(v3 + 12);
    if ( !sub_9A6C0(v4, "___XVE") )
    {
      v5 = sub_A0E60(v2, "___XVE");
      if ( v5 )
        return v5;
    }
  }
  return v2;
}
